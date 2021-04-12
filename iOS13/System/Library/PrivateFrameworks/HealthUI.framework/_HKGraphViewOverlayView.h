/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIGraphicsImageRenderer;

@interface _HKGraphViewOverlayView : UIImageView {

	UIGraphicsImageRenderer* _imageRenderer;

}

@property (nonatomic,retain) UIGraphicsImageRenderer * imageRenderer;              //@synthesize imageRenderer=_imageRenderer - In the implementation block
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIGraphicsImageRenderer *)imageRenderer;
-(void)setImageRenderer:(UIGraphicsImageRenderer *)arg1 ;
-(void)drawContentUsingBlock:(/*^block*/id)arg1 ;
-(void)_updateRendererSize:(CGSize)arg1 ;
@end

