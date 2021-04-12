/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIView.h>

@class UIImageView, NSArray;

@interface PKImageSequenceView : UIView {

	BOOL _isAnimating;
	unsigned long long _animationContext;
	unsigned long long _activeImageIndex;
	UIImageView* _imageView;
	UIImageView* _fadeInImageView;
	NSArray* _images;

}
-(void)startAnimation;
-(void)layoutSubviews;
-(void)_transitionToImage:(id)arg1 ;
-(void)_finishedTransitionToImage:(id)arg1 ;
-(id)initWitImages:(id)arg1 ;
-(void)updateImages:(id)arg1 ;
-(void)stopAnimation;
@end

