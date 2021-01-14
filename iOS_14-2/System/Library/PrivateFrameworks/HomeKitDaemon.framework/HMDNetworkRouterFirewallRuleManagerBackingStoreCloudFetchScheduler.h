/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler.h>
@class NSString;


@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) double interval; 
@property (nonatomic,readonly) double retryInterval; 
@property (nonatomic,__weak,readonly) id<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate> delegate; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@required
-(double)interval;
-(id<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate>)delegate;
-(void)start;
-(double)retryInterval;
-(void)stop;
-(BOOL)isRunning;
-(NSString *)identifier;

@end


@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate, OS_xpc_object;
@class NSString, NSObject;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler : HMFObject <HMFLogging, HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler> {

	BOOL _running;
	NSString* _identifier;
	double _interval;
	double _retryInterval;
	id<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate> _delegate;
	NSObject*<OS_xpc_object> _runningActivity;
	NSObject*<OS_xpc_object> _overrideCriteria;
	double _currentInterval;

}

@property (assign,getter=isRunning,nonatomic) BOOL running;                                                                                 //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> runningActivity;                                                                      //@synthesize runningActivity=_runningActivity - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> overrideCriteria;                                                                     //@synthesize overrideCriteria=_overrideCriteria - In the implementation block
@property (nonatomic,readonly) double currentInterval;                                                                                      //@synthesize currentInterval=_currentInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier;                                                                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) double interval;                                                                                             //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) double retryInterval;                                                                                        //@synthesize retryInterval=_retryInterval - In the implementation block
@property (nonatomic,__weak,readonly) id<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)logCategory;
+(void)__unregisterActivity:(id)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(double)currentInterval;
-(double)interval;
-(id<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate>)delegate;
-(void)start;
-(double)retryInterval;
-(void)stop;
-(NSString *)description;
-(BOOL)isRunning;
-(NSString *)identifier;
-(void)dealloc;
-(NSObject*<OS_xpc_object>)runningActivity;
-(void)__checkInActivity:(id)arg1 ;
-(void)__runActivity:(id)arg1 ;
-(id)__initialCriteria;
-(NSObject*<OS_xpc_object>)overrideCriteria;
-(void)__transitionActivity:(id)arg1 state:(long long)arg2 ;
-(void)setRunningActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(void)__registerActivity;
-(void)__unregisterActivity;
-(id)initWithIdentifier:(id)arg1 interval:(double)arg2 retryInterval:(double)arg3 delegate:(id)arg4 ;
-(void)setOverrideCriteria:(NSObject*<OS_xpc_object>)arg1 ;
@end

