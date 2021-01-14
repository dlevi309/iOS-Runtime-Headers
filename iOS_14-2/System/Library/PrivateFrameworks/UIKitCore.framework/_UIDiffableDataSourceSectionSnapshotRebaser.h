/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSDiffableDataSourceSnapshot, _UIDiffableDataSourceDiffer, NSMapTable;

@interface _UIDiffableDataSourceSectionSnapshotRebaser : NSObject {

	NSDiffableDataSourceSnapshot* _initialSnapshot;
	NSDiffableDataSourceSnapshot* _finalSnapshot;
	_UIDiffableDataSourceDiffer* _dataSourceDiffer;
	NSMapTable* _initialSectionSnapshots;
	NSMapTable* _rebasedSectionSnapshots;

}

@property (nonatomic,readonly) NSMapTable * rebasedSectionSnapshots;              //@synthesize rebasedSectionSnapshots=_rebasedSectionSnapshots - In the implementation block
-(void)_rebaseForInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3 dataSourceDiffer:(id)arg4 shouldPerformChildSnapshotMoves:(BOOL)arg5 ;
-(id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3 dataSourceDiffer:(id)arg4 shouldPerformChildSnapshotMoves:(BOOL)arg5 ;
-(id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3 dataSourceDiffer:(id)arg4 ;
-(id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3 ;
-(id)_computeSectionTransactionsIncludingSectionDifferences:(BOOL)arg1 ;
-(id)computeApplyTransactionIncludingSectionDifferences:(BOOL)arg1 ;
-(id)_transactionIncludingSectionDifferences:(BOOL)arg1 source:(long long)arg2 ;
-(id)computeReorderingTransaction;
-(NSMapTable *)rebasedSectionSnapshots;
@end

