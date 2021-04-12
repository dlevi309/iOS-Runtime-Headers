/*
* Generated on Monday, March 1, 2021 at 2:33:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CAMTransientImageWellDelegate;
@class UIImageView, NSTimer, UITapGestureRecognizer, UISwipeGestureRecognizer, UIImage, NSString;

@interface CAMTransientImageWell : UIView <UIGestureRecognizerDelegate> {

	BOOL _autoStashesImages;
	BOOL __stashed;
	id<CAMTransientImageWellDelegate> _delegate;
	long long _orientation;
	UIImageView* __imageView;
	NSTimer* __autoStashTimer;
	UITapGestureRecognizer* __tapGestureRecognizer;
	UISwipeGestureRecognizer* __unstashGestureRecognizer;
	UISwipeGestureRecognizer* __stashGestureRecognizer;

}

@property (setter=_setImageView:,nonatomic,retain) UIImageView * _imageView;                      //@synthesize _imageView=__imageView - In the implementation block
@property (nonatomic,retain) NSTimer * _autoStashTimer;                                           //@synthesize _autoStashTimer=__autoStashTimer - In the implementation block
@property (assign,setter=_setStashed:,getter=_isStashed,nonatomic) BOOL _stashed;                 //@synthesize _stashed=__stashed - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * _tapGestureRecognizer;                    //@synthesize _tapGestureRecognizer=__tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UISwipeGestureRecognizer * _unstashGestureRecognizer;              //@synthesize _unstashGestureRecognizer=__unstashGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UISwipeGestureRecognizer * _stashGestureRecognizer;                //@synthesize _stashGestureRecognizer=__stashGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<CAMTransientImageWellDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long orientation;                                               //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) BOOL autoStashesImages;                                              //@synthesize autoStashesImages=_autoStashesImages - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) CGRect imageFrame; 
@property (assign,nonatomic) BOOL currentImageHidden; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CAMTransientImageWellDelegate>)delegate;
-(void)setDelegate:(id<CAMTransientImageWellDelegate>)arg1 ;
-(long long)orientation;
-(UIImage *)image;
-(void)setOrientation:(long long)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UIImageView *)_imageView;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(UITapGestureRecognizer *)_tapGestureRecognizer;
-(void)_handleTap:(id)arg1 ;
-(CGRect)imageFrame;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setImageView:(id)arg1 ;
-(void)_handleUnstashSwipe:(id)arg1 ;
-(void)_handleStashSwipe:(id)arg1 ;
-(void)_setStashed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGRect)_unorientedFrameForImageView:(id)arg1 ;
-(CGSize)_imageViewMaxSize;
-(CGPoint)_imageViewSpawnPoint;
-(BOOL)_isStashed;
-(CGPoint)_imageViewStashPoint;
-(BOOL)autoStashesImages;
-(void)_restartAutoStashTimerWithDuration:(double)arg1 ;
-(void)_cancelAutoStashTimer;
-(void)_handleAutoStashTimerFired:(id)arg1 ;
-(void)set_autoStashTimer:(NSTimer *)arg1 ;
-(NSTimer *)_autoStashTimer;
-(void)_dismissImageView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_restartAutoStashTimer;
-(void)_dismissImageAnimated:(BOOL)arg1 ;
-(void)_setStashed:(BOOL)arg1 ;
-(CGSize)_imageViewSizeForContentSize:(CGSize)arg1 ;
-(void)setAutoStashesImages:(BOOL)arg1 ;
-(void)clearImageAnimated:(BOOL)arg1 ;
-(BOOL)currentImageHidden;
-(void)setCurrentImageHidden:(BOOL)arg1 ;
-(UISwipeGestureRecognizer *)_unstashGestureRecognizer;
-(UISwipeGestureRecognizer *)_stashGestureRecognizer;
@end

