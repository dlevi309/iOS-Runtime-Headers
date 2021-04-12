/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAShapeLayer, UIImageView, UIImageSymbolConfiguration;

@interface AVTCameraItemView : UIView {

	CAShapeLayer* _shapeLayer;
	UIImageView* _imageView;
	UIImageSymbolConfiguration* _cameraConfiguration;

}

@property (nonatomic,retain) CAShapeLayer * shapeLayer;                                     //@synthesize shapeLayer=_shapeLayer - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                       //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageSymbolConfiguration * cameraConfiguration;              //@synthesize cameraConfiguration=_cameraConfiguration - In the implementation block
-(UIImageSymbolConfiguration *)cameraConfiguration;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(void)setCameraConfiguration:(UIImageSymbolConfiguration *)arg1 ;
-(CAShapeLayer *)shapeLayer;
-(void)setShapeLayer:(CAShapeLayer *)arg1 ;
-(void)updateCameraImage;
@end

