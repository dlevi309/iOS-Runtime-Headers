/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class IDSService, HMDIDSActivityMonitorBroadcaster, HMDIDSActivityMonitorObserver, NSObject, HMDIDSActivityMonitor, _HMDIDSProxyLinkPreferenceAssertion;

@interface HMDIDSServiceManager : HMFObject {

	IDSService* _service;
	IDSService* _proxyService;
	IDSService* _streamService;
	HMDIDSActivityMonitorBroadcaster* _activityBroadcaster;
	HMDIDSActivityMonitorObserver* _activityObserver;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDIDSActivityMonitor* _activityMonitor;
	_HMDIDSProxyLinkPreferenceAssertion* _proxyLinkPreferenceAssertion;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMDIDSActivityMonitor * activityMonitor;                             //@synthesize activityMonitor=_activityMonitor - In the implementation block
@property (__weak) _HMDIDSProxyLinkPreferenceAssertion * proxyLinkPreferenceAssertion;              //@synthesize proxyLinkPreferenceAssertion=_proxyLinkPreferenceAssertion - In the implementation block
@property (readonly) IDSService * service;                                                          //@synthesize service=_service - In the implementation block
@property (readonly) IDSService * proxyService;                                                     //@synthesize proxyService=_proxyService - In the implementation block
@property (readonly) IDSService * streamService;                                                    //@synthesize streamService=_streamService - In the implementation block
@property (readonly) HMDIDSActivityMonitorBroadcaster * activityBroadcaster;                        //@synthesize activityBroadcaster=_activityBroadcaster - In the implementation block
@property (readonly) HMDIDSActivityMonitorObserver * activityObserver;                              //@synthesize activityObserver=_activityObserver - In the implementation block
+(id)sharedManager;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(HMDIDSActivityMonitor *)activityMonitor;
-(IDSService *)service;
-(IDSService *)proxyService;
-(_HMDIDSProxyLinkPreferenceAssertion *)proxyLinkPreferenceAssertion;
-(void)setProxyLinkPreferenceAssertion:(_HMDIDSProxyLinkPreferenceAssertion *)arg1 ;
-(void)setActivityMonitorDataSource:(id)arg1 ;
-(void)setProxyServiceLinkPreferences:(id)arg1 ;
-(IDSService *)streamService;
-(HMDIDSActivityMonitorBroadcaster *)activityBroadcaster;
-(HMDIDSActivityMonitorObserver *)activityObserver;
@end

