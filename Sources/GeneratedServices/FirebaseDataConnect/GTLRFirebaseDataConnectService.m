// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase Data Connect API (firebasedataconnect/v1beta)
// Description:
//   Firebase Data Connect is a relational database service for mobile and web
//   apps that lets you build and scale using a fully-managed PostgreSQL
//   database powered by Cloud SQL. The REST API lets developers manage the
//   connections to their database, change the schema of their database, and
//   query the database.
// Documentation:
//   https://firebase.google.com/docs/data-connect

#import <GoogleAPIClientForREST/GTLRFirebaseDataConnect.h>

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopeFirebaseDataConnectCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLRFirebaseDataConnectService
//

@implementation GTLRFirebaseDataConnectService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://firebasedataconnect.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end