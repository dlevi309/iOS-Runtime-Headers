/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setOutlineLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)outlineLayer;
-(CAShapeLayer *)buttonLayer;
-(void)setButtonLayer:(CAShapeLayer *)arg1 ;
@end

