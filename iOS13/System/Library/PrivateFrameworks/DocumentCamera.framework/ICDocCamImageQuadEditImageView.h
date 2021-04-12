/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer, UIImage;

@interface ICDocCamImageQuadEditImageView : UIView {

	double _imageOpacity;
	CALayer* _imageLayer;
	UIImage* _image;
	long long _orientation;

}

@property (nonatomic,retain) CALayer * imageLayer;               //@synthesize imageLayer=_imageLayer - In the implementation block
@property (nonatomic,retain) UIImage * image;                    //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double imageOpacity;                //@synthesize imageOpacity=_imageOpacity - In the implementation block
-(long long)orientation;
-(UIImage *)image;
-(void)setOrientation:(long long)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)accessibilityIgnoresInvertColors;
-(CALayer *)imageLayer;
-(void)setImageLayer:(CALayer *)arg1 ;
-(void)setImage:(id)arg1 orientation:(long long)arg2 ;
-(void)setImageOpacity:(double)arg1 ;
-(double)imageOpacity;
@end

