/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animateTransition:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(id<MKPhotoGalleryTransitionAnimator>)delegate;
-(void)setTransitionView:(UIView *)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(void)setDelegate:(id<MKPhotoGalleryTransitionAnimator>)arg1 ;
-(UIView *)view;
-(id)initWithView:(id)arg1 transitionView:(id)arg2 ;
-(UIView *)transitionView;
@end

