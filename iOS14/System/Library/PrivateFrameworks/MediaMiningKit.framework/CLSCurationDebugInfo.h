/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class CLSCurationDebugCluster, NSMapTable, NSString;

@interface CLSCurationDebugInfo : NSObject {

	CLSCurationDebugCluster* _rootCluster;
	NSMapTable* _debugItemByItem;
	NSMapTable* _debugClusterByCluster;
	NSString* _agent;
	NSString* _stage;

}

@property (nonatomic,copy) NSString * agent;              //@synthesize agent=_agent - In the implementation block
@property (nonatomic,copy) NSString * stage;              //@synthesize stage=_stage - In the implementation block
-(id)initWithItems:(id)arg1 ;
-(NSString *)agent;
-(void)setAgent:(NSString *)arg1 ;
-(NSString *)stage;
-(void)setStage:(NSString *)arg1 ;
-(void)setState:(unsigned long long)arg1 ofCluster:(id)arg2 withReason:(id)arg3 ;
-(void)dedupItems:(id)arg1 toItems:(id)arg2 withDedupingType:(unsigned long long)arg3 ;
-(void)setState:(unsigned long long)arg1 ofItems:(id)arg2 withReason:(id)arg3 ;
-(void)setClusters:(id)arg1 withReason:(id)arg2 ;
-(id)debugInfoForCluster:(id)arg1 ;
-(void)addClusters:(id)arg1 withReason:(id)arg2 ;
-(id)dictionaryRepresentationWithAppendExtraItemInfoBlock:(/*^block*/id)arg1 ;
-(void)endTentativeSectionWithSuccess:(BOOL)arg1 ;
-(void)beginTentativeSection;
-(void)resetWithReason:(id)arg1 ;
-(void)chooseItems:(id)arg1 inItems:(id)arg2 withReason:(id)arg3 ;
-(void)dedupItems:(id)arg1 toItem:(id)arg2 withDedupingType:(unsigned long long)arg3 ;
-(void)dedupItems:(id)arg1 toRequiredItems:(id)arg2 withDedupingType:(unsigned long long)arg3 ;
-(void)forceState:(unsigned long long)arg1 ofItem:(id)arg2 withReason:(id)arg3 ;
-(void)setState:(unsigned long long)arg1 ofItem:(id)arg2 withReason:(id)arg3 ;
-(void)chooseItem:(id)arg1 inItems:(id)arg2 withReason:(id)arg3 ;
-(void)chooseItem:(id)arg1 inCluster:(id)arg2 withReason:(id)arg3 ;
-(void)chooseItems:(id)arg1 inCluster:(id)arg2 withReason:(id)arg3 ;
-(void)requireItems:(id)arg1 inCluster:(id)arg2 ;
-(void)setUnclusteredItemsState:(unsigned long long)arg1 withReason:(id)arg2 ;
-(id)initWithDebugCluster:(id)arg1 ;
-(id)debugItemForItem:(id)arg1 ;
-(id)debugItemsForItems:(id)arg1 ;
-(id)debugClusterForCluster:(id)arg1 ;
-(void)requireItems:(id)arg1 inItems:(id)arg2 ;
-(void)_dedupItems:(id)arg1 toItems:(id)arg2 chosenState:(unsigned long long)arg3 withDedupingType:(unsigned long long)arg4 ;
@end

