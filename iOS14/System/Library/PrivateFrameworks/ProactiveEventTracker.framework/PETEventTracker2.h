/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/


@protocol OS_dispatch_queue;
#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
@class PETAggregateState, NSObject, RBSTarget, RBSAssertion, NSString, PETConfig, NSMutableDictionary;

@interface PETEventTracker2 : NSObject {

	PETAggregateState* _aggregateState;
	NSObject*<OS_dispatch_queue> _loggingQueue;
	int _loggingQueueSize;
	opaque_pthread_mutex_t _loggingQueueLock;
	BOOL _inited;
	RBSTarget* _rbsTarget;
	RBSAssertion* _rbsAssertion;
	BOOL _rbsShouldInvalidate;
	opaque_pthread_mutex_t _rbsAssertionLock;
	BOOL _isDaemon;
	BOOL _isAsyncEnabled;
	NSString* _rootDir;
	NSString* _logStoresDir;
	PETConfig* _config;
	NSMutableDictionary* _storeCache;

}

@property (assign) BOOL isAsyncEnabled;                                         //@synthesize isAsyncEnabled=_isAsyncEnabled - In the implementation block
@property (retain) NSString * rootDir;                                          //@synthesize rootDir=_rootDir - In the implementation block
@property (retain) NSString * logStoresDir;                                     //@synthesize logStoresDir=_logStoresDir - In the implementation block
@property (retain) PETConfig * config;                                          //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) PETAggregateState * aggregateState;              //@synthesize aggregateState=_aggregateState - In the implementation block
@property (retain) NSMutableDictionary * storeCache;                            //@synthesize storeCache=_storeCache - In the implementation block
+(id)sharedInstance;
+(id)formattedTextForAggregatedMessage:(id)arg1 ;
+(unsigned)typeIdForMessageName:(id)arg1 ;
+(id)formattedTextForUnaggregatedMessage:(id)arg1 messageGroup:(id)arg2 config:(id)arg3 ;
+(double)roundToSigFigs:(double)arg1 sigFigs:(unsigned long long)arg2 ;
+(id)defaultRootDir;
-(PETConfig *)config;
-(void)enumerateMessagesWithBlock:(/*^block*/id)arg1 clearStore:(BOOL)arg2 ;
-(void)enumerateMessagesWithBlock:(/*^block*/id)arg1 messageGroup:(id)arg2 clearStore:(BOOL)arg3 ;
-(NSString *)rootDir;
-(void)logMessage:(id)arg1 ;
-(void)logMessage:(id)arg1 subGroup:(id)arg2 ;
-(void)trackScalarForMessage:(id)arg1 updateCount:(int)arg2 ;
-(void)_initWithRootDir:(id)arg1 config:(id)arg2 ;
-(void)trackDistributionForMessage:(id)arg1 value:(double)arg2 ;
-(double)_roundToSigFigs:(double)arg1 forRawMessage:(id)arg2 ;
-(void)trackScalarForMessage:(id)arg1 ;
-(void)enumerateAggregatedMessagesWithBlock:(/*^block*/id)arg1 clearStore:(BOOL)arg2 ;
-(BOOL)isAsyncEnabled;
-(id)_getLogStore:(id)arg1 ;
-(void)trackScalarForMessage:(id)arg1 count:(int)arg2 ;
-(void)_logMessage:(id)arg1 subGroup:(id)arg2 ;
-(NSMutableDictionary *)storeCache;
-(PETAggregateState *)aggregateState;
-(void)setIsAsyncEnabled:(BOOL)arg1 ;
-(id)initWithRootDir:(id)arg1 config:(id)arg2 ;
-(void)setRootDir:(NSString *)arg1 ;
-(void)setLogStoresDir:(NSString *)arg1 ;
-(void)clearLogStores;
-(id)_writeMessage:(id)arg1 ;
-(void)_init;
-(void)setConfig:(PETConfig *)arg1 ;
-(void)_runBlockWithRBSAssertion:(/*^block*/id)arg1 ;
-(NSString *)logStoresDir;
-(id)initWithAsyncEnabled:(BOOL)arg1 ;
-(void)_trackDistributionForMessage:(id)arg1 value:(double)arg2 ;
-(void)enumerateMessageGroups:(/*^block*/id)arg1 ;
-(void)setStoreCache:(NSMutableDictionary *)arg1 ;
-(void)_dispatchAsyncForLogging:(/*^block*/id)arg1 txnName:(const char*)arg2 ;
-(id)initForTestingWithRootDir:(id)arg1 ;
-(void)_trackScalarForMessage:(id)arg1 count:(int)arg2 overwrite:(BOOL)arg3 ;
@end

