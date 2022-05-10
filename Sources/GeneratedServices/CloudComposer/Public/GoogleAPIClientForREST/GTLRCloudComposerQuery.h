// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Composer API (composer/v1)
// Description:
//   Manages Apache Airflow environments on Google Cloud Platform.
// Documentation:
//   https://cloud.google.com/composer/

#import <GoogleAPIClientForREST/GTLRQuery.h>

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

#import "GTLRCloudComposerObjects.h"

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Cloud Composer query classes.
 */
@interface GTLRCloudComposerQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Create a new environment.
 *
 *  Method: composer.projects.locations.environments.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudComposerCloudPlatform
 */
@interface GTLRCloudComposerQuery_ProjectsLocationsEnvironmentsCreate : GTLRCloudComposerQuery

/**
 *  The parent must be of the form
 *  "projects/{projectId}/locations/{locationId}".
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudComposer_Operation.
 *
 *  Create a new environment.
 *
 *  @param object The @c GTLRCloudComposer_Environment to include in the query.
 *  @param parent The parent must be of the form
 *    "projects/{projectId}/locations/{locationId}".
 *
 *  @return GTLRCloudComposerQuery_ProjectsLocationsEnvironmentsCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudComposer_Environment *)object
                         parent:(NSString *)parent;

@end

/**
 *  Delete an environment.
 *
 *  Method: composer.projects.locations.environments.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudComposerCloudPlatform
 */
@interface GTLRCloudComposerQuery_ProjectsLocationsEnvironmentsDelete : GTLRCloudComposerQuery

/**
 *  The environment to delete, in the form:
 *  "projects/{projectId}/locations/{locationId}/environments/{environmentId}"
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudComposer_Operation.
 *
 *  Delete an environment.
 *
 *  @param name The environment to delete, in the form:
 *    "projects/{projectId}/locations/{locationId}/environments/{environmentId}"
 *
 *  @return GTLRCloudComposerQuery_ProjectsLocationsEnvironmentsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Get an existing environment.
 *
 *  Method: composer.projects.locations.environments.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudComposerCloudPlatform
 */
@interface GTLRCloudComposerQuery_ProjectsLocationsEnvironmentsGet : GTLRCloudComposerQuery

/**
 *  The resource name of the environment to get, in the form:
 *  "projects/{projectId}/locations/{locationId}/environments/{environmentId}"
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudComposer_Environment.
 *
 *  Get an existing environment.
 *
 *  @param name The resource name of the environment to get, in the form:
 *    "projects/{projectId}/locations/{locationId}/environments/{environmentId}"
 *
 *  @return GTLRCloudComposerQuery_ProjectsLocationsEnvironmentsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  List environments.
 *
 *  Method: composer.projects.locations.environments.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudComposerCloudPlatform
 */
@interface GTLRCloudComposerQuery_ProjectsLocationsEnvironmentsList : GTLRCloudComposerQuery

/** The maximum number of environments to return. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The next_page_token value returned from a previous List request, if any.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  List environments in the given project and location, in the form:
 *  "projects/{projectId}/locations/{locationId}"
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudComposer_ListEnvironmentsResponse.
 *
 *  List environments.
 *
 *  @param parent List environments in the given project and location, in the
 *    form: "projects/{projectId}/locations/{locationId}"
 *
 *  @return GTLRCloudComposerQuery_ProjectsLocationsEnvironmentsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Update an environment.
 *
 *  Method: composer.projects.locations.environments.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudComposerCloudPlatform
 */
@interface GTLRCloudComposerQuery_ProjectsLocationsEnvironmentsPatch : GTLRCloudComposerQuery

/**
 *  The relative resource name of the environment to update, in the form:
 *  "projects/{projectId}/locations/{locationId}/environments/{environmentId}"
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Required. A comma-separated list of paths, relative to `Environment`, of
 *  fields to update. For example, to set the version of scikit-learn to install
 *  in the environment to 0.19.0 and to remove an existing installation of
 *  numpy, the `updateMask` parameter would include the following two `paths`
 *  values: "config.softwareConfig.pypiPackages.scikit-learn" and
 *  "config.softwareConfig.pypiPackages.numpy". The included patch environment
 *  would specify the scikit-learn version as follows: { "config":{
 *  "softwareConfig":{ "pypiPackages":{ "scikit-learn":"==0.19.0" } } } } Note
 *  that in the above example, any existing PyPI packages other than
 *  scikit-learn and numpy will be unaffected. Only one update type may be
 *  included in a single request's `updateMask`. For example, one cannot update
 *  both the PyPI packages and labels in the same request. However, it is
 *  possible to update multiple members of a map field simultaneously in the
 *  same request. For example, to set the labels "label1" and "label2" while
 *  clearing "label3" (assuming it already exists), one can provide the paths
 *  "labels.label1", "labels.label2", and "labels.label3" and populate the patch
 *  environment as follows: { "labels":{ "label1":"new-label1-value"
 *  "label2":"new-label2-value" } } Note that in the above example, any existing
 *  labels that are not included in the `updateMask` will be unaffected. It is
 *  also possible to replace an entire map field by providing the map field's
 *  path in the `updateMask`. The new value of the field will be that which is
 *  provided in the patch environment. For example, to delete all pre-existing
 *  user-specified PyPI packages and install botocore at version 1.7.14, the
 *  `updateMask` would contain the path "config.softwareConfig.pypiPackages",
 *  and the patch environment would be the following: { "config":{
 *  "softwareConfig":{ "pypiPackages":{ "botocore":"==1.7.14" } } } } **Note:**
 *  Only the following fields can be updated: *
 *  `config.softwareConfig.pypiPackages` * Replace all custom custom PyPI
 *  packages. If a replacement package map is not included in `environment`, all
 *  custom PyPI packages are cleared. It is an error to provide both this mask
 *  and a mask specifying an individual package. *
 *  `config.softwareConfig.pypiPackages.`packagename * Update the custom PyPI
 *  package *packagename*, preserving other packages. To delete the package,
 *  include it in `updateMask`, and omit the mapping for it in
 *  `environment.config.softwareConfig.pypiPackages`. It is an error to provide
 *  both a mask of this form and the `config.softwareConfig.pypiPackages` mask.
 *  * `labels` * Replace all environment labels. If a replacement labels map is
 *  not included in `environment`, all labels are cleared. It is an error to
 *  provide both this mask and a mask specifying one or more individual labels.
 *  * `labels.`labelName * Set the label named *labelName*, while preserving
 *  other labels. To delete the label, include it in `updateMask` and omit its
 *  mapping in `environment.labels`. It is an error to provide both a mask of
 *  this form and the `labels` mask. * `config.nodeCount` * Horizontally scale
 *  the number of nodes in the environment. An integer greater than or equal to
 *  3 must be provided in the `config.nodeCount` field. Supported for Cloud
 *  Composer environments in versions composer-1.*.*-airflow-*.*.*. *
 *  `config.webServerNetworkAccessControl` * Replace the environment's current
 *  `WebServerNetworkAccessControl`. *
 *  `config.softwareConfig.airflowConfigOverrides` * Replace all Apache Airflow
 *  config overrides. If a replacement config overrides map is not included in
 *  `environment`, all config overrides are cleared. It is an error to provide
 *  both this mask and a mask specifying one or more individual config
 *  overrides. * `config.softwareConfig.airflowConfigOverrides.`section-name *
 *  Override the Apache Airflow config property *name* in the section named
 *  *section*, preserving other properties. To delete the property override,
 *  include it in `updateMask` and omit its mapping in
 *  `environment.config.softwareConfig.airflowConfigOverrides`. It is an error
 *  to provide both a mask of this form and the
 *  `config.softwareConfig.airflowConfigOverrides` mask. *
 *  `config.softwareConfig.envVariables` * Replace all environment variables. If
 *  a replacement environment variable map is not included in `environment`, all
 *  custom environment variables are cleared. It is an error to provide both
 *  this mask and a mask specifying one or more individual environment
 *  variables. * `config.softwareConfig.schedulerCount` * Horizontally scale the
 *  number of schedulers in Airflow. A positive integer not greater than the
 *  number of nodes must be provided in the
 *  `config.softwareConfig.schedulerCount` field. Supported for Cloud Composer
 *  environments in versions composer-1.*.*-airflow-2.*.*. *
 *  `config.databaseConfig.machineType` * Cloud SQL machine type used by Airflow
 *  database. It has to be one of: db-n1-standard-2, db-n1-standard-4,
 *  db-n1-standard-8 or db-n1-standard-16. Supported for Cloud Composer
 *  environments in versions composer-1.*.*-airflow-*.*.*. *
 *  `config.webServerConfig.machineType` * Machine type on which Airflow web
 *  server is running. It has to be one of: composer-n1-webserver-2,
 *  composer-n1-webserver-4 or composer-n1-webserver-8. Supported for Cloud
 *  Composer environments in versions composer-1.*.*-airflow-*.*.*.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRCloudComposer_Operation.
 *
 *  Update an environment.
 *
 *  @param object The @c GTLRCloudComposer_Environment to include in the query.
 *  @param name The relative resource name of the environment to update, in the
 *    form:
 *    "projects/{projectId}/locations/{locationId}/environments/{environmentId}"
 *
 *  @return GTLRCloudComposerQuery_ProjectsLocationsEnvironmentsPatch
 */
+ (instancetype)queryWithObject:(GTLRCloudComposer_Environment *)object
                           name:(NSString *)name;

@end

/**
 *  List ImageVersions for provided location.
 *
 *  Method: composer.projects.locations.imageVersions.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudComposerCloudPlatform
 */
@interface GTLRCloudComposerQuery_ProjectsLocationsImageVersionsList : GTLRCloudComposerQuery

/** Whether or not image versions from old releases should be included. */
@property(nonatomic, assign) BOOL includePastReleases;

/** The maximum number of image_versions to return. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The next_page_token value returned from a previous List request, if any.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  List ImageVersions in the given project and location, in the form:
 *  "projects/{projectId}/locations/{locationId}"
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudComposer_ListImageVersionsResponse.
 *
 *  List ImageVersions for provided location.
 *
 *  @param parent List ImageVersions in the given project and location, in the
 *    form: "projects/{projectId}/locations/{locationId}"
 *
 *  @return GTLRCloudComposerQuery_ProjectsLocationsImageVersionsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  Method: composer.projects.locations.operations.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudComposerCloudPlatform
 */
@interface GTLRCloudComposerQuery_ProjectsLocationsOperationsDelete : GTLRCloudComposerQuery

/** The name of the operation resource to be deleted. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudComposer_Empty.
 *
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  @param name The name of the operation resource to be deleted.
 *
 *  @return GTLRCloudComposerQuery_ProjectsLocationsOperationsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: composer.projects.locations.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudComposerCloudPlatform
 */
@interface GTLRCloudComposerQuery_ProjectsLocationsOperationsGet : GTLRCloudComposerQuery

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudComposer_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @return GTLRCloudComposerQuery_ProjectsLocationsOperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`. NOTE: the
 *  `name` binding allows API services to override the binding to use different
 *  resource name schemes, such as `users/ * /operations`. To override the
 *  binding, API services can add a binding such as `"/v1/{name=users/
 *  *}/operations"` to their service configuration. For backwards compatibility,
 *  the default name includes the operations collection id, however overriding
 *  users must ensure the name binding is the parent resource, without the
 *  operations collection id.
 *
 *  Method: composer.projects.locations.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudComposerCloudPlatform
 */
@interface GTLRCloudComposerQuery_ProjectsLocationsOperationsList : GTLRCloudComposerQuery

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The name of the operation's parent resource. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRCloudComposer_ListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`. NOTE: the
 *  `name` binding allows API services to override the binding to use different
 *  resource name schemes, such as `users/ * /operations`. To override the
 *  binding, API services can add a binding such as `"/v1/{name=users/
 *  *}/operations"` to their service configuration. For backwards compatibility,
 *  the default name includes the operations collection id, however overriding
 *  users must ensure the name binding is the parent resource, without the
 *  operations collection id.
 *
 *  @param name The name of the operation's parent resource.
 *
 *  @return GTLRCloudComposerQuery_ProjectsLocationsOperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop