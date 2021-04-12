/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSDiffableDataSourceSnapshot, NSOrderedCollectionDifference, NSArray;

@interface NSDiffableDataSourceTransaction : NSObject {

	NSDiffableDataSourceSnapshot* _initialSnapshot;
	NSDiffableDataSourceSnapshot* _finalSnapshot;
	NSOrderedCollectionDifference* _difference;
	NSArray* _sectionTransactions;
	NSArray* _reorderedItemIdentifiers;
	long long _source;

}

@property (nonatomic,readonly) NSArray * reorderedItemIdentifiers;                          //@synthesize reorderedItemIdentifiers=_reorderedItemIdentifiers - In the implementation block
@property (nonatomic,readonly) long long source;                                            //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSDiffableDataSourceSnapshot * initialSnapshot;              //@synthesize initialSnapshot=_initialSnapshot - In the implementation block
@property (nonatomic,readonly) NSDiffableDataSourceSnapshot * finalSnapshot;                //@synthesize finalSnapshot=_finalSnapshot - In the implementation block
@property (nonatomic,readonly) NSOrderedCollectionDifference * difference;                  //@synthesize difference=_difference - In the implementation block
@property (nonatomic,readonly) NSArray * sectionTransactions;                               //@synthesize sectionTransactions=_sectionTransactions - In the implementation block
+(id)_computeReorderingTransactionWithInitialSnapshot:(id)arg1 reorderingUpdate:(id)arg2 sectionSnapshotProvider:(/*^block*/id)arg3 ;
+(id)applyTransactionWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 difference:(id)arg3 sectionTransactions:(id)arg4 ;
+(id)reorderingTransactionWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 difference:(id)arg3 sectionTransactions:(id)arg4 ;
-(id)initialIndexPathForFinalIndexPath:(id)arg1 ;
-(long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1 ;
-(long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1 ;
-(id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 source:(long long)arg3 difference:(id)arg4 reorderedItemIdentifiers:(id)arg5 sectionTransactions:(id)arg6 ;
-(NSDiffableDataSourceSnapshot *)initialSnapshot;
-(id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 source:(long long)arg3 difference:(id)arg4 finalSectionSnapshots:(id)arg5 ;
-(id)initialDataSourceSnapshotter;
-(long long)initialSectionCount;
-(id)finalIndexPathForSupplementaryElementOfKind:(id)arg1 forInitialIndexPath:(id)arg2 ;
-(NSArray *)sectionTransactions;
-(id)initialIndexPathForSupplementaryElementOfKind:(id)arg1 forFinalIndexPath:(id)arg2 ;
-(long long)finalSectionCount;
-(id)_spiCopy;
-(BOOL)isApplyTransaction;
-(NSRange)initalSectionGlobalItemRangeForSection:(long long)arg1 ;
-(id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 source:(long long)arg3 reorderedItemIdentifiers:(id)arg4 difference:(id)arg5 sectionTransactions:(id)arg6 ;
-(id)finalIndexPathForInitialIndexPath:(id)arg1 ;
-(long long)finalSectionIndexForInitialSectionIndex:(long long)arg1 ;
-(id)description;
-(NSRange)finalSectionGlobalItemRangeForSection:(long long)arg1 ;
-(BOOL)isReorderingTransaction;
-(id)performDiffGeneratingUpdates;
-(long long)initialSectionIndexForFinalSectionIndex:(long long)arg1 ;
-(BOOL)_containsItemIdentifier:(id)arg1 ;
-(id)transactionWithSectionTransactions:(id)arg1 ;
-(NSOrderedCollectionDifference *)difference;
-(NSDiffableDataSourceSnapshot *)finalSnapshot;
-(NSArray *)reorderedItemIdentifiers;
-(id)finalDataSourceSnapshotter;
-(BOOL)isEqual:(id)arg1 ;
-(long long)source;
@end

