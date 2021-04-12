/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIUserActionTargetDiscovering.h>

@protocol CNUIUserActionTargetDiscovering <NSObject>
@required
-(id)thirdPartyTargetsForActionTypes:(id)arg1;
-(id)observableForTargetsChangedForActionType:(id)arg1 schedulerProvider:(id)arg2;
-(id)targetsForActionType:(id)arg1;
-(id)thirdPartyTargetsForBundleIdentifier:(id)arg1;

@end


@protocol CNLSApplicationWorkspace, CNTUCallProviderManager, CNMCProfileConnection, CNCapabilities, CNSchedulerProvider;
@class CNUIUserActionTargetDiscoveryCache, NSString;

@interface CNUIUserActionTargetDiscovering : NSObject <CNUIUserActionTargetDiscovering> {

	id<CNLSApplicationWorkspace> _applicationWorkspace;
	id<CNTUCallProviderManager> _callProviderManager;
	id<CNMCProfileConnection> _profileConnection;
	id<CNCapabilities> _capabilities;
	id<CNSchedulerProvider> _schedulerProvider;
	id<CNSchedulerProvider> _highLatencySchedulerProvider;
	CNUIUserActionTargetDiscoveryCache* _cache;

}

@property (nonatomic,readonly) id<CNLSApplicationWorkspace> applicationWorkspace;                 //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
@property (nonatomic,readonly) id<CNTUCallProviderManager> callProviderManager;                   //@synthesize callProviderManager=_callProviderManager - In the implementation block
@property (nonatomic,readonly) id<CNMCProfileConnection> profileConnection;                       //@synthesize profileConnection=_profileConnection - In the implementation block
@property (nonatomic,readonly) id<CNCapabilities> capabilities;                                   //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                         //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> highLatencySchedulerProvider;              //@synthesize highLatencySchedulerProvider=_highLatencySchedulerProvider - In the implementation block
@property (nonatomic,readonly) CNUIUserActionTargetDiscoveryCache * cache;                        //@synthesize cache=_cache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)os_log;
+(BOOL)isSkypeAvailableWithEnvironment:(id)arg1 ;
+(id)applicationProxiesForIntent:(id)arg1 applicationWorkspace:(id)arg2 ;
-(void)dealloc;
-(CNUIUserActionTargetDiscoveryCache *)cache;
-(id<CNCapabilities>)capabilities;
-(id<CNTUCallProviderManager>)callProviderManager;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id<CNMCProfileConnection>)profileConnection;
-(id)thirdPartyTargetsForActionTypes:(id)arg1 ;
-(id<CNLSApplicationWorkspace>)applicationWorkspace;
-(id)targetForTextWithMessages;
-(id<CNSchedulerProvider>)highLatencySchedulerProvider;
-(id)initWithApplicationWorkspace:(id)arg1 callProviderManager:(id)arg2 profileConnection:(id)arg3 schedulerProvider:(id)arg4 highLatencySchedulerProvider:(id)arg5 capabilities:(id)arg6 ;
-(id)observableForTargetsChangedForActionType:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)targetsForActionType:(id)arg1 ;
-(id)thirdPartyTargetsForBundleIdentifier:(id)arg1 ;
-(id)_targetsForActionType:(id)arg1 ;
-(void)resetTargetsForActionType:(id)arg1 ;
-(id)targetsForText;
-(id)targetsForVoice;
-(id)targetsForVideo;
-(id)targetsForEmail;
-(id)targetsForPay;
-(id)targetsForDirections;
-(id)targetForVoiceWithTelephony;
-(id)targetForVoiceWithFaceTime;
-(id)targetForVoiceWithSkype;
-(id)targetsForVoiceWithThirdPartyCallProviders;
-(id)targetForVideoWithFaceTime;
-(id)targetForVideoWithSkype;
-(id)targetsForVideoWithThirdPartyCallProviders;
-(id)targetForTextWithSkype;
-(id)targetsForSendMessageIntent;
-(id)targetsForStartAudioCallIntent;
-(id)targetsForStartVideoCallIntent;
@end

