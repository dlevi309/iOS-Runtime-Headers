/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHStrokeGroup.h>

@class NSArray;

@interface CHTextLineStrokeGroup : CHStrokeGroup {

	NSArray* _writingDirectionSortedSubstrokes;
	CGVector _averageWritingOrientation;
	CGVector _averageStrokeDeviation;
	vector<CGVector, std::__1::allocator<CGVector> >* _localStrokeWritingOrientations;
	long long _lastSubstrokeIndexBeforeMerge;
	NSArray* _coalescedLastSubstrokes;
	NSArray* _writingDirectionSortedStrokeIdentifiers;

}

@property (nonatomic,retain,readonly) NSArray * writingDirectionSortedStrokeIdentifiers;              //@synthesize writingDirectionSortedStrokeIdentifiers=_writingDirectionSortedStrokeIdentifiers - In the implementation block
-(void)dealloc;
-(CGVector)averageWritingOrientation;
-(id)initWithAncestorIdentifier:(long long)arg1 strokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(CGRect)arg5 strategyIdentifier:(id)arg6 writingDirectionSortedSubstrokes:(id)arg7 averageWritingOrientation:(CGVector)arg8 averageStrokeDeviation:(CGVector)arg9 writingDirectionSortedStrokeIdentifiers:(id)arg10 localStrokeWritingOrientations:(const vector<CGVector, std::__1::allocator<CGVector> >*)arg11 coalescedLastSubstrokes:(id)arg12 groupingConfidence:(double)arg13 firstStrokeOrigin:(CGPoint)arg14 ;
-(id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(CGRect)arg4 strategyIdentifier:(id)arg5 writingDirectionSortedSubstrokes:(id)arg6 averageWritingOrientation:(CGVector)arg7 averageStrokeDeviation:(CGVector)arg8 writingDirectionSortedStrokeIdentifiers:(id)arg9 localStrokeWritingOrientations:(const vector<CGVector, std::__1::allocator<CGVector> >*)arg10 coalescedLastSubstrokes:(id)arg11 groupingConfidence:(double)arg12 firstStrokeOrigin:(CGPoint)arg13 ;
-(id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(CGRect)arg5 writingDirectionSortedSubstrokes:(id)arg6 averageWritingOrientation:(CGVector)arg7 averageStrokeDeviation:(CGVector)arg8 writingDirectionSortedStrokeIdentifiers:(id)arg9 localStrokeWritingOrientations:(const vector<CGVector, std::__1::allocator<CGVector> >*)arg10 coalescedLastSubstrokes:(id)arg11 groupingConfidence:(double)arg12 lastSubstrokeIndexBeforeMerge:(long long)arg13 firstStrokeOrigin:(CGPoint)arg14 ;
-(id)writingDirectionSortedSubstrokes;
-(vector<CGVector, std::__1::allocator<CGVector> >*)localStrokeWritingOrientations;
-(CGVector)localWritingOrientationAtStrokeIndex:(long long)arg1 ;
-(CGVector)averageStrokeDeviation;
-(long long)lastSubstrokeIndexBeforeMerge;
-(id)coalescedLastSubstrokes;
-(NSArray *)writingDirectionSortedStrokeIdentifiers;
@end

