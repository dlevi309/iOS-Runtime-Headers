/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSUUID, CAShapeLayer, UIImage, UIImageView, UIViewPropertyAnimator;

@interface AVTPoseCollectionViewCell : UICollectionViewCell {

	NSUUID* _contextIdentifier;
	CAShapeLayer* _selectionLayer;
	UIImage* _image;
	UIImageView* _imageView;
	UIImageView* _transitionImageView;
	UIViewPropertyAnimator* _scaleDownTransformAnimator;
	UIViewPropertyAnimator* _scaleUpWithBounceTransformAnimator;

}

@property (nonatomic,retain) CAShapeLayer * selectionLayer;                                            //@synthesize selectionLayer=_selectionLayer - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                          //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * transitionImageView;                                        //@synthesize transitionImageView=_transitionImageView - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * scaleDownTransformAnimator;                      //@synthesize scaleDownTransformAnimator=_scaleDownTransformAnimator - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * scaleUpWithBounceTransformAnimator;              //@synthesize scaleUpWithBounceTransformAnimator=_scaleUpWithBounceTransformAnimator - In the implementation block
@property (nonatomic,retain) NSUUID * contextIdentifier;                                               //@synthesize contextIdentifier=_contextIdentifier - In the implementation block
+(CGPathRef)selectionPathInBounds:(CGRect)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(CAShapeLayer *)selectionLayer;
-(void)setSelectionLayer:(CAShapeLayer *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(UIImage *)image;
-(void)layoutSubviews;
-(void)updateImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)setContextIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)contextIdentifier;
-(void)setScaleDownTransformAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)scaleDownTransformAnimator;
-(void)setScaleUpWithBounceTransformAnimator:(UIViewPropertyAnimator *)arg1 ;
-(void)cancelAnimations;
-(UIViewPropertyAnimator *)scaleUpWithBounceTransformAnimator;
-(UIImageView *)transitionImageView;
-(void)setTransitionImageView:(UIImageView *)arg1 ;
@end

