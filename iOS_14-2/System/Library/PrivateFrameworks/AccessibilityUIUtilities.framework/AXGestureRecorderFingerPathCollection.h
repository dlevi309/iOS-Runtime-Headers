/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/


@protocol AXGestureRecorderFingerPathCollectionDelegate;
#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
@class NSMutableArray, NSMutableDictionary, AXMutableReplayableGesture;

@interface AXGestureRecorderFingerPathCollection : NSObject {

	BOOL _shouldRecordRealTimeGesture;
	id<AXGestureRecorderFingerPathCollectionDelegate> _delegate;
	unsigned long long _maximumFingerPathsCount;
	unsigned long long _referenceTimesArrayIndex;
	NSMutableArray* _fingerPaths;
	NSMutableArray* _pointsArrays;
	NSMutableArray* _forcesArrays;
	NSMutableDictionary* _touchPathIndicesToFingerPathIndices;
	NSMutableArray* _timesArrays;
	double _minimumFingerLineWidth;
	double _maximumFingerLineWidth;
	AXMutableReplayableGesture* _replayableGesture;

}

@property (assign,nonatomic) unsigned long long maximumFingerPathsCount;                                     //@synthesize maximumFingerPathsCount=_maximumFingerPathsCount - In the implementation block
@property (assign,nonatomic) unsigned long long referenceTimesArrayIndex;                                    //@synthesize referenceTimesArrayIndex=_referenceTimesArrayIndex - In the implementation block
@property (nonatomic,readonly) NSMutableArray * referenceTimesArray; 
@property (nonatomic,retain) NSMutableArray * fingerPaths;                                                   //@synthesize fingerPaths=_fingerPaths - In the implementation block
@property (nonatomic,retain) NSMutableArray * pointsArrays;                                                  //@synthesize pointsArrays=_pointsArrays - In the implementation block
@property (nonatomic,retain) NSMutableArray * forcesArrays;                                                  //@synthesize forcesArrays=_forcesArrays - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * touchPathIndicesToFingerPathIndices;                      //@synthesize touchPathIndicesToFingerPathIndices=_touchPathIndicesToFingerPathIndices - In the implementation block
@property (nonatomic,retain) NSMutableArray * timesArrays;                                                   //@synthesize timesArrays=_timesArrays - In the implementation block
@property (nonatomic,retain) AXMutableReplayableGesture * replayableGesture;                                 //@synthesize replayableGesture=_replayableGesture - In the implementation block
@property (assign,nonatomic,__weak) id<AXGestureRecorderFingerPathCollectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long fingerPathsCount; 
@property (nonatomic,readonly) unsigned long long timestampsCount; 
@property (assign,nonatomic) BOOL shouldRecordRealTimeGesture;                                               //@synthesize shouldRecordRealTimeGesture=_shouldRecordRealTimeGesture - In the implementation block
@property (assign,nonatomic) double minimumFingerLineWidth;                                                  //@synthesize minimumFingerLineWidth=_minimumFingerLineWidth - In the implementation block
@property (assign,nonatomic) double maximumFingerLineWidth;                                                  //@synthesize maximumFingerLineWidth=_maximumFingerLineWidth - In the implementation block
-(void)setMaximumFingerPathsCount:(unsigned long long)arg1 ;
-(void)_referenceTimesArrayIndexNeedsRefresh;
-(BOOL)shouldRecordRealTimeGesture;
-(NSMutableArray *)timesArrays;
-(NSMutableArray *)referenceTimesArray;
-(unsigned long long)referenceTimesArrayIndex;
-(void)setReferenceTimesArrayIndex:(unsigned long long)arg1 ;
-(id)_realTimeFingerPathToAppendForIndex:(unsigned long long)arg1 upToPositionForTimestampAtIndex:(unsigned long long)arg2 ;
-(id)_nonRealTimeFingerPathToAppendForIndex:(unsigned long long)arg1 upToPositionForTimestampAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)timestampsCount;
-(NSMutableArray *)pointsArrays;
-(NSMutableArray *)forcesArrays;
-(id)init;
-(id<AXGestureRecorderFingerPathCollectionDelegate>)delegate;
-(id)_bezierPathToAppendForTouchLocation:(CGPoint)arg1 unnamedValue:(double)arg2 optionalPreviousTouchLocation:(id)arg3 optionalPreviousForce:(id)arg4 ;
-(double)timestampAtIndex:(unsigned long long)arg1 ;
-(NSMutableDictionary *)touchPathIndicesToFingerPathIndices;
-(AXMutableReplayableGesture *)replayableGesture;
-(unsigned long long)maximumFingerPathsCount;
-(void)setTimesArrays:(NSMutableArray *)arg1 ;
-(CGPoint)_interfaceOrientedScreenPointForPoint:(CGPoint)arg1 view:(id)arg2 ;
-(void)setFingerPaths:(NSMutableArray *)arg1 ;
-(void)setPointsArrays:(NSMutableArray *)arg1 ;
-(void)setForcesArrays:(NSMutableArray *)arg1 ;
-(void)setTouchPathIndicesToFingerPathIndices:(NSMutableDictionary *)arg1 ;
-(void)setReplayableGesture:(AXMutableReplayableGesture *)arg1 ;
-(double)minimumFingerLineWidth;
-(double)maximumFingerLineWidth;
-(void)setDelegate:(id<AXGestureRecorderFingerPathCollectionDelegate>)arg1 ;
-(void)_didInsertFingerPathAtIndex:(unsigned long long)arg1 ;
-(void)_didUpdateFingerPathAtIndex:(unsigned long long)arg1 ;
-(void)_addPointsToReplayableGesture:(id)arg1 forces:(id)arg2 time:(double)arg3 ;
-(id)initWithMaximumFingerPathsCount:(unsigned long long)arg1 ;
-(unsigned long long)fingerPathsCount;
-(id)fingerPathAtIndex:(unsigned long long)arg1 ;
-(id)fingerPathToAppendForIndex:(unsigned long long)arg1 forTimestampAtIndex:(unsigned long long)arg2 ;
-(void)setMinimumFingerLineWidth:(double)arg1 ;
-(id)propertyListRepresentationWithName:(id)arg1 ;
-(id)replayableGestureRepresentation;
-(void)appendPointsForTouches:(id)arg1 referenceView:(id)arg2 time:(double)arg3 ;
-(void)handleLiftForTouches:(id)arg1 referenceView:(id)arg2 time:(double)arg3 ;
-(void)appendFingerPathsFromFingerPathCollection:(id)arg1 ;
-(void)setShouldRecordRealTimeGesture:(BOOL)arg1 ;
-(void)setMaximumFingerLineWidth:(double)arg1 ;
-(void)reset;
-(void)dealloc;
-(NSMutableArray *)fingerPaths;
@end

