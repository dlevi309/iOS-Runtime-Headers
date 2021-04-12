/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AARequest.h>

@class NSDictionary, ACAccount;

@interface AAGenericTermsUIRequest : AARequest {

	NSDictionary* _requestDictionary;
	ACAccount* _account;
	BOOL _preferPassword;

}
+(Class)responseClass;
-(id)initWithParameters:(id)arg1 ;
-(id)urlRequest;
-(id)urlString;
-(id)initWithAccount:(id)arg1 parameters:(id)arg2 ;
-(id)initWithAccount:(id)arg1 parameters:(id)arg2 preferPassword:(BOOL)arg3 ;
@end

