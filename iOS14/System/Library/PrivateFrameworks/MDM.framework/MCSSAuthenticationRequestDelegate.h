/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MDM.framework/MDM
*/

#import <MDM/MCSSRequestDelegate.h>
#import <libobjc.A.dylib/SSAuthenticateRequestDelegate.h>

@class SSAccount, SSAuthenticateRequest, NSString;

@interface MCSSAuthenticationRequestDelegate : MCSSRequestDelegate <SSAuthenticateRequestDelegate> {

	SSAccount* _authenticatedAccount;

}

@property (nonatomic,retain,readonly) SSAuthenticateRequest * request; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithAuthenticationContext:(id)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)authenticateRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)storeLoginFailedError;
@end

