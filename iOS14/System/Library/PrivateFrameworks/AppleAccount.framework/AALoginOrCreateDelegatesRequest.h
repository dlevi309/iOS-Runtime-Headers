/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, NSDictionary, AASigningSession;

@interface AALoginOrCreateDelegatesRequest : AARequest {

	ACAccount* _account;
	NSDictionary* _parameters;
	AASigningSession* _signingSession;

}
+(Class)responseClass;
-(id)urlString;
-(id)urlRequest;
-(id)initWithAccount:(id)arg1 parameters:(id)arg2 signingSession:(id)arg3 ;
@end

