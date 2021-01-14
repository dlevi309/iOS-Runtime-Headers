/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIGraphicsImageRenderer;

@interface _HKGraphViewOverlayView : UIImageView {

	UIGraphicsImageRenderer* _imageRenderer;

}

@property (nonatomic,retain) UIGraphicsImageRenderer * imageRenderer;              //@synthesize imageRenderer=_imageRenderer - In the implementation block
-(UIGraphicsImageRenderer *)imageRenderer;
-(void)setImageRenderer:(UIGraphicsImageRenderer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)drawContentUsingBlock:(/*^block*/id)arg1 ;
-(void)_updateRendererSize:(CGSize)arg1 ;
@end

