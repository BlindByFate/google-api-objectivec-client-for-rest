// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Data Portability API (dataportability/v1beta)
// Description:
//   The Data Portability API lets you build applications that request
//   authorization from a user to move a copy of data from Google services into
//   your application. This enables data portability and facilitates switching
//   services.
// Documentation:
//   https://developers.google.com/data-portability

#import <GoogleAPIClientForREST/GTLRDataPortabilityObjects.h>

// ----------------------------------------------------------------------------
// Constants

// GTLRDataPortability_PortabilityArchiveState.state
NSString * const kGTLRDataPortability_PortabilityArchiveState_State_Cancelled = @"CANCELLED";
NSString * const kGTLRDataPortability_PortabilityArchiveState_State_Complete = @"COMPLETE";
NSString * const kGTLRDataPortability_PortabilityArchiveState_State_Failed = @"FAILED";
NSString * const kGTLRDataPortability_PortabilityArchiveState_State_InProgress = @"IN_PROGRESS";
NSString * const kGTLRDataPortability_PortabilityArchiveState_State_StateUnspecified = @"STATE_UNSPECIFIED";

// ----------------------------------------------------------------------------
//
//   GTLRDataPortability_Empty
//

@implementation GTLRDataPortability_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRDataPortability_InitiatePortabilityArchiveRequest
//

@implementation GTLRDataPortability_InitiatePortabilityArchiveRequest
@dynamic resources;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"resources" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDataPortability_InitiatePortabilityArchiveResponse
//

@implementation GTLRDataPortability_InitiatePortabilityArchiveResponse
@dynamic archiveJobId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDataPortability_PortabilityArchiveState
//

@implementation GTLRDataPortability_PortabilityArchiveState
@dynamic name, state, urls;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"urls" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDataPortability_ResetAuthorizationRequest
//

@implementation GTLRDataPortability_ResetAuthorizationRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRDataPortability_RetryPortabilityArchiveRequest
//

@implementation GTLRDataPortability_RetryPortabilityArchiveRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRDataPortability_RetryPortabilityArchiveResponse
//

@implementation GTLRDataPortability_RetryPortabilityArchiveResponse
@dynamic archiveJobId;
@end