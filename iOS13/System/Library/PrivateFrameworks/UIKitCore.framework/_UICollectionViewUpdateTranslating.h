/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UICollectionViewUpdateTranslating <NSObject>
@required
-(long long)finalSectionCount;
-(NSRange*)finalSectionGlobalItemRangeForSection:(long long)arg1;
-(long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;
-(long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;
-(id)finalIndexPathForInitialIndexPath:(id)arg1;
-(long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1;
-(long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1;
-(id)initialIndexPathForFinalIndexPath:(id)arg1;
-(id)finalIndexPathForSupplementaryElementOfKind:(id)arg1 forInitialIndexPath:(id)arg2;
-(id)initialIndexPathForSupplementaryElementOfKind:(id)arg1 forFinalIndexPath:(id)arg2;
-(NSRange*)initalSectionGlobalItemRangeForSection:(long long)arg1;
-(long long)initialSectionCount;

@end

