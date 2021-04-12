/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)accessibilityIgnoresInvertColors;
-(UIImage *)image;
-(CALayer *)imageLayer;
-(void)setFrame:(CGRect)arg1 ;
-(void)setImageLayer:(CALayer *)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(void)setImage:(id)arg1 orientation:(long long)arg2 ;
-(void)setImageOpacity:(double)arg1 ;
-(double)imageOpacity;
@end

