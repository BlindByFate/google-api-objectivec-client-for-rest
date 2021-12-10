// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Authorized Buyers Marketplace API (authorizedbuyersmarketplace/v1)
// Description:
//   The Authorized Buyers Marketplace API allows buyers programmatically
//   discover inventory; propose, retrieve and negotiate deals with publishers.
// Documentation:
//   https://developers.google.com/authorized-buyers/apis/marketplace/reference/rest/

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scope

/**
 *  Authorization scope: See, create, edit, and delete your Authorized Buyers
 *  Marketplace entities.
 *
 *  Value "https://www.googleapis.com/auth/authorized-buyers-marketplace"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeAuthorizedBuyersMarketplaceAuthorizedBuyersMarketplace;

// ----------------------------------------------------------------------------
//   GTLRAuthorizedBuyersMarketplaceService
//

/**
 *  Service for executing Authorized Buyers Marketplace API queries.
 *
 *  The Authorized Buyers Marketplace API allows buyers programmatically
 *  discover inventory; propose, retrieve and negotiate deals with publishers.
 */
@interface GTLRAuthorizedBuyersMarketplaceService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRAuthorizedBuyersMarketplaceQuery.h. The query can the be sent with
// GTLRService's execute methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop