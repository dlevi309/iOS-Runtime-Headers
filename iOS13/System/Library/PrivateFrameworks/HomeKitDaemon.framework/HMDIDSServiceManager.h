/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class IDSService, NSObject, _HMDIDSProxyLinkPreferenceAssertion;

@interface HMDIDSServiceManager : HMFObject {

	IDSService* _service;
	IDSService* _proxyService;
	IDSService* _streamService;
	NSObject*<OS_dispatch_queue> _workQueue;
	_HMDIDSProxyLinkPreferenceAssertion* _proxyLinkPreferenceAssertion;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                              //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak) _HMDIDSProxyLinkPreferenceAssertion * proxyLinkPreferenceAssertion;              //@synthesize proxyLinkPreferenceAssertion=_proxyLinkPreferenceAssertion - In the implementation block
@property (readonly) IDSService * service;                                                          //@synthesize service=_service - In the implementation block
@property (readonly) IDSService * proxyService;                                                     //@synthesize proxyService=_proxyService - In the implementation block
@property (readonly) IDSService * streamService;                                                    //@synthesize streamService=_streamService - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(IDSService *)service;
-(IDSService *)proxyService;
-(_HMDIDSProxyLinkPreferenceAssertion *)proxyLinkPreferenceAssertion;
-(void)setProxyLinkPreferenceAssertion:(_HMDIDSProxyLinkPreferenceAssertion *)arg1 ;
-(void)setProxyServiceLinkPreferences:(id)arg1 ;
-(IDSService *)streamService;
@end

