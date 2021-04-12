/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class CAShapeLayer;

@interface WFCameraShutterButton : UIControl {

	CAShapeLayer* _outlineLayer;
	CAShapeLayer* _buttonLayer;

}

@property (assign,nonatomic,__weak) CAShapeLayer * outlineLayer;              //@synthesize outlineLayer=_outlineLayer - In the implementation block
@property (assign,nonatomic,__weak) CAShapeLayer * buttonLayer;               //@synthesize buttonLayer=_buttonLayer - In the implementation block
-(id)accessibilityLabel;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAccessibilityElement;
-(unsigned long long)accessibilityTraits;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(CAShapeLayer *)outlineLayer;
-(void)setOutlineLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)buttonLayer;
-(void)setButtonLayer:(CAShapeLayer *)arg1 ;
@end

