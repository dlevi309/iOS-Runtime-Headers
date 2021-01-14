/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <AppleAccount/AARequest.h>

@class NSString;

@interface PLQuotaRequest : AARequest {

	NSString* _authToken;
	NSString* _personID;

}
-(id)urlRequest;
-(id)initWithURLString:(id)arg1 authToken:(id)arg2 personID:(id)arg3 ;
@end

