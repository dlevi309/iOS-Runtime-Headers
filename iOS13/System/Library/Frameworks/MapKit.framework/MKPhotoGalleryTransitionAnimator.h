/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol MKPhotoGalleryTransitionAnimator;
@class UIView, NSString;

@interface MKPhotoGalleryTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	id<MKPhotoGalleryTransitionAnimator> _delegate;
	UIView* _view;
	UIView* _transitionView;

}

@property (nonatomic,retain) UIView * view;                                                     //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIView * transitionView;                                           //@synthesize transitionView=_transitionView - In the implementation block
@property (assign,nonatomic,__weak) id<MKPhotoGalleryTransitionAnimator> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MKPhotoGalleryTransitionAnimator>)delegate;
-(void)setDelegate:(id<MKPhotoGalleryTransitionAnimator>)arg1 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(UIView *)transitionView;
-(id)initWithView:(id)arg1 transitionView:(id)arg2 ;
-(void)setTransitionView:(UIView *)arg1 ;
@end

