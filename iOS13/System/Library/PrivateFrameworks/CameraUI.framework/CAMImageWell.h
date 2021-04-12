/*
* Generated on Monday, March 1, 2021 at 2:33:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, UIImageView, NSMutableArray, UIImage, NSString;

@interface CAMImageWell : UIButton <UIGestureRecognizerDelegate> {

	BOOL _scaledForInteraction;
	BOOL _thumbnailImageHidden;
	long long _layoutStyle;
	long long _cameraOrientation;
	UIView* __containerView;
	UIImageView* __thumbnailImageView;
	NSMutableArray* __dimmingViewQueue;
	UIImage* __thumbnailImage;
	UIImage* __placeholderImage;
	NSString* __uuid;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (nonatomic,readonly) UIImage * thumbnailImage; 
@property (nonatomic,readonly) UIView * _containerView;                                             //@synthesize _containerView=__containerView - In the implementation block
@property (nonatomic,readonly) UIImageView * _thumbnailImageView;                                   //@synthesize _thumbnailImageView=__thumbnailImageView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _dimmingViewQueue;                                  //@synthesize _dimmingViewQueue=__dimmingViewQueue - In the implementation block
@property (setter=_setThumbnailImage:,nonatomic,retain) UIImage * _thumbnailImage;                  //@synthesize _thumbnailImage=__thumbnailImage - In the implementation block
@property (setter=_setPlaceholderImage:,nonatomic,retain) UIImage * _placeholderImage;              //@synthesize _placeholderImage=__placeholderImage - In the implementation block
@property (setter=_setUuid:,nonatomic,retain) NSString * _uuid;                                     //@synthesize _uuid=__uuid - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                                 //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) long long cameraOrientation;                                           //@synthesize cameraOrientation=_cameraOrientation - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                                       //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (assign,getter=isScaledForInteraction,nonatomic) BOOL scaledForInteraction;               //@synthesize scaledForInteraction=_scaledForInteraction - In the implementation block
@property (assign,getter=isThumbnailImageHidden,nonatomic) BOOL thumbnailImageHidden;               //@synthesize thumbnailImageHidden=_thumbnailImageHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(UIView *)_containerView;
-(NSString *)_uuid;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(void)_setUuid:(id)arg1 ;
-(UIImage *)_placeholderImage;
-(UIImage *)_thumbnailImage;
-(UIImage *)thumbnailImage;
-(UIImageView *)_thumbnailImageView;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(void)_setPlaceholderImage:(id)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_updateForLayoutStyle;
-(void)prepareForThumbnailUpdateFromCapture;
-(void)setThumbnailImage:(id)arg1 uuid:(id)arg2 animated:(BOOL)arg3 ;
-(void)recoverFromFailedThumbnailUpdate;
-(void)setCameraOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setScaledForInteraction:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setThumbnailImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)setScaledForInteraction:(BOOL)arg1 ;
-(BOOL)isScaledForInteraction;
-(CGRect)alignmentRectForFrame:(CGRect)arg1 scaledForInteraction:(BOOL)arg2 ;
-(void)setThumbnailImageHidden:(BOOL)arg1 ;
-(void)_commonCAMImageWellInitializationWithLayoutStyle:(long long)arg1 ;
-(void)_updateThumbnailTransformFromCameraOrientation;
-(void)_setThumbnailImage:(id)arg1 ;
-(void)_updateThumbnailImageAnimated:(BOOL)arg1 ;
-(void)_removeFirstDimmingView;
-(BOOL)isThumbnailImageHidden;
-(void)_performEmitAnimationWithImage:(id)arg1 orientation:(long long)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(CGAffineTransform)_affineTransformForImageOrientation:(long long)arg1 ;
-(id)_placeholderImageForLayoutStyle:(long long)arg1 ;
-(double)_cornerRadiusForLayoutStyle:(long long)arg1 ;
-(void)setCameraOrientation:(long long)arg1 ;
-(long long)cameraOrientation;
-(NSMutableArray *)_dimmingViewQueue;
@end

