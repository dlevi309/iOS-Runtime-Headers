/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
*/

#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@protocol AXPIFingerAppearanceDelegate;
@interface AXPIFingerLayer : CAShapeLayer {

	BOOL _isSelected;
	BOOL _pressed;
	unsigned long long _shape;
	id<AXPIFingerAppearanceDelegate> _appearanceDelegate;
	CGRect _outerFrame;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected;                                         //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                                           //@synthesize pressed=_pressed - In the implementation block
@property (assign,nonatomic) unsigned long long shape;                                                //@synthesize shape=_shape - In the implementation block
@property (assign,nonatomic,__weak) id<AXPIFingerAppearanceDelegate> appearanceDelegate;              //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
@property (nonatomic,readonly) CGRect outerFrame;                                                     //@synthesize outerFrame=_outerFrame - In the implementation block
-(void)setShape:(unsigned long long)arg1 ;
-(unsigned long long)shape;
-(void)setPressed:(BOOL)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setAppearanceDelegate:(id<AXPIFingerAppearanceDelegate>)arg1 ;
-(id<AXPIFingerAppearanceDelegate>)appearanceDelegate;
-(BOOL)isPressed;
-(id)initWithAppearanceDelegate:(id)arg1 ;
-(CGRect)outerFrame;
@end

