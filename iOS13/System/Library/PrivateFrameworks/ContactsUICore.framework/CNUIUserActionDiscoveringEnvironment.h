/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIUserActionDiscoveringEnvironment.h>
@class CNUIIDSContactPropertyResolver, CNContactStore;


@protocol CNUIUserActionDiscoveringEnvironment <NSObject>
@property (nonatomic,readonly) id<CNLSApplicationWorkspace> applicationWorkspace; 
@property (nonatomic,readonly) id<CNTUCallProviderManager> callProviderManager; 
@property (nonatomic,readonly) CNUIIDSContactPropertyResolver * idsContactPropertyResolver; 
@property (nonatomic,readonly) id<CNMCProfileConnection> profileConnection; 
@property (nonatomic,readonly) id<CNCapabilities> capabilities; 
@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider; 
@property (nonatomic,readonly) id<CNSchedulerProvider> highLatencySchedulerProvider; 
@property (nonatomic,readonly) id<CNUIDefaultUserActionFetcher> defaultUserActionFetcher; 
@property (nonatomic,readonly) id<CNUIRTTUtilities> ttyUtilities; 
@property (nonatomic,readonly) id<CNUIUserActionTargetDiscovering> targetDiscoveringHelper; 
@required
-(CNContactStore *)contactStore;
-(id<CNCapabilities>)capabilities;
-(id<CNTUCallProviderManager>)callProviderManager;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id<CNMCProfileConnection>)profileConnection;
-(id<CNLSApplicationWorkspace>)applicationWorkspace;
-(id<CNUIDefaultUserActionFetcher>)defaultUserActionFetcher;
-(CNUIIDSContactPropertyResolver *)idsContactPropertyResolver;
-(id<CNSchedulerProvider>)highLatencySchedulerProvider;
-(id<CNUIRTTUtilities>)ttyUtilities;
-(id)copyWithContactStore:(id)arg1;
-(id<CNUIUserActionTargetDiscovering>)targetDiscoveringHelper;

@end


@protocol CNLSApplicationWorkspace, CNTUCallProviderManager, CNMCProfileConnection, CNCapabilities, CNSchedulerProvider, CNUIDefaultUserActionFetcher, CNUIRTTUtilities, CNUIUserActionTargetDiscovering;
@class CNUIIDSContactPropertyResolver, CNContactStore, NSString;

@interface CNUIUserActionDiscoveringEnvironment : NSObject <CNUIUserActionDiscoveringEnvironment> {

	CNContactStore* _contactStore;
	id<CNLSApplicationWorkspace> _applicationWorkspace;
	id<CNTUCallProviderManager> _callProviderManager;
	CNUIIDSContactPropertyResolver* _idsContactPropertyResolver;
	id<CNMCProfileConnection> _profileConnection;
	id<CNCapabilities> _capabilities;
	id<CNSchedulerProvider> _schedulerProvider;
	id<CNSchedulerProvider> _highLatencySchedulerProvider;
	id<CNUIDefaultUserActionFetcher> _defaultUserActionFetcher;
	id<CNUIRTTUtilities> _ttyUtilities;
	id<CNUIUserActionTargetDiscovering> _targetDiscoveringHelper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CNLSApplicationWorkspace> applicationWorkspace;                        //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
@property (nonatomic,readonly) id<CNTUCallProviderManager> callProviderManager;                          //@synthesize callProviderManager=_callProviderManager - In the implementation block
@property (nonatomic,readonly) CNUIIDSContactPropertyResolver * idsContactPropertyResolver;              //@synthesize idsContactPropertyResolver=_idsContactPropertyResolver - In the implementation block
@property (nonatomic,readonly) id<CNMCProfileConnection> profileConnection;                              //@synthesize profileConnection=_profileConnection - In the implementation block
@property (nonatomic,readonly) id<CNCapabilities> capabilities;                                          //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                                //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> highLatencySchedulerProvider;                     //@synthesize highLatencySchedulerProvider=_highLatencySchedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNUIDefaultUserActionFetcher> defaultUserActionFetcher;                //@synthesize defaultUserActionFetcher=_defaultUserActionFetcher - In the implementation block
@property (nonatomic,readonly) id<CNUIRTTUtilities> ttyUtilities;                                        //@synthesize ttyUtilities=_ttyUtilities - In the implementation block
@property (nonatomic,readonly) id<CNUIUserActionTargetDiscovering> targetDiscoveringHelper;              //@synthesize targetDiscoveringHelper=_targetDiscoveringHelper - In the implementation block
-(id)init;
-(CNContactStore *)contactStore;
-(id<CNCapabilities>)capabilities;
-(id<CNTUCallProviderManager>)callProviderManager;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id<CNMCProfileConnection>)profileConnection;
-(id)nts_lazyContactStore;
-(id<CNLSApplicationWorkspace>)applicationWorkspace;
-(id<CNUIDefaultUserActionFetcher>)defaultUserActionFetcher;
-(id)initWithIDSAvailabilityProvider:(id)arg1 schedulerProvider:(id)arg2 capabilities:(id)arg3 defaultUserActionFetcher:(id)arg4 ;
-(CNUIIDSContactPropertyResolver *)idsContactPropertyResolver;
-(id<CNSchedulerProvider>)highLatencySchedulerProvider;
-(id<CNUIRTTUtilities>)ttyUtilities;
-(id)initWithApplicationWorkspace:(id)arg1 callProviderManager:(id)arg2 idsContactPropertyResolver:(id)arg3 profileConnection:(id)arg4 contactStore:(id)arg5 schedulerProvider:(id)arg6 highLatencySchedulerProvider:(id)arg7 capabilities:(id)arg8 defaultUserActionFetcher:(id)arg9 ttyUtilities:(id)arg10 ;
-(id)copyWithContactStore:(id)arg1 ;
-(id<CNUIUserActionTargetDiscovering>)targetDiscoveringHelper;
-(id)initWithIDSAvailablilityProvider:(id)arg1 schedulerProvider:(id)arg2 capabilities:(id)arg3 defaultUserActionFetcher:(id)arg4 ;
@end

