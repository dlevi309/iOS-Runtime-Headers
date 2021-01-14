/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/


@protocol SearchUIResultsViewDelegate <NSObject>
@optional
-(void)didUpdateKeyboardFocusToResult:(id)arg1 cardSection:(id)arg2;
-(BOOL)sectionShouldBeExpanded:(id)arg1;
-(void)getUserActivityForResult:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)resultsViewController:(id)arg1 didChangeContentSize:(CGSize)arg2 animated:(BOOL)arg3;
-(void)didUpdateContentScrolledOffScreenStatus:(BOOL)arg1 animated:(BOOL)arg2;
-(void)didScrollPastBottomOfContent;
-(void)didChangeExpansionStateForSection:(id)arg1 expanded:(BOOL)arg2;
-(void)didBeginScrollingResults;
-(void)didTapInEmptyRegion;

@end

