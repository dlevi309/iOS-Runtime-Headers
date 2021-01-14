/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTDaemonClientRegistrar.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RTDaemonClientRegistrarProtocol.h>

@protocol RTDaemonClientRegistrarScenarioTriggerProtocol, OS_dispatch_queue;
@class NSMutableDictionary, RTScenarioTriggerManager, RTInvocationDispatcher, NSObject, NSString;

@interface RTDaemonClientRegistrarScenarioTrigger : RTDaemonClientRegistrar <NSSecureCoding, RTDaemonClientRegistrarProtocol> {

	unsigned long long _monitoredScenarioTriggerTypes;
	id<RTDaemonClientRegistrarScenarioTriggerProtocol> _delegate;
	NSMutableDictionary* _pendingScenarioInvocations;
	RTScenarioTriggerManager* _scenarioTriggerManager;
	RTInvocationDispatcher* _dispatcher;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableDictionary * pendingScenarioInvocations;                                //@synthesize pendingScenarioInvocations=_pendingScenarioInvocations - In the implementation block
@property (nonatomic,retain) RTScenarioTriggerManager * scenarioTriggerManager;                               //@synthesize scenarioTriggerManager=_scenarioTriggerManager - In the implementation block
@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                                             //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) unsigned long long monitoredScenarioTriggerTypes;                              //@synthesize monitoredScenarioTriggerTypes=_monitoredScenarioTriggerTypes - In the implementation block
@property (assign,nonatomic,__weak) id<RTDaemonClientRegistrarScenarioTriggerProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(RTScenarioTriggerManager *)scenarioTriggerManager;
-(BOOL)registered;
-(RTInvocationDispatcher *)dispatcher;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(void)setScenarioTriggerManager:(RTScenarioTriggerManager *)arg1 ;
-(id)init;
-(id<RTDaemonClientRegistrarScenarioTriggerProtocol>)delegate;
-(unsigned long long)monitoredScenarioTriggerTypes;
-(void)_onScenarioTriggerManagerNotification:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)invocationsPending;
-(void)_logMonitoredScenarioTriggers:(unsigned long long)arg1 ;
-(long long)countOfPendingInvocations;
-(void)setDelegate:(id<RTDaemonClientRegistrarScenarioTriggerProtocol>)arg1 ;
-(void)onScenarioTriggerManagerNotification:(id)arg1 ;
-(id)initWithScenarioTriggerManager:(id)arg1 queue:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableDictionary *)pendingScenarioInvocations;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setPendingScenarioInvocations:(NSMutableDictionary *)arg1 ;
-(void)stopMonitoringForScenarioTriggerType:(unsigned long long)arg1 ;
-(void)startMonitoringForScenarioTriggerType:(unsigned long long)arg1 ;
-(void)addPendingScenarioTriggerBlock:(/*^block*/id)arg1 failBlock:(/*^block*/id)arg2 description:(id)arg3 ;
@end

