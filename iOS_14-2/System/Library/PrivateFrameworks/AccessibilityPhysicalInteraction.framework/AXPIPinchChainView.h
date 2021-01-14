/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
*/

#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
#import <UIKitCore/UIView.h>

@protocol AXPIFingerAppearanceDelegate;
@interface AXPIPinchChainView : UIView {

	BOOL _pressed;
	BOOL _selected;
	id<AXPIFingerAppearanceDelegate> _appearanceDelegate;
	CGPoint _startPoint;
	CGPoint _endPoint;

}

@property (assign,nonatomic) CGPoint startPoint;                                                      //@synthesize startPoint=_startPoint - In the implementation block
@property (assign,nonatomic) CGPoint endPoint;                                                        //@synthesize endPoint=_endPoint - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                                           //@synthesize pressed=_pressed - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                         //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic,__weak) id<AXPIFingerAppearanceDelegate> appearanceDelegate;              //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
-(CGPoint)startPoint;
-(CGPoint)endPoint;
-(void)setPressed:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setAppearanceDelegate:(id<AXPIFingerAppearanceDelegate>)arg1 ;
-(id<AXPIFingerAppearanceDelegate>)appearanceDelegate;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isPressed;
@end

