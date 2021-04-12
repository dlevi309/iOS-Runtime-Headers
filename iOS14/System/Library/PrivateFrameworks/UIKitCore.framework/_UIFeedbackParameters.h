/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UIFeedback;

@interface _UIFeedbackParameters : NSObject <NSCopying> {

	float _volume;
	float _rate;
	float _transposition;
	float _attackTime;
	float _decayTime;
	float _releaseTime;
	_UIFeedback* _feedback;
	_UIFeedbackParameters* _parentParameters;

}

@property (assign,nonatomic,__weak) _UIFeedback * feedback;                                //@synthesize feedback=_feedback - In the implementation block
@property (assign,nonatomic,__weak) _UIFeedbackParameters * parentParameters;              //@synthesize parentParameters=_parentParameters - In the implementation block
@property (getter=_isAudio,nonatomic,readonly) BOOL audio; 
@property (getter=_effectiveVolume,nonatomic,readonly) float effectiveVolume; 
@property (assign,nonatomic) float volume;                                                 //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) float rate;                                                   //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float transposition;                                          //@synthesize transposition=_transposition - In the implementation block
@property (assign,nonatomic) float attackTime;                                             //@synthesize attackTime=_attackTime - In the implementation block
@property (assign,nonatomic) float decayTime;                                              //@synthesize decayTime=_decayTime - In the implementation block
@property (assign,nonatomic) float releaseTime;                                            //@synthesize releaseTime=_releaseTime - In the implementation block
+(id)parameters;
-(void)setFeedback:(_UIFeedback *)arg1 ;
-(id)dictionaryRepresentation;
-(float)_effectiveVolume;
-(_UIFeedback *)feedback;
-(float)decayTime;
-(void)setVolume:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)attackTime;
-(void)setTransposition:(float)arg1 ;
-(float)_effectiveValueForParameterWithKey:(id)arg1 ;
-(void)_updateParameterWithKey:(id)arg1 ;
-(float)rate;
-(void)setAttackTime:(float)arg1 ;
-(void)setParentParameters:(_UIFeedbackParameters *)arg1 ;
-(void)setReleaseTime:(float)arg1 ;
-(_UIFeedbackParameters *)parentParameters;
-(float)releaseTime;
-(BOOL)_isAudio;
-(float)volume;
-(id)initWithFeedback:(id)arg1 ;
-(float)transposition;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDecayTime:(float)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 feedback:(id)arg2 ;
@end

