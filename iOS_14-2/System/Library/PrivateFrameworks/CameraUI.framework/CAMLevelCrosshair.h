/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface CAMLevelCrosshair : UIView {

	BOOL _highlighted;

}

@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
+(void)_drawCrosshairInContext:(CGContextRef)arg1 withBounds:(CGRect)arg2 strokeWidth:(double)arg3 color:(id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isHighlighted;
-(id)initWithCoder:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_commonCAMLevelCrosshairInitialization;
@end

