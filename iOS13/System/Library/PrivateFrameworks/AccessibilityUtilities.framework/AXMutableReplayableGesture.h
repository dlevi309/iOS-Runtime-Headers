/*
* Generated on Monday, March 1, 2021 at 2:30:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

