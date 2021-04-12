/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
+(id)type;
+(BOOL)supportsSecureCoding;
+(id)continuousFeedbackForType:(long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(unsigned long long)_effectiveEventType;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)_playedAtTime:(double)arg1 engine:(id)arg2 ;
-(id)_debugDictionary;
-(id)_playableProtocol;
@end

