/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AARequest.h>

@class NSDictionary, AASigningSession, ACAccount;

@interface AASetupAssistantSetupDelegatesRequest : AARequest {

	NSDictionary* setupParameters;
	AASigningSession* signingSession;
	ACAccount* _account;

}
+(Class)responseClass;
-(id)urlRequest;
-(id)urlString;
-(id)initWithAccount:(id)arg1 withSetupParameters:(id)arg2 signingSession:(id)arg3 ;
@end

