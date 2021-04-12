/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHStrokeGroupingStrategy.h>

@interface CHTimeWindowStrokeGroupingStrategy : CHStrokeGroupingStrategy
-(id)updatedGroupingResult:(id)arg1 byAddingStrokes:(id)arg2 removingStrokeIdentifiers:(id)arg3 stableStrokeIdentifiers:(id)arg4 allSubstrokesByStrokeIdentifier:(id)arg5 withCancellationBlock:(/*^block*/id)arg6 ;
-(id)recognizableDrawingForStrokeGroup:(id)arg1 translationVector:(CGVector)arg2 originalDrawing:(id*)arg3 orderedStrokesIDs:(id*)arg4 rescalingFactor:(double*)arg5 ;
-(id)_timeSortedStrokesForIdentifiers:(id)arg1 ;
@end

