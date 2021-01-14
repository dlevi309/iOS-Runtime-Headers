/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGPoint)normalizedLocation;
-(void)setForce:(double)arg1 ;
-(void)setNormalizedLocation:(CGPoint)arg1 ;
@end

