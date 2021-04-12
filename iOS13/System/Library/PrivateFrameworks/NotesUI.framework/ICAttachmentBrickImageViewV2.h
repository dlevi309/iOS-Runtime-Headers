/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(double)cornerRadius;
-(void)setContentsScale:(double)arg1 ;
-(BOOL)transparentBackground;
-(void)setTransparentBackground:(BOOL)arg1 ;
-(void)updateBackgroundColor;
-(CALayer *)imageLayer;
-(void)setImageLayer:(CALayer *)arg1 ;
-(unsigned long long)imageScaling;
-(void)setImageScaling:(unsigned long long)arg1 ;
-(void)updateSublayersBounds:(CGRect)arg1 ;
@end

