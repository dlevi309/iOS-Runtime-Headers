/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UICollectionViewUpdateTranslating <NSObject>
@required
-(id)initialIndexPathForFinalIndexPath:(id)arg1;
-(long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1;
-(long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1;
-(long long)initialSectionCount;
-(id)finalIndexPathForSupplementaryElementOfKind:(id)arg1 forInitialIndexPath:(id)arg2;
-(id)initialIndexPathForSupplementaryElementOfKind:(id)arg1 forFinalIndexPath:(id)arg2;
-(long long)finalSectionCount;
-(NSRange*)initalSectionGlobalItemRangeForSection:(long long)arg1;
-(id)finalIndexPathForInitialIndexPath:(id)arg1;
-(long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;
-(NSRange*)finalSectionGlobalItemRangeForSection:(long long)arg1;
-(long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;

@end

