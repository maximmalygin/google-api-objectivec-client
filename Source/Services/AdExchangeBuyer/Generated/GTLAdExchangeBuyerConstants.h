/* Copyright (c) 2015 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLAdExchangeBuyerConstants.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Ad Exchange Buyer API (adexchangebuyer/v1.4)
// Description:
//   Accesses your bidding-account information, submits creatives for
//   validation, finds available direct deals, and retrieves performance
//   reports.
// Documentation:
//   https://developers.google.com/ad-exchange/buyer-rest

#import <Foundation/Foundation.h>

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLDefines.h"
#else
  #import "GTLDefines.h"
#endif

// Authorization scope
// Manage your Ad Exchange buyer account configuration
GTL_EXTERN NSString * const kGTLAuthScopeAdExchangeBuyerAdexchangeBuyer;  // "https://www.googleapis.com/auth/adexchange.buyer"

// GTLQueryAdExchangeBuyer - DealsStatusFilter
GTL_EXTERN NSString * const kGTLAdExchangeBuyerDealsStatusFilterApproved;  // "approved"
GTL_EXTERN NSString * const kGTLAdExchangeBuyerDealsStatusFilterConditionallyApproved;  // "conditionally_approved"
GTL_EXTERN NSString * const kGTLAdExchangeBuyerDealsStatusFilterDisapproved;  // "disapproved"
GTL_EXTERN NSString * const kGTLAdExchangeBuyerDealsStatusFilterNotChecked;  // "not_checked"

// GTLQueryAdExchangeBuyer - OpenAuctionStatusFilter
GTL_EXTERN NSString * const kGTLAdExchangeBuyerOpenAuctionStatusFilterApproved;  // "approved"
GTL_EXTERN NSString * const kGTLAdExchangeBuyerOpenAuctionStatusFilterConditionallyApproved;  // "conditionally_approved"
GTL_EXTERN NSString * const kGTLAdExchangeBuyerOpenAuctionStatusFilterDisapproved;  // "disapproved"
GTL_EXTERN NSString * const kGTLAdExchangeBuyerOpenAuctionStatusFilterNotChecked;  // "not_checked"
