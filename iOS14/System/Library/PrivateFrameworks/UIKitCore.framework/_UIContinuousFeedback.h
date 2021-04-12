/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedback.h>
#import <UIKitCore/_UIFeedbackContinuousPlayable.h>

@class NSString;

@interface _UIContinuousFeedback : _UIFeedback <_UIFeedbackContinuousPlayable> {

	double _duration;
	long long _type;

}

@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)type;
+(id)continuousFeedbackForType:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)init;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(unsigned long long)_effectiveEventType;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)_effectiveDuration;
-(id)_debugDictionary;
-(void)_playedAtTime:(double)arg1 engine:(id)arg2 ;
-(id)_playableProtocol;
-(BOOL)isEqual:(id)arg1 ;
@end

