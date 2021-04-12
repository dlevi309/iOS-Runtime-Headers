/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

