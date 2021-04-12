/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isSelected;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isPressed;
-(void)setPressed:(BOOL)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(void)setSelected:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGPoint)startPoint;
-(void)setAppearanceDelegate:(id<AXPIFingerAppearanceDelegate>)arg1 ;
-(id<AXPIFingerAppearanceDelegate>)appearanceDelegate;
-(CGPoint)endPoint;
@end

