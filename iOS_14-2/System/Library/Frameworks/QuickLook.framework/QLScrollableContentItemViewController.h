/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLItemViewController.h>
#import <libobjc.A.dylib/QLPreviewScrollViewZoomDelegate.h>

@class QLPreviewScrollView, UIView, UITapGestureRecognizer, NSString;

@interface QLScrollableContentItemViewController : QLItemViewController <QLPreviewScrollViewZoomDelegate> {

	QLPreviewScrollView* _scrollView;
	UIView* _contentView;
	UITapGestureRecognizer* _doubleTapGesture;
	BOOL _isVisible;
	BOOL _shouldFit;

}

@property (nonatomic,retain) UIView * contentView;                  //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL shouldFit;                        //@synthesize shouldFit=_shouldFit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)imageSize;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(id)init;
-(void)didEndZoomingAtScale:(double)arg1 ;
-(void)willBeginZooming;
-(void)setShouldFit:(BOOL)arg1 ;
-(void)_doubleTapRecognized:(id)arg1 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)shouldFit;
-(BOOL)previewScrollViewShouldResizeContentBasedOnPeripheryInsets:(id)arg1 ;
-(double)previewScrollView:(id)arg1 extraMinimumZoomForMinimumZoomScale:(double)arg2 maximumZoomScale:(double)arg3 ;
-(void)previewScrollViewWillBeginZooming:(id)arg1 ;
-(void)previewScrollView:(id)arg1 didEndZoomingAtScale:(double)arg2 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)_updateScrollViewZoomUpdate:(CGSize)arg1 ;
-(BOOL)shouldLayoutContentBasedOnPeripheryInsets;
-(void)transitionWillFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(UIView *)contentView;
-(BOOL)canPinchToDismiss;
-(id)scrollView;
-(id)parallaxView;
-(BOOL)supportsScrollingUpAndDownUsingKeyCommands;
@end

