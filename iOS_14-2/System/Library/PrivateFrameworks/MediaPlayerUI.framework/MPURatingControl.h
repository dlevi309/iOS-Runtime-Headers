/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol MPURatingControlDelegate;
@class UITapGestureRecognizer, UIPanGestureRecognizer, NSMutableArray;

@interface MPURatingControl : UIControl {

	UITapGestureRecognizer* _tapGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	NSMutableArray* _imageViews;
	id<MPURatingControlDelegate> _delegate;
	double _rating;
	UIEdgeInsets _hitTestEdgeInsets;

}

@property (assign,nonatomic,__weak) id<MPURatingControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitTestEdgeInsets;                            //@synthesize hitTestEdgeInsets=_hitTestEdgeInsets - In the implementation block
@property (assign,nonatomic) double rating;                                             //@synthesize rating=_rating - In the implementation block
+(id)ratingStarImage;
+(id)ratingDotImage;
-(double)rating;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)hitTestEdgeInsets;
-(void)setHitTestEdgeInsets:(UIEdgeInsets)arg1 ;
-(id<MPURatingControlDelegate>)delegate;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setRating:(double)arg1 ;
-(void)_handleTapGesture:(id)arg1 ;
-(void)setDelegate:(id<MPURatingControlDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)_handlePanGesture:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidMoveToSuperview;
-(void)_updateImageViewsForRatingAnimated:(BOOL)arg1 ;
-(double)ratingValueForLocationInView:(CGPoint)arg1 ;
-(void)setRating:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateImageView:(id)arg1 proposedImage:(id)arg2 filled:(BOOL)arg3 ;
@end

