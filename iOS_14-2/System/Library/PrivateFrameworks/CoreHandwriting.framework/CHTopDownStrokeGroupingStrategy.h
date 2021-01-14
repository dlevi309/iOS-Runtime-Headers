/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHStrokeGroupingStrategy.h>

@class NSString, NSArray;

@interface CHTopDownStrokeGroupingStrategy : CHStrokeGroupingStrategy {

	NSString* _strategyIdentifier;
	double _minimumDrawingSize;
	double _splitCostThreshold;
	double _transitionTimeWeight;
	double _transitionTimeUpperBound;
	double _verticalDistanceWeight;
	double _leftTransitionWeight;
	double _leftTransitionUpperBound;
	double _horizontalDistanceBarrier;
	double _horizontalDistanceWeight;
	double _aspectRatioWeight;
	double _writingDirectionWeight;
	double _writingDirectionUpperBound;
	double _writingDirectionMinCoeff;
	double _minLineHeightScore;
	double _minArcLengthScore;
	double _expectedSubstrokesPerLine;
	double _minSubstrokesForSplit;
	double _targetFitnessWeight;
	BOOL _reorderStrokes;
	NSArray* _textInputTargets;

}

@property (nonatomic,retain,readonly) NSArray * textInputTargets;              //@synthesize textInputTargets=_textInputTargets - In the implementation block
-(void)dealloc;
-(NSArray *)textInputTargets;
-(id)strategyIdentifier;
-(id)updatedGroupingResult:(id)arg1 byAddingStrokes:(id)arg2 removingStrokeIdentifiers:(id)arg3 stableStrokeIdentifiers:(id)arg4 allSubstrokesByStrokeIdentifier:(id)arg5 withCancellationBlock:(/*^block*/id)arg6 ;
-(id)recognizableDrawingForStrokeGroup:(id)arg1 translationVector:(CGVector)arg2 originalDrawing:(id*)arg3 orderedStrokesIDs:(id*)arg4 rescalingFactor:(double*)arg5 ;
-(id)initWithStrokeProvider:(id)arg1 locale:(id)arg2 textInputTargets:(id)arg3 ;
-(double)_estimateSplitScore:(id)arg1 withTextInputTargets:(id)arg2 arcLengthsByStrokeIdentifier:(id)arg3 ;
-(id)_strokeIdentifersFromStrokes:(id)arg1 ;
-(id)_strokeGroupWithStrokes:(id)arg1 orderedStrokeIdentifiers:(id)arg2 previousGroups:(id)arg3 shouldSearchForStableIdentifier:(BOOL)arg4 ;
-(double)_accumulatedTimeDifferences:(id)arg1 ;
-(id)_findMostProbableTextInputTarget:(id)arg1 forGroupBounds:(CGRect)arg2 outOverlap:(double*)arg3 outDistance:(double*)arg4 ;
@end

