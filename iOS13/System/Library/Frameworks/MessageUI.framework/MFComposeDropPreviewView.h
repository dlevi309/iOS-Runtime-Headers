/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIBezierPath, UIImage, UIImageView;

@interface MFComposeDropPreviewView : UIView {

	UIView* _previewView;
	UIBezierPath* _previewClippingPath;
	UIImage* _finalImage;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * previewView;                            //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) UIBezierPath * previewClippingPath;              //@synthesize previewClippingPath=_previewClippingPath - In the implementation block
@property (nonatomic,retain) UIImage * finalImage;                            //@synthesize finalImage=_finalImage - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIView *)previewView;
-(void)setPreviewView:(UIView *)arg1 ;
-(UIBezierPath *)previewClippingPath;
-(void)setPreviewClippingPath:(UIBezierPath *)arg1 ;
-(void)setFinalImage:(UIImage *)arg1 ;
-(UIImage *)finalImage;
@end

