/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@class NSMutableDictionary, SDConnectionConfiguration, NSMutableOrderedSet;

@interface CSSearchClientConnection : NSObject {

	AI _outBatchCount;
	NSMutableDictionary* _queryTasks;
	SDConnectionConfiguration* _configuration;
	NSMutableOrderedSet* _pausedTasks;

}

@property (nonatomic,readonly) unsigned outBatchCount; 
@property (nonatomic,retain) NSMutableDictionary * queryTasks;                       //@synthesize queryTasks=_queryTasks - In the implementation block
@property (nonatomic,retain) SDConnectionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * pausedTasks;                      //@synthesize pausedTasks=_pausedTasks - In the implementation block
-(id)initWithConnection:(id)arg1 ;
-(void)_didReceiveResultsBatchCompletion;
-(id)initWithConnectionConfiguration:(id)arg1 ;
-(void)setQueryTask:(id)arg1 forQueryID:(long long)arg2 ;
-(void)_willSendResultsBatch:(id)arg1 qid:(long long)arg2 ;
-(void)cancelQueryTasks;
-(NSMutableDictionary *)queryTasks;
-(id)protectionClass;
-(SDConnectionConfiguration *)configuration;
-(BOOL)searchInternal;
-(unsigned)outBatchCount;
-(void)cancelQueryTask:(long long)arg1 ;
-(id)bundleID;
-(id)queryTask:(long long)arg1 ;
-(void)setPausedTasks:(NSMutableOrderedSet *)arg1 ;
-(NSMutableOrderedSet *)pausedTasks;
-(void)setQueryTasks:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(void)setConfiguration:(SDConnectionConfiguration *)arg1 ;
@end

