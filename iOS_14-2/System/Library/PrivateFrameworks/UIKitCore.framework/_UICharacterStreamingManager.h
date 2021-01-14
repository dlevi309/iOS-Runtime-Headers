/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UITextView, CADisplayLink, NSString, NSMutableArray;

@interface _UICharacterStreamingManager : NSObject {

	UITextView* _textView;
	CADisplayLink* _streamingAnimationDisplayLink;
	BOOL _streamingAnimationActive;
	double _lastAnimationUpdateTimeStamp;
	BOOL _committingFinalResults;
	BOOL _discardNextHypothesis;
	NSString* _previousHypothesis;
	NSString* _lastHypothesis;
	NSString* _targetHypothesis;
	NSMutableArray* _pendingEdits;
	double _streamingCharacterInsertionRate;
	double _minDurationBetweenHypotheses;

}

@property (nonatomic,copy) NSString * previousHypothesis;                         //@synthesize previousHypothesis=_previousHypothesis - In the implementation block
@property (nonatomic,copy) NSString * lastHypothesis;                             //@synthesize lastHypothesis=_lastHypothesis - In the implementation block
@property (nonatomic,copy) NSString * targetHypothesis;                           //@synthesize targetHypothesis=_targetHypothesis - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingEdits;                       //@synthesize pendingEdits=_pendingEdits - In the implementation block
@property (assign,nonatomic) double streamingCharacterInsertionRate;              //@synthesize streamingCharacterInsertionRate=_streamingCharacterInsertionRate - In the implementation block
@property (assign,nonatomic) double minDurationBetweenHypotheses;                 //@synthesize minDurationBetweenHypotheses=_minDurationBetweenHypotheses - In the implementation block
@property (assign,nonatomic) BOOL discardNextHypothesis;                          //@synthesize discardNextHypothesis=_discardNextHypothesis - In the implementation block
-(NSMutableArray *)pendingEdits;
-(void)_startStreamingAnimations;
-(id)initWithTextView:(id)arg1 ;
-(NSString *)lastHypothesis;
-(void)_displayLinkFired:(id)arg1 ;
-(void)setWords:(id)arg1 ;
-(BOOL)discardNextHypothesis;
-(void)_stopStreamingAnimation;
-(void)commitFinalResults;
-(double)streamingCharacterInsertionRate;
-(void)setStreamingCharacterInsertionRate:(double)arg1 ;
-(double)minDurationBetweenHypotheses;
-(void)setMinDurationBetweenHypotheses:(double)arg1 ;
-(void)setPreviousHypothesis:(NSString *)arg1 ;
-(void)setTargetHypothesis:(NSString *)arg1 ;
-(void)setPendingEdits:(NSMutableArray *)arg1 ;
-(void)setDiscardNextHypothesis:(BOOL)arg1 ;
-(void)setLastHypothesis:(NSString *)arg1 ;
-(NSString *)targetHypothesis;
-(NSString *)previousHypothesis;
-(void)setupToInsertResultForNewHypothesis:(id)arg1 ;
@end

