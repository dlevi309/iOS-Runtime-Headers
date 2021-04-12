/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/IDSActivityMonitorListenerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol NSLocking;
@class HMDIDSActivityMonitor, NSMutableDictionary, NSString;

@interface HMDIDSActivityMonitorObserver : NSObject <IDSActivityMonitorListenerDelegate, HMFLogging> {

	id<NSLocking> _lock;
	HMDIDSActivityMonitor* _activityMonitor;
	NSMutableDictionary* _subactivityToDelegatesMap;

}

@property (readonly) HMDIDSActivityMonitor * activityMonitor;                      //@synthesize activityMonitor=_activityMonitor - In the implementation block
@property (readonly) NSMutableDictionary * subactivityToDelegatesMap;              //@synthesize subactivityToDelegatesMap=_subactivityToDelegatesMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)logIdentifier;
-(HMDIDSActivityMonitor *)activityMonitor;
-(id)initWithActivityMonitor:(id)arg1 ;
-(void)activityMonitor:(id)arg1 didReceiveActivityUpdate:(id)arg2 ;
-(void)addObserver:(id)arg1 forSubActivity:(id)arg2 ;
-(void)removeObserver:(id)arg1 forSubActivity:(id)arg2 ;
-(void)startObservingPresenceForDevice:(id)arg1 ;
-(void)stopObservingPresenceForDevice:(id)arg1 ;
-(NSMutableDictionary *)subactivityToDelegatesMap;
@end

