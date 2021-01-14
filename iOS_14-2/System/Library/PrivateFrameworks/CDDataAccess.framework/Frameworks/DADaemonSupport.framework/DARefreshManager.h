/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSTimer, NSObject;

@interface DARefreshManager : NSObject {

	BOOL _persistAPSAfterShutdown;
	BOOL _dailyRefreshInitialized;
	NSMutableDictionary* _enabledTopicWrappersByEnv;
	NSMutableDictionary* _suspendedTopicWrappersByEnv;
	NSMutableSet* _wrappers;
	NSMutableSet* _wrappersForDailyRefresh;
	NSMutableDictionary* _apsConnections;
	NSTimer* _tokenRegistrationTimer;
	NSObject*<OS_dispatch_queue> _pcQueue;

}

@property (nonatomic,retain) NSMutableDictionary * enabledTopicWrappersByEnv;                //@synthesize enabledTopicWrappersByEnv=_enabledTopicWrappersByEnv - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * suspendedTopicWrappersByEnv;              //@synthesize suspendedTopicWrappersByEnv=_suspendedTopicWrappersByEnv - In the implementation block
@property (nonatomic,retain) NSMutableSet * wrappers;                                        //@synthesize wrappers=_wrappers - In the implementation block
@property (nonatomic,retain) NSMutableSet * wrappersForDailyRefresh;                         //@synthesize wrappersForDailyRefresh=_wrappersForDailyRefresh - In the implementation block
@property (assign,nonatomic) BOOL dailyRefreshInitialized;                                   //@synthesize dailyRefreshInitialized=_dailyRefreshInitialized - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * apsConnections;                           //@synthesize apsConnections=_apsConnections - In the implementation block
@property (nonatomic,retain) NSTimer * tokenRegistrationTimer;                               //@synthesize tokenRegistrationTimer=_tokenRegistrationTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pcQueue;                           //@synthesize pcQueue=_pcQueue - In the implementation block
@property (assign,nonatomic) BOOL persistAPSAfterShutdown;                                   //@synthesize persistAPSAfterShutdown=_persistAPSAfterShutdown - In the implementation block
+(id)sharedManager;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)setApsConnections:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)pcQueue;
-(void)_unregisterTopicLocked:(id)arg1 forDelegate:(id)arg2 inEnvironment:(id)arg3 ;
-(void)endDailyRefreshActivityForWrapper:(id)arg1 ;
-(void)_suspendTopicsForDelegate:(id)arg1 ;
-(id)init;
-(id)_portNameForEnvironmentName:(id)arg1 ;
-(void)setWrappersForDailyRefresh:(NSMutableSet *)arg1 ;
-(void)setEnabledTopicWrappersByEnv:(NSMutableDictionary *)arg1 ;
-(void)setDailyRefreshInitialized:(BOOL)arg1 ;
-(id)_refreshWrapperForDelegate:(id)arg1 ;
-(id)_enabledTopicsForWrapper:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(void)_dailyRefreshActivityFired;
-(BOOL)_wrapperIsSuspended:(id)arg1 ;
-(void)setPersistAPSAfterShutdown:(BOOL)arg1 ;
-(id)stateString;
-(void)_registerAPSTopics;
-(BOOL)dailyRefreshInitialized;
-(int)_overriddenPCStyleForWrapper:(id)arg1 ;
-(void)_performBlockOnRefreshManagerThread:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)suspendedTopicWrappersByEnv;
-(NSMutableSet *)wrappersForDailyRefresh;
-(void)pushPreferenceDidChange;
-(id)_connectionForEnv:(id)arg1 ;
-(void)_pushRegistrationForDelegateFailed:(id)arg1 ;
-(void)setWrappers:(NSMutableSet *)arg1 ;
-(void)_unregisterWrapper:(id)arg1 forTopic:(id)arg2 inTopicDictionary:(id)arg3 ;
-(id)_apsEnvStringForDAEnvString:(id)arg1 ;
-(NSMutableSet *)wrappers;
-(void)setPcQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)_currentTruePCStyleForDelegate:(id)arg1 ;
-(void)_tearDownAllAPSConnectionsUnregisteringTopics:(BOOL)arg1 ;
-(NSTimer *)tokenRegistrationTimer;
-(BOOL)persistAPSAfterShutdown;
-(void)delegateDidCompleteRefresh:(id)arg1 ;
-(NSMutableDictionary *)enabledTopicWrappersByEnv;
-(void)establishAllApsConnections;
-(void)unregisterTopic:(id)arg1 forDelegate:(id)arg2 inEnvironment:(id)arg3 ;
-(id)pushTokenForEnvironment:(id)arg1 ;
-(void)_registerAPSTopicsForDelegates:(id)arg1 withConnection:(id)arg2 ;
-(void)_resumeTopicsForSuspendedDelegate:(id)arg1 ;
-(void)setTokenRegistrationTimer:(NSTimer *)arg1 ;
-(void)retryRefreshForDelegate:(id)arg1 withCollections:(id)arg2 after:(double)arg3 originalRefreshReason:(int)arg4 ;
-(void)startDailyRefreshActivityForWrapper:(id)arg1 ;
-(void)registerTopic:(id)arg1 forDelegate:(id)arg2 inEnvironment:(id)arg3 ;
-(NSMutableDictionary *)apsConnections;
-(void)unregisterDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setSuspendedTopicWrappersByEnv:(NSMutableDictionary *)arg1 ;
-(void)registerDelegate:(id)arg1 ;
-(id)_suspendedTopicsForWrapper:(id)arg1 ;
@end

