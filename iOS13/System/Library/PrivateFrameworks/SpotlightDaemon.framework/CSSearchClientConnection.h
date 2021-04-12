/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@class NSMutableDictionary, SDConnectionConfiguration, NSMutableOrderedSet;

@interface CSSearchClientConnection : NSObject {

	unsigned _outBatchCount;
	NSMutableDictionary* _queryTasks;
	SDConnectionConfiguration* _configuration;
	NSMutableOrderedSet* _pausedTasks;

}

@property (nonatomic,readonly) unsigned outBatchCount;                               //@synthesize outBatchCount=_outBatchCount - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * queryTasks;                       //@synthesize queryTasks=_queryTasks - In the implementation block
@property (nonatomic,retain) SDConnectionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * pausedTasks;                      //@synthesize pausedTasks=_pausedTasks - In the implementation block
-(void)dealloc;
-(id)bundleID;
-(id)initWithConnection:(id)arg1 ;
-(void)setConfiguration:(SDConnectionConfiguration *)arg1 ;
-(SDConnectionConfiguration *)configuration;
-(id)protectionClass;
-(BOOL)searchInternal;
-(id)initWithConnectionConfiguration:(id)arg1 ;
-(void)cancelQueryTasks;
-(id)queryTask:(long long)arg1 ;
-(void)cancelQueryTask:(long long)arg1 ;
-(void)setQueryTask:(id)arg1 forQueryID:(long long)arg2 ;
-(void)_willSendResultsBatch:(id)arg1 qid:(long long)arg2 ;
-(void)_didReceiveResultsBatchCompletion;
-(unsigned)outBatchCount;
-(NSMutableDictionary *)queryTasks;
-(void)setQueryTasks:(NSMutableDictionary *)arg1 ;
-(NSMutableOrderedSet *)pausedTasks;
-(void)setPausedTasks:(NSMutableOrderedSet *)arg1 ;
@end

