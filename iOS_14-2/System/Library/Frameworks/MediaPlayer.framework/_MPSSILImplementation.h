/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPSectionedIdentifierList.h>

@class MPRandomDistribution, NSMutableArray;

@interface _MPSSILImplementation : MPSectionedIdentifierList {

	MPRandomDistribution* _randomDistribution;
	NSMutableArray* _candidateItems;

}

@property (assign,nonatomic,__weak) id<_MPSSILDelegate> delegate; 
@property (nonatomic,readonly) MPRandomDistribution * randomDistribution;              //@synthesize randomDistribution=_randomDistribution - In the implementation block
@property (nonatomic,retain) NSMutableArray * candidateItems;                          //@synthesize candidateItems=_candidateItems - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)itemCount;
-(id)initWithCoder:(id)arg1 ;
-(void)safelyReshuffleAfterItem:(id)arg1 inSection:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 withExclusiveAccessToken:(id)arg2 ;
-(void)dataSourceInsertItemsAtHead:(id)arg1 inSection:(id)arg2 ;
-(void)dataSourceInsertItems:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3 ;
-(NSMutableArray *)candidateItems;
-(void)dataSourceInsertItemsAtTail:(id)arg1 inSection:(id)arg2 ;
-(void)dataSourceRemoveItem:(id)arg1 fromSection:(id)arg2 ;
-(MPRandomDistribution *)randomDistribution;
-(void)dataSourceReloadItem:(id)arg1 inSection:(id)arg2 ;
-(void)setCandidateItems:(NSMutableArray *)arg1 ;
-(void)_dequeueCandidatesWithQuota:(long long)arg1 withExclusiveAccessToken:(id)arg2 ;
-(void)_beforeInitWithCoder:(id)arg1 ;
-(void)dequeueCandidatesWithQuota:(long long)arg1 ;
-(BOOL)_isSequentialSection:(id)arg1 withExclusiveAccessToken:(id)arg2 ;
-(void)addDataSourceAtEnd:(id)arg1 section:(id)arg2 sequentially:(BOOL)arg3 ;
-(void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(BOOL)arg3 afterTailOfSection:(id)arg4 ;
-(void)addDataSourceAtStart:(id)arg1 section:(id)arg2 sequentially:(BOOL)arg3 ;
-(void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(BOOL)arg3 afterItem:(id)arg4 inSection:(id)arg5 ;
-(id)initWithSectionedIdentifierList:(id)arg1 randomSource:(id)arg2 startingItemEntry:(id)arg3 withExclusiveAccessToken:(id)arg4 ;
-(void)_enumerator:(id)arg1 didEncounterEntry:(id)arg2 withExclusiveAccessToken:(id)arg3 ;
-(void)_reverseEnumeratorWillStartAtEnd:(id)arg1 withExclusiveAccessToken:(id)arg2 ;
-(void)_addShuffleSection:(id)arg1 dataSource:(id)arg2 withExclusiveAccessToken:(id)arg3 ;
-(void)_appendShuffledItems:(id)arg1 withExclusiveAccessToken:(id)arg2 ;
-(id)_createShuffleCloneForItem:(id)arg1 inSection:(id)arg2 withExclusiveAccessToken:(id)arg3 ;
@end

