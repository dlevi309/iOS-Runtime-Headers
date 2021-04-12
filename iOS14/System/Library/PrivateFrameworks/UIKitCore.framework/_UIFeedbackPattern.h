/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (getter=isHighPriority,nonatomic,readonly) BOOL highPriority;              //@synthesize highPriority=_highPriority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double duration;                                        //@synthesize duration=_duration - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
+(BOOL)supportsSecureCoding;
+(id)type;
+(id)feedbackPattern;
+(Class)_parametersClass;
-(id)dictionaryRepresentation;
-(void)setFeedbacks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)feedbacks;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)isPlaying;
-(BOOL)isRepeating;
-(void)setDuration:(double)arg1 ;
-(void)play;
-(void)stop;
-(void)setPosition:(float)arg1 ;
-(NSTimer *)repeatTimer;
-(void)addFeedback:(id)arg1 atTime:(double)arg2 ;
-(void)_playPattern;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_allEventTypes;
-(id)_individualFeedbacks;
-(id)_debugDictionary;
-(unsigned long long)_effectivePlayableFeedbackTypes;
-(id)_playableProtocol;
-(id)_allSystemSoundIDs;
-(void)setRepeatTimer:(NSTimer *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isHighPriority;
@end

