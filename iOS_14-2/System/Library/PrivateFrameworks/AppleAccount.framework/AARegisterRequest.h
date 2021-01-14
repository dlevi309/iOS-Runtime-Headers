/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAAuthenticateRequest.h>

@class NSMutableDictionary;

@interface AARegisterRequest : AAAuthenticateRequest {

	NSMutableDictionary* _additionalCookieHeaders;

}
+(Class)responseClass;
-(id)urlString;
-(id)urlRequest;
-(id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3 ;
-(void)addCookieHeaders:(id)arg1 ;
@end

