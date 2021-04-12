/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UICollectionViewLayoutInteractionStateProviding <NSObject>
@property (nonatomic,readonly) Class invalidationContextClass; 
@required
-(unsigned long long)selectionGroupingForItemAtIndexPath:(id)arg1;
-(BOOL)_shouldAdjustLayoutToMergeBarInSection:(long long)arg1;
-(BOOL)enumerateSectionsAfterSectionIndex:(long long)arg1 enumerator:(/*^block*/id)arg2;
-(BOOL)itemAtIndexPathIsSelected:(id)arg1;
-(Class)invalidationContextClass;
-(BOOL)itemAtIndexPathIsHighlighted:(id)arg1;

@end

