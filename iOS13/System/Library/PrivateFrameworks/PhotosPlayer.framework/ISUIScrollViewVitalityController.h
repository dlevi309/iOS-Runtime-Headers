/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISScrollViewVitalityController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class ISUIVisibilityOffsetHelper, UIScrollView, NSString;

@interface ISUIScrollViewVitalityController : ISScrollViewVitalityController <UIScrollViewDelegate> {

	ISUIVisibilityOffsetHelper* _visibilityOffsetHelper;
	UIScrollView* __scrollView;

}

@property (assign,setter=_setScrollView:,nonatomic,__weak) UIScrollView * _scrollView;              //@synthesize _scrollView=__scrollView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(UIScrollView *)_scrollView;
-(void)_setScrollView:(id)arg1 ;
-(BOOL)canPerformVitality;
-(id)visibilityOffsetHelper;
-(void)_reduceMotionDidChange:(id)arg1 ;
@end

