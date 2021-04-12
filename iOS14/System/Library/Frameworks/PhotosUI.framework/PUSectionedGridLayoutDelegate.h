/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUSectionedGridLayoutDelegate <NSObject>
@optional
-(void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(BOOL)arg2;
-(void)sectionedGridLayout:(id)arg1 didFinalizePrepareTransitionIsAppearing:(BOOL)arg2;
-(long long)sectionedGridLayout:(id)arg1 maximumRowsForVisualSection:(long long)arg2;
-(id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
-(void)sectionedGridLayoutWillPrepareLayout:(id)arg1;
-(CGPoint*)sectionedGridLayout:(id)arg1 targetContentOffsetForProposedUpdatesContentOffset:(CGPoint)arg2;
-(BOOL)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg1;
-(UIEdgeInsets*)sectionedGridLayout:(id)arg1 finalContentInsetForCurrentContentInset:(UIEdgeInsets)arg2;
-(double)sectionedGridLayout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2;
-(long long)numberOfVisualSectionsForSectionedGridLayout:(id)arg1;
-(id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(long long)arg2;
-(void)sectionedGridLayout:(id)arg1 didInvalidateWithContext:(id)arg2;
-(double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
-(double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;

@end

