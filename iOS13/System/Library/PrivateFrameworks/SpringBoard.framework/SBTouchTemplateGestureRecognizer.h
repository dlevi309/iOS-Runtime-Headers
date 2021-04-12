/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class NSTimer, NSMutableDictionary, NSMapTable, UIGestureRecognizerTransformAnalyzer, SBTouchTemplate, SBPolygon;

@interface SBTouchTemplateGestureRecognizer : UIGestureRecognizer {

	BOOL _recognitionBegan;
	NSTimer* _noChangeCancellationTimer;
	unsigned long long _sequenceNumber;
	NSMutableDictionary* _templatesForTouchType;
	NSMapTable* _initialTouchPointMap;
	unsigned long long _failedRecognitionAttempts;
	unsigned long long _trackingTouchCount;
	double _cumulativeMotion;
	double _cumulativeMotionEnvelope;
	double _smoothedIncrementalMotion;
	double _animationDistance;
	long long _requiredDirectionality;
	UIGestureRecognizerTransformAnalyzer* _transformAnalyzer;
	SBTouchTemplate* _matchedTemplate;
	SBPolygon* _matchedPolygon;

}

@property (nonatomic,readonly) NSMutableDictionary * templatesForTouchType;                                                                                     //@synthesize templatesForTouchType=_templatesForTouchType - In the implementation block
@property (getter=_initialTouchPointMap,nonatomic,readonly) NSMapTable * initialTouchPointMap;                                                                  //@synthesize initialTouchPointMap=_initialTouchPointMap - In the implementation block
@property (assign,setter=_setFailedRecognitionAttempts:,getter=_failedRecognitionAttempts,nonatomic) unsigned long long failedRecognitionAttempts;              //@synthesize failedRecognitionAttempts=_failedRecognitionAttempts - In the implementation block
@property (assign,setter=_setTrackingTouchCount:,getter=_trackingTouchCount,nonatomic) unsigned long long trackingTouchCount;                                   //@synthesize trackingTouchCount=_trackingTouchCount - In the implementation block
@property (assign,setter=_setCumulativeMotion:,getter=_cumulativeMotion,nonatomic) double cumulativeMotion;                                                     //@synthesize cumulativeMotion=_cumulativeMotion - In the implementation block
@property (assign,setter=_setCumulativeMotionEnvelope:,getter=_cumulativeMotionEnvelope,nonatomic) double cumulativeMotionEnvelope;                             //@synthesize cumulativeMotionEnvelope=_cumulativeMotionEnvelope - In the implementation block
@property (assign,setter=_setSmoothedIncrementalMotion:,getter=_smoothedIncrementalMotion,nonatomic) double smoothedIncrementalMotion;                          //@synthesize smoothedIncrementalMotion=_smoothedIncrementalMotion - In the implementation block
@property (setter=_setNoChangeCancellationTimer:,nonatomic,retain) NSTimer * _noChangeCancellationTimer;                                                        //@synthesize noChangeCancellationTimer=_noChangeCancellationTimer - In the implementation block
@property (assign,nonatomic) double animationDistance;                                                                                                          //@synthesize animationDistance=_animationDistance - In the implementation block
@property (assign,nonatomic) long long requiredDirectionality;                                                                                                  //@synthesize requiredDirectionality=_requiredDirectionality - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizerTransformAnalyzer * transformAnalyzer;                                                                        //@synthesize transformAnalyzer=_transformAnalyzer - In the implementation block
@property (setter=_setMatchedTemplate:,getter=_matchedTemplate,nonatomic,retain) SBTouchTemplate * matchedTemplate;                                             //@synthesize matchedTemplate=_matchedTemplate - In the implementation block
@property (setter=_setMatchedPolygon:,getter=_matchedPolygon,nonatomic,retain) SBPolygon * matchedPolygon;                                                      //@synthesize matchedPolygon=_matchedPolygon - In the implementation block
@property (assign,nonatomic,__weak) id<SBTouchTemplateGestureRecognizerDelegate> delegate; 
@property (nonatomic,readonly) unsigned long long sequenceNumber;                                                                                               //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) double cumulativePercentage; 
-(void)reset;
-(void)_reset;
-(void)log:(id)arg1 ;
-(unsigned long long)sequenceNumber;
-(void)setState:(long long)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIGestureRecognizerTransformAnalyzer *)transformAnalyzer;
-(id)logCategory;
-(void)_log:(id)arg1 ;
-(double)animationDistance;
-(double)_projectedMotionForInterval:(double)arg1 ;
-(BOOL)_directionallyAcceptMotion:(double)arg1 ;
-(long long)requiredDirectionality;
-(id)_matchedTemplate;
-(BOOL)_shouldAddNewTouchesAfterGestureRecognition;
-(void)_updateMatchedTemplateForTouchesBeganOrEnded:(id)arg1 ;
-(void)_pingNoChangeCancellationTimer;
-(void)_updateForTouchesBeganOrMoved:(id)arg1 ;
-(id)_polygonForTouches:(id)arg1 ;
-(void)_computeGestureMotionWithTouches:(id)arg1 polygon:(id)arg2 ;
-(void)_updateForTouchesCancelledOrEnded:(id)arg1 state:(long long)arg2 withEvent:(id)arg3 ;
-(void)_noChangeCancellationTimerFired:(id)arg1 ;
-(void)_failMeForReason:(id)arg1 ;
-(void)_attemptTemplateMatchWithTouches:(id)arg1 polygon:(id)arg2 ;
-(id)templatesForTouchType:(long long)arg1 ;
-(unsigned long long)_failedRecognitionAttempts;
-(id)_touchesByFilteringRestingTrackpadTouches:(id)arg1 ;
-(id)_matchedTemplateForTouches:(id)arg1 polygon:(id)arg2 ;
-(void)_setMatchedTemplate:(id)arg1 ;
-(void)_setMatchedPolygon:(id)arg1 ;
-(double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2 ;
-(id)_matchedPolygon;
-(BOOL)hasSignificantMotionToBegin;
-(void)_invalidateNoChangeCancellationTimer;
-(void)_resetNoChangeCancellationTimer;
-(double)cumulativePercentage;
-(long long)projectedCompletionTypeForInterval:(double)arg1 ;
-(void)setTemplates:(id)arg1 forTouchType:(long long)arg2 ;
-(NSTimer *)_noChangeCancellationTimer;
-(void)_setNoChangeCancellationTimer:(id)arg1 ;
-(NSMutableDictionary *)templatesForTouchType;
-(id)_initialTouchPointMap;
-(void)_setFailedRecognitionAttempts:(unsigned long long)arg1 ;
-(unsigned long long)_trackingTouchCount;
-(void)_setTrackingTouchCount:(unsigned long long)arg1 ;
-(double)_cumulativeMotion;
-(void)_setCumulativeMotion:(double)arg1 ;
-(double)_cumulativeMotionEnvelope;
-(void)_setCumulativeMotionEnvelope:(double)arg1 ;
-(double)_smoothedIncrementalMotion;
-(void)_setSmoothedIncrementalMotion:(double)arg1 ;
-(void)setAnimationDistance:(double)arg1 ;
-(void)setRequiredDirectionality:(long long)arg1 ;
@end

