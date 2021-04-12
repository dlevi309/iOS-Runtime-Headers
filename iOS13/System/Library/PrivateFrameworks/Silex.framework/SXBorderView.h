/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage;

@interface SXBorderView : UIView {

	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
+(Class)layerClass;
-(id)init;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

