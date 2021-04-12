/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
*/


#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
@interface AXPIFingerEventTouchInfo : NSObject {

	double _force;
	CGPoint _normalizedLocation;

}

@property (assign,nonatomic) CGPoint normalizedLocation;              //@synthesize normalizedLocation=_normalizedLocation - In the implementation block
@property (assign,nonatomic) double force;                            //@synthesize force=_force - In the implementation block
-(double)force;
-(void)setForce:(double)arg1 ;
-(CGPoint)normalizedLocation;
-(void)setNormalizedLocation:(CGPoint)arg1 ;
@end

