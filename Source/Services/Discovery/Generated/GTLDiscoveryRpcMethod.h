/* Copyright (c) 2012 Google Inc.
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
//  GTLDiscoveryRpcMethod.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   APIs Discovery Service (discovery/v1)
// Description:
//   Lets you discover information about other Google APIs, such as what APIs
//   are available, the resource and method details for each API
// Documentation:
//   https://developers.google.com/discovery/
// Classes:
//   GTLDiscoveryRpcMethod (0 custom class methods, 12 custom properties)
//   GTLDiscoveryRpcMethodMediaUpload (0 custom class methods, 2 custom properties)
//   GTLDiscoveryRpcMethodParameters (0 custom class methods, 0 custom properties)
//   GTLDiscoveryRpcMethodReturns (0 custom class methods, 1 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLDiscoveryJsonSchema;
@class GTLDiscoveryRpcMethodMediaUpload;
@class GTLDiscoveryRpcMethodParameters;
@class GTLDiscoveryRpcMethodReturns;

// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRpcMethod
//

@interface GTLDiscoveryRpcMethod : GTLObject

// Whether the method can be made using an HTTP GET JSON-RPC request.
@property (retain) NSNumber *allowGet;  // boolValue

// Description of this method.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (copy) NSString *descriptionProperty;

// A unique ID for this method. This property can be used to match methods
// between different versions of Discovery.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// Media upload parameters.
@property (retain) GTLDiscoveryRpcMethodMediaUpload *mediaUpload;

// Ordered list of required parameters, serves as a hint to clients on how to
// structure their method signatures. The array is ordered such that the
// "most-significant" parameter appears first.
@property (retain) NSArray *parameterOrder;  // of NSString

// Description for all parameters in this method.
@property (retain) GTLDiscoveryRpcMethodParameters *parameters;

// The schema for the response.
@property (retain) GTLDiscoveryRpcMethodReturns *returns;

// OAuth 2.0 scopes applicable to this method.
@property (retain) NSArray *scopes;  // of any JSON type

// Whether this method supports media download.
@property (retain) NSNumber *supportsMediaDownload;  // boolValue

// Whether this method supports media upload.
@property (retain) NSNumber *supportsMediaUpload;  // boolValue

// Whether this method supports patch semantics.
@property (retain) NSNumber *supportsPatch;  // boolValue

// Whether this method supports subscriptions.
@property (retain) NSNumber *supportsSubscription;  // boolValue

@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRpcMethodMediaUpload
//

@interface GTLDiscoveryRpcMethodMediaUpload : GTLObject

// MIME Media Ranges for acceptable media uploads to this method.
@property (retain) NSArray *accept;  // of NSString

// Maximum size of a media upload, such as "1MB", "2GB" or "3TB".
@property (copy) NSString *maxSize;

@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRpcMethodParameters
//

@interface GTLDiscoveryRpcMethodParameters : GTLObject
// This object is documented as having more properties that are
// GTLDiscoveryJsonSchema. Use -additionalJSONKeys and
// -additionalPropertyForName: to get the list of properties and then fetch
// them; or -additionalProperties to fetch them all at once.
@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRpcMethodReturns
//

@interface GTLDiscoveryRpcMethodReturns : GTLObject

// Schema ID for the response schema.
@property (copy) NSString *xRef;

@end
