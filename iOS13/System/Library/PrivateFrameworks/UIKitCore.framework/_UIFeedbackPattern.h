/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedback.h>
#import <UIKitCore/_UIFeedbackDiscretePlayable.h>
#import <UIKitCore/_UIFeedbackContinuousPlayable.h>

@class NSMutableArray, NSTimer, NSString;

@interface _UIFeedbackPattern : _UIFeedback <_UIFeedbackDiscretePlayable, _UIFeedbackContinuousPlayable> {

	BOOL _highPriority;
	BOOL _isRepeating;
	double _duration;
	NSMutableArray* _feedbacks;
	NSTimer* _repeatTimer;

}

@property (nonatomic,retain) NSMutableArray * feedbacks;                             //@synthesize feedbacks=_feedbacks - In the implementation block
@property (nonatomic,readonly) BOOL isRepeating;                                     //@synthesize isRepeating=_isRepeating - In the implementation block
@property (nonatomic,retain) NSTimer * repeatTimer;                                  //@synthesize repeatTimer=_repeatTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isHighPriority,nonatomic,readonly) BOOL highPriority;              //@synthesize highPriority=_highPriority - In the implementation block
@property (assign,nonatomic) double duration;                                        //@synthesize duration=_duration - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
+(id)type;
+(BOOL)supportsSecureCoding;
+(id)feedbackPattern;
+(Class)_parametersClass;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)stop;
-(id)dictionaryRepresentation;
-(double)duration;
-(void)setPosition:(float)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)play;
-(void)addFeedback:(id)arg1 atTime:(double)arg2 ;
-(NSMutableArray *)feedbacks;
-(void)setFeedbacks:(NSMutableArray *)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned long long)_effectivePlayableFeedbackTypes;
-(id)_debugDictionary;
-(id)_individualFeedbacks;
-(id)_playableProtocol;
-(id)_allEventTypes;
-(id)_allSystemSoundIDs;
-(BOOL)isPlaying;
-(BOOL)isHighPriority;
-(void)_playPattern;
-(void)setRepeatTimer:(NSTimer *)arg1 ;
-(BOOL)isRepeating;
-(NSTimer *)repeatTimer;
@end

