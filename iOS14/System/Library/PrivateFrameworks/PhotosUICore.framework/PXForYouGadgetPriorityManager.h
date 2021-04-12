/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXGadgetRankStorage;
@class NSDate, NSMutableDictionary;

@interface PXForYouGadgetPriorityManager : NSObject {

	BOOL _needsSorting;
	NSDate* _baseNewDate;
	long long _sortingAlgorithm;
	NSMutableDictionary* _currentEntries;
	id<PXGadgetRankStorage> _rankStorage;
	long long _nestedRegistration;

}

@property (nonatomic,readonly) NSMutableDictionary * currentEntries;              //@synthesize currentEntries=_currentEntries - In the implementation block
@property (nonatomic,readonly) id<PXGadgetRankStorage> rankStorage;               //@synthesize rankStorage=_rankStorage - In the implementation block
@property (assign,nonatomic) BOOL needsSorting;                                   //@synthesize needsSorting=_needsSorting - In the implementation block
@property (assign,nonatomic) long long nestedRegistration;                        //@synthesize nestedRegistration=_nestedRegistration - In the implementation block
@property (nonatomic,retain) NSDate * baseNewDate;                                //@synthesize baseNewDate=_baseNewDate - In the implementation block
@property (assign,nonatomic) long long sortingAlgorithm;                          //@synthesize sortingAlgorithm=_sortingAlgorithm - In the implementation block
-(id)initWithStorage:(id)arg1 ;
-(void)setNeedsSorting:(BOOL)arg1 ;
-(id)_sortingKeyForOldEntries;
-(NSMutableDictionary *)currentEntries;
-(void)resetToDefaultPriorities;
-(void)setSortingAlgorithm:(long long)arg1 ;
-(BOOL)needsSorting;
-(void)_persistSortedEntries:(id)arg1 ;
-(void)setNestedRegistration:(long long)arg1 ;
-(id<PXGadgetRankStorage>)rankStorage;
-(NSDate *)baseNewDate;
-(long long)sortingAlgorithm;
-(long long)rankForGadgetType:(unsigned long long)arg1 ;
-(BOOL)invalidateRanks;
-(void)registerRankable:(id)arg1 ;
-(void)setBaseNewDate:(NSDate *)arg1 ;
-(void)startRegistration;
-(void)_splitCurrentEntriesIntoNew:(id)arg1 andOld:(id)arg2 ;
-(long long)nestedRegistration;
-(void)_sortCurrentEntriesIfNeeded;
-(void)_sortCurrentEntries;
-(void)endRegistration;
@end

