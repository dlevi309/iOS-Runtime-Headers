/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/


@protocol SearchUIResultsViewDelegate <NSObject>
@optional
-(BOOL)sectionIsClearable:(id)arg1;
-(void)clearResultsFromSection:(id)arg1;
-(void)dismissIfNecessaryForIconDrag;
-(void)didUpdateContentScrolledOffScreenStatus:(BOOL)arg1 animated:(BOOL)arg2;
-(BOOL)sectionShouldBeExpanded:(id)arg1;
-(void)getUserActivityForResult:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)didChangeExpansionStateForSection:(id)arg1 expanded:(BOOL)arg2;
-(BOOL)hasShortLookViewControllerForResult:(id)arg1;
-(id)shortLookViewControllerForResult:(id)arg1;
-(void)didScrollPastBottomOfContent;
-(void)didBeginScrollingResults;
-(void)didTapInEmptyRegion;

@end

