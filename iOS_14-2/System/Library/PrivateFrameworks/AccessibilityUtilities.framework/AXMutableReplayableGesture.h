/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/AXReplayableGesture.h>

@interface AXMutableReplayableGesture : AXReplayableGesture
-(void)addPointsByFingerIdentifier:(id)arg1 forces:(id)arg2 atTime:(double)arg3 ;
-(void)addPointsFromReplayableGesture:(id)arg1 ;
-(void)_addPoint:(CGPoint)arg1 force:(double)arg2 forFingerIdentifier:(id)arg3 atTime:(double)arg4 ;
-(void)_addPoint:(CGPoint)arg1 force:(double)arg2 forFingerIdentifier:(id)arg3 atEventIndex:(unsigned long long)arg4 ;
-(void)_removeFingersAtEventIndex:(unsigned long long)arg1 ;
-(id)_pointsByFingerIdentifierAtEventIndex:(unsigned long long)arg1 ;
-(id)_forcesByFingerIdentifierAtEventIndex:(unsigned long long)arg1 ;
@end

