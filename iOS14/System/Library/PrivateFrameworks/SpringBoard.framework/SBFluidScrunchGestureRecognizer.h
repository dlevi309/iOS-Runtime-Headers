/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTouchTemplateGestureRecognizer.h>
#import <libobjc.A.dylib/SBGestureRecognizerTouchHistoryProviding.h>
#import <libobjc.A.dylib/SBGestureRecognizerPanGestureProviding.h>

@class SBTouchHistory, NSString;

@interface SBFluidScrunchGestureRecognizer : SBTouchTemplateGestureRecognizer <SBGestureRecognizerTouchHistoryProviding, SBGestureRecognizerPanGestureProviding> {

	double _absoluteScale;
	long long _recognizedTouchType;
	double _lastPerimeter;
	SBTouchHistory* _touchHistory;
	CGPoint _initialCentroid;
	CGPoint _absoluteTranslation;
	CGPoint _additionalTranslationDueToChangingAnchorPoints;

}

@property (assign,nonatomic) CGPoint absoluteTranslation;                                         //@synthesize absoluteTranslation=_absoluteTranslation - In the implementation block
@property (assign,nonatomic) double absoluteScale;                                                //@synthesize absoluteScale=_absoluteScale - In the implementation block
@property (assign,nonatomic) CGPoint additionalTranslationDueToChangingAnchorPoints;              //@synthesize additionalTranslationDueToChangingAnchorPoints=_additionalTranslationDueToChangingAnchorPoints - In the implementation block
@property (assign,nonatomic) double lastPerimeter;                                                //@synthesize lastPerimeter=_lastPerimeter - In the implementation block
@property (assign,nonatomic) CGPoint initialCentroid;                                             //@synthesize initialCentroid=_initialCentroid - In the implementation block
@property (nonatomic,retain) SBTouchHistory * touchHistory;                                       //@synthesize touchHistory=_touchHistory - In the implementation block
@property (nonatomic,readonly) CGPoint centroid; 
@property (nonatomic,readonly) long long recognizedTouchType;                                     //@synthesize recognizedTouchType=_recognizedTouchType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_scrunchTemplatesForTouchType:(long long)arg1 ;
+(id)_panTemplatesForTouchType:(long long)arg1 ;
-(double)peakSpeed;
-(CGPoint)velocityInView:(id)arg1 ;
-(id)logCategory;
-(void)setAllowedTouchTypes:(id)arg1 ;
-(CGPoint)translationInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setTouchHistory:(SBTouchHistory *)arg1 ;
-(CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1 ;
-(SBTouchHistory *)touchHistory;
-(CGPoint)centroid;
-(double)_hysteresis;
-(void)_computeGestureMotionWithTouches:(id)arg1 polygon:(id)arg2 ;
-(void)setInitialCentroid:(CGPoint)arg1 ;
-(double)lastPerimeter;
-(CGPoint)_centroidInGestureViewForPolygon:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)_installTemplates;
-(void)_updateRecognizedTouchTypeIfNecessaryWithTouches:(id)arg1 ;
-(void)setAdditionalTranslationDueToChangingAnchorPoints:(CGPoint)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setAbsoluteTranslation:(CGPoint)arg1 ;
-(BOOL)_shouldAddNewTouchesAfterGestureRecognition;
-(id)_gestureView;
-(CGPoint)translationWithoutConsideringScaleInView:(id)arg1 ;
-(double)averageTouchPathAngleOverTimeDuration:(double)arg1 ;
-(void)conformsToSBGestureRecognizerTouchHistoryProviding;
-(BOOL)_isMatchedTemplateScrunchTemplate;
-(CGPoint)initialCentroid;
-(CGPoint)absoluteTranslation;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(CGPoint)additionalTranslationDueToChangingAnchorPoints;
-(double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2 ;
-(void)_setMatchedPolygon:(id)arg1 ;
-(long long)recognizedTouchType;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setLastPerimeter:(double)arg1 ;
-(double)animationDistance;
-(void)setAbsoluteScale:(double)arg1 ;
-(double)absoluteScale;
@end

