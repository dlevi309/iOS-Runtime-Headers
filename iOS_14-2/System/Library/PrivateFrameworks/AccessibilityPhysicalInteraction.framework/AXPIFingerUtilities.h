/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
*/


#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
@interface AXPIFingerUtilities : NSObject
+(BOOL)laserEnabled;
+(id)defaultLocationsForNumberOfFingers:(unsigned long long)arg1 aroundPoint:(CGPoint)arg2 withinBounds:(CGRect)arg3 ;
+(id)_points:(id)arg1 adjustedForBounds:(CGRect)arg2 ;
+(id)defaultLocationsForNumberOfFingers:(unsigned long long)arg1 aroundPoint:(CGPoint)arg2 ;
+(id)defaultPinchLocationsAroundPoint:(CGPoint)arg1 withinBounds:(CGRect)arg2 ;
+(void)updateFirstLocation:(CGPoint*)arg1 secondLocation:(CGPoint*)arg2 forPinchWithRadiusDelta:(double)arg3 angleDelta:(double)arg4 ;
+(id)fingerModelsForPointStrings:(id)arg1 ;
+(id)pointStringsForFingerModels:(id)arg1 ;
+(unsigned long long)fingerShapeForCorner:(unsigned long long)arg1 ;
+(id)pointerFiltersForLuminanceLevel:(unsigned long long)arg1 ;
+(id)pointerAnimationSettings;
@end

