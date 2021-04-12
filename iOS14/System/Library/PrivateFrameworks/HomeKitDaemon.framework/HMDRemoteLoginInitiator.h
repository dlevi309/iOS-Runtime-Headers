/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDRemoteLoginBase.h>
#import <libobjc.A.dylib/HMDRemoteLoginInitiatorAuthenticationDelegate.h>

@class HMDRemoteLoginInitiatorSession, HMDRemoteLoginAnisetteDataProviderBridge, HMDRemoteLoginMessageSender, NSString;

@interface HMDRemoteLoginInitiator : HMDRemoteLoginBase <HMDRemoteLoginInitiatorAuthenticationDelegate> {

	HMDRemoteLoginInitiatorSession* _loginSession;
	HMDRemoteLoginAnisetteDataProviderBridge* _anisetteProviderBridge;
	HMDRemoteLoginMessageSender* _remoteMessageSender;

}

@property (nonatomic,retain) HMDRemoteLoginInitiatorSession * loginSession;                                  //@synthesize loginSession=_loginSession - In the implementation block
@property (nonatomic,retain) HMDRemoteLoginAnisetteDataProviderBridge * anisetteProviderBridge;              //@synthesize anisetteProviderBridge=_anisetteProviderBridge - In the implementation block
@property (nonatomic,retain) HMDRemoteLoginMessageSender * remoteMessageSender;                              //@synthesize remoteMessageSender=_remoteMessageSender - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
-(void)registerForMessages;
-(void)setLoginSession:(HMDRemoteLoginInitiatorSession *)arg1 ;
-(HMDRemoteLoginMessageSender *)remoteMessageSender;
-(id)messageReceiverChildren;
-(void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2 ;
-(id)initWithUUID:(id)arg1 accessory:(id)arg2 remoteLoginHandler:(id)arg3 ;
-(void)setRemoteMessageSender:(HMDRemoteLoginMessageSender *)arg1 ;
-(HMDRemoteLoginAnisetteDataProviderBridge *)anisetteProviderBridge;
-(void)_handleRemoteLoginCompanionAuthentication:(id)arg1 ;
-(void)_handleRemoteLoginProxiedDevice:(id)arg1 ;
-(void)_handleRemoteLoginProxyAuthentication:(id)arg1 ;
-(void)_handleRemoteLoginSignout:(id)arg1 ;
-(void)_companionLoginWithSessionID:(id)arg1 account:(id)arg2 remoteDevice:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleProxyDeviceResponse:(id)arg1 error:(id)arg2 message:(id)arg3 ;
-(void)_resetCurrentSession:(id)arg1 ;
-(void)_proxyLoginWithSessionID:(id)arg1 authResults:(id)arg2 remoteDevice:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleSignoutResponse:(id)arg1 error:(id)arg2 message:(id)arg3 ;
-(HMDRemoteLoginInitiatorSession *)loginSession;
-(void)_callCompletion:(id)arg1 loggedInAccount:(id)arg2 authSession:(id)arg3 ;
-(void)didCompleteAuthentication:(id)arg1 error:(id)arg2 loggedInAccount:(id)arg3 ;
-(void)setAnisetteProviderBridge:(HMDRemoteLoginAnisetteDataProviderBridge *)arg1 ;
@end

