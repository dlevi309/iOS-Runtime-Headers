/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)scrollViewDidZoom:(id)arg1 ;
-(BOOL)canPerformVitality;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(UIScrollView *)_scrollView;
-(id)init;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)_reduceMotionDidChange:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)visibilityOffsetHelper;
-(void)_setScrollView:(id)arg1 ;
@end

