/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
*/


@protocol AXPIFingerModelDelegate;
#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
@interface AXPIFingerModel : NSObject {

	BOOL _pressed;
	BOOL _selected;
	double _force;
	unsigned long long _shape;
	id<AXPIFingerModelDelegate> _delegate;
	CGPoint _location;

}

@property (nonatomic,retain) id<AXPIFingerModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGPoint location;                                  //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double force;                                      //@synthesize force=_force - In the implementation block
@property (assign,nonatomic) unsigned long long shape;                          //@synthesize shape=_shape - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                     //@synthesize pressed=_pressed - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                   //@synthesize selected=_selected - In the implementation block
+(id)fingerModelForLocation:(CGPoint)arg1 ;
-(void)setShape:(unsigned long long)arg1 ;
-(unsigned long long)shape;
-(double)force;
-(void)setPressed:(BOOL)arg1 ;
-(id<AXPIFingerModelDelegate>)delegate;
-(CGPoint)location;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setLocation:(CGPoint)arg1 ;
-(void)setForce:(double)arg1 ;
-(void)setDelegate:(id<AXPIFingerModelDelegate>)arg1 ;
-(id)description;
-(BOOL)isPressed;
-(void)setPressed:(BOOL)arg1 sendDelegateCallback:(BOOL)arg2 ;
-(void)updateWithPropertiesFromFingerModel:(id)arg1 ;
@end

