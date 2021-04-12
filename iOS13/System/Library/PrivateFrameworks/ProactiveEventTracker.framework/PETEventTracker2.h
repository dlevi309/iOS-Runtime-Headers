/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/


@class NSUUID, NSDate, NSString, PETConfig, PETAggregateState, NSMutableDictionary;

@interface PETEventTracker2 : NSObject {

	BOOL _isInternalDevice;
	BOOL _isWhitelistEnabled;
	NSUUID* _deviceId;
	NSDate* _lastCheckConfigTime;
	NSString* _rootDir;
	NSString* _logStoresDir;
	PETConfig* _config;
	PETAggregateState* _aggregateState;
	NSMutableDictionary* _storeCache;

}

@property (retain) NSString * rootDir;                              //@synthesize rootDir=_rootDir - In the implementation block
@property (retain) NSString * logStoresDir;                         //@synthesize logStoresDir=_logStoresDir - In the implementation block
@property (retain) PETConfig * config;                              //@synthesize config=_config - In the implementation block
@property (retain) PETAggregateState * aggregateState;              //@synthesize aggregateState=_aggregateState - In the implementation block
@property (retain) NSMutableDictionary * storeCache;                //@synthesize storeCache=_storeCache - In the implementation block
+(id)sharedInstance;
+(double)roundToSigFigs:(double)arg1 sigFigs:(unsigned long long)arg2 ;
+(unsigned)typeIdForMessageName:(id)arg1 ;
-(PETConfig *)config;
-(void)setConfig:(PETConfig *)arg1 ;
-(void)logMessage:(id)arg1 ;
-(id)initWithRootDir:(id)arg1 ;
-(id)initWithRootDir:(id)arg1 config:(id)arg2 ;
-(id)_getLogStore:(id)arg1 ;
-(void)forceEnableWhitelist;
-(void)markAsPublicDevice;
-(id)_filteredDataForMessage:(id)arg1 withWhitelist:(id)arg2 ;
-(id)_writeMessage:(id)arg1 withWhitelist:(id)arg2 ;
-(void)_checkConfigUpdate;
-(BOOL)_canLog:(id)arg1 ;
-(BOOL)_checkSampling:(id)arg1 ;
-(BOOL)checkSampling:(id)arg1 deviceId:(id)arg2 ;
-(BOOL)checkMessageSampling:(id)arg1 ;
-(void)trackScalarForMessage:(id)arg1 ;
-(void)trackScalarForMessage:(id)arg1 count:(int)arg2 ;
-(void)trackDistributionForMessage:(id)arg1 value:(double)arg2 ;
-(void)enumerateMessageGroups:(/*^block*/id)arg1 ;
-(void)enumerateMessagesWithBlock:(/*^block*/id)arg1 clearStore:(BOOL)arg2 ;
-(void)enumerateMessagesWithBlock:(/*^block*/id)arg1 messageGroup:(id)arg2 clearStore:(BOOL)arg3 ;
-(double)_roundToSigFigs:(double)arg1 forRawMessage:(id)arg2 ;
-(void)enumerateAggregatedMessagesWithBlock:(/*^block*/id)arg1 clearStore:(BOOL)arg2 ;
-(NSString *)rootDir;
-(void)setRootDir:(NSString *)arg1 ;
-(NSString *)logStoresDir;
-(void)setLogStoresDir:(NSString *)arg1 ;
-(PETAggregateState *)aggregateState;
-(void)setAggregateState:(PETAggregateState *)arg1 ;
-(NSMutableDictionary *)storeCache;
-(void)setStoreCache:(NSMutableDictionary *)arg1 ;
@end

