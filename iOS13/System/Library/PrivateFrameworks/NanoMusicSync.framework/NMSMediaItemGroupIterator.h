/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSArray, NSMutableArray, NSMutableOrderedSet, NMSQuotaEvaluationState;

@interface NMSMediaItemGroupIterator : NSObject {

	unsigned long long _sizeForItemListWithinQuota;
	unsigned long long _sizeForItemListOverQuota;
	unsigned long long _nominatedItemSize;
	NSArray* _itemGroups;
	NSMutableArray* _remainingContainers;
	NSMutableArray* _remainingItemLists;
	unsigned long long _currentContainerIndex;
	unsigned long long _currentItemIndex;
	NSMutableOrderedSet* _mutableItemListWithinQuota;
	NSMutableOrderedSet* _mutableItemListOverQuota;
	NSMutableArray* _indexesToBeRemoved;

}

@property (nonatomic,readonly) NMSQuotaEvaluationState * evaluationState; 
@property (assign,nonatomic) unsigned long long sizeForItemListWithinQuota;                 //@synthesize sizeForItemListWithinQuota=_sizeForItemListWithinQuota - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeForCurrentIdentifier; 
@property (assign,nonatomic) unsigned long long sizeForItemListOverQuota;                   //@synthesize sizeForItemListOverQuota=_sizeForItemListOverQuota - In the implementation block
@property (assign,nonatomic) unsigned long long nominatedItemSize;                          //@synthesize nominatedItemSize=_nominatedItemSize - In the implementation block
@property (nonatomic,readonly) unsigned long long iteratingOrder; 
@property (nonatomic,retain) NSArray * itemGroups;                                          //@synthesize itemGroups=_itemGroups - In the implementation block
@property (nonatomic,retain) NSMutableArray * remainingContainers;                          //@synthesize remainingContainers=_remainingContainers - In the implementation block
@property (nonatomic,retain) NSMutableArray * remainingItemLists;                           //@synthesize remainingItemLists=_remainingItemLists - In the implementation block
@property (assign,nonatomic) unsigned long long currentContainerIndex;                      //@synthesize currentContainerIndex=_currentContainerIndex - In the implementation block
@property (assign,nonatomic) unsigned long long currentItemIndex;                           //@synthesize currentItemIndex=_currentItemIndex - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * mutableItemListWithinQuota;              //@synthesize mutableItemListWithinQuota=_mutableItemListWithinQuota - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * mutableItemListOverQuota;                //@synthesize mutableItemListOverQuota=_mutableItemListOverQuota - In the implementation block
@property (nonatomic,retain) NSMutableArray * indexesToBeRemoved;                           //@synthesize indexesToBeRemoved=_indexesToBeRemoved - In the implementation block
-(id)currentItem;
-(unsigned long long)currentItemIndex;
-(void)setCurrentItemIndex:(unsigned long long)arg1 ;
-(unsigned long long)currentContainerIndex;
-(unsigned long long)sizeForCurrentIdentifier;
-(unsigned long long)sizeForItemListWithinQuota;
-(NMSQuotaEvaluationState *)evaluationState;
-(id)downloadInfoWithinQuota;
-(id)downloadInfoOverQuota;
-(unsigned long long)nominatedItemSize;
-(NSArray *)itemGroups;
-(unsigned long long)iteratingOrder;
-(BOOL)isCurrentIdentifierEstimate;
-(void)addCurrentIdentifierToWithinQuotaList;
-(void)addCurrentIdentifierToOverQuotaList;
-(void)removeCurrentIdentifier;
-(void)skipCurrentIdentifier;
-(void)resetToIterateOverQuotaIdentifiers;
-(NSMutableOrderedSet *)mutableItemListWithinQuota;
-(NSMutableOrderedSet *)mutableItemListOverQuota;
-(NSMutableArray *)remainingItemLists;
-(void)setRemainingItemLists:(NSMutableArray *)arg1 ;
-(void)_generateItemListAndSizesDictIfNecessary;
-(NSMutableArray *)remainingContainers;
-(void)_continueToNextIdentifier;
-(void)_markToBeRemoved;
-(NSMutableArray *)indexesToBeRemoved;
-(void)setCurrentContainerIndex:(unsigned long long)arg1 ;
-(id)initWithItemGroups:(id)arg1 ;
-(BOOL)isCurrentItemManuallyAdded;
-(id)itemGroupForIdentifiers:(id)arg1 ;
-(id)identifiersForContainersOfType:(unsigned long long)arg1 ;
-(id)mediaContainersAboveQuota;
-(void)setSizeForItemListWithinQuota:(unsigned long long)arg1 ;
-(unsigned long long)sizeForItemListOverQuota;
-(void)setSizeForItemListOverQuota:(unsigned long long)arg1 ;
-(void)setNominatedItemSize:(unsigned long long)arg1 ;
-(void)setItemGroups:(NSArray *)arg1 ;
-(void)setRemainingContainers:(NSMutableArray *)arg1 ;
-(void)setMutableItemListWithinQuota:(NSMutableOrderedSet *)arg1 ;
-(void)setMutableItemListOverQuota:(NSMutableOrderedSet *)arg1 ;
-(void)setIndexesToBeRemoved:(NSMutableArray *)arg1 ;
@end

