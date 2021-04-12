/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDRemoteLoginBase.h>
#import <libobjc.A.dylib/HMDRemoteLoginReceiverAuthenticationDelegate.h>

@class HMDRemoteLoginReceiverSession, NSString;

@interface HMDRemoteLoginReceiver : HMDRemoteLoginBase <HMDRemoteLoginReceiverAuthenticationDelegate> {

	HMDRemoteLoginReceiverSession* _loginSession;

}

@property (nonatomic,retain) HMDRemoteLoginReceiverSession * loginSession;              //@synthesize loginSession=_loginSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)registerForMessages;
-(void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)setLoginSession:(HMDRemoteLoginReceiverSession *)arg1 ;
-(HMDRemoteLoginReceiverSession *)loginSession;
-(void)didCompleteAuthentication:(id)arg1 response:(id)arg2 ;
-(void)auditLoggedInAccount;
-(void)_handleCompanionAuthenticationRequest:(id)arg1 ;
-(void)_handleProxyDeviceRequest:(id)arg1 ;
-(void)_handleProxyAuthenticationRequest:(id)arg1 ;
-(void)_handleSignoutRequest:(id)arg1 ;
-(void)_authenticate:(id)arg1 message:(id)arg2 ;
-(void)auditLoggedInAccountFor:(id)arg1 ;
-(void)_auditLoggedInAccountFor:(id)arg1 ;
-(void)_callCompletion:(id)arg1 ;
@end

