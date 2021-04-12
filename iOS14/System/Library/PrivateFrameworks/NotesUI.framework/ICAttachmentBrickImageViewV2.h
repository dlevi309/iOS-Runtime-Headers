/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, CALayer;

@interface ICAttachmentBrickImageViewV2 : UIView {

	BOOL _transparentBackground;
	UIImage* _image;
	unsigned long long _imageScaling;
	CALayer* _imageLayer;

}

@property (nonatomic,retain) CALayer * imageLayer;                         //@synthesize imageLayer=_imageLayer - In the implementation block
@property (nonatomic,retain) UIImage * image;                              //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned long long imageScaling;              //@synthesize imageScaling=_imageScaling - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) BOOL transparentBackground;                   //@synthesize transparentBackground=_transparentBackground - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(UIImage *)image;
-(double)cornerRadius;
-(CALayer *)imageLayer;
-(void)layoutSubviews;
-(void)setImageLayer:(CALayer *)arg1 ;
-(void)didMoveToWindow;
-(void)updateBackgroundColor;
-(unsigned long long)imageScaling;
-(void)setImageScaling:(unsigned long long)arg1 ;
-(BOOL)transparentBackground;
-(void)setCornerRadius:(double)arg1 ;
-(void)setTransparentBackground:(BOOL)arg1 ;
-(void)updateSublayersBounds:(CGRect)arg1 ;
@end

