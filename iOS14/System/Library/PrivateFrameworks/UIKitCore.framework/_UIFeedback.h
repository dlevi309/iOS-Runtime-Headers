/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol UICoordinateSpace, _UIFeedbackPlayer;
@class _UIFeedbackParameters, _UIFeedbackPattern, NSDictionary, NSString, NSMutableArray, NSArray, Protocol, NSIndexSet;

@interface _UIFeedback : NSObject <NSCopying, NSSecureCoding> {

	BOOL _playing;
	float _position;
	_UIFeedbackParameters* _audioParameters;
	_UIFeedbackParameters* _hapticParameters;
	long long _audioOutputMode;
	long long _hapticOutputMode;
	_UIFeedbackPattern* _parentPattern;
	double _delay;
	NSDictionary* _debugDictionary;
	NSString* _name;
	NSString* _category;
	unsigned long long _eventToken;
	id<UICoordinateSpace> _coordinateSpace;
	id<_UIFeedbackPlayer> _player;

}

@property (readonly) NSMutableArray * systemSoundSources; 
@property (readonly) NSMutableArray * visualizerSources; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing;                                                                               //@synthesize playing=_playing - In the implementation block
@property (assign,setter=_setParentPattern:,getter=_parentPattern,nonatomic,__weak) _UIFeedbackPattern * parentPattern;                     //@synthesize parentPattern=_parentPattern - In the implementation block
@property (assign,setter=_setDelay:,getter=_delay,nonatomic) double delay;                                                                  //@synthesize delay=_delay - In the implementation block
@property (getter=_debugDictionary,nonatomic,readonly) NSDictionary * debugDictionary;                                                      //@synthesize debugDictionary=_debugDictionary - In the implementation block
@property (getter=_effectiveFeedbackData,nonatomic,readonly) NSArray * effectiveFeedbackData; 
@property (setter=_setName:,getter=_name,nonatomic,copy) NSString * name;                                                                   //@synthesize name=_name - In the implementation block
@property (getter=_playableProtocol,nonatomic,readonly) Protocol * playableProtocol; 
@property (setter=_setCategory:,getter=_category,nonatomic,retain) NSString * category;                                                     //@synthesize category=_category - In the implementation block
@property (getter=_effectiveFeedbackTypes,nonatomic,readonly) unsigned long long effectiveFeedbackTypes; 
@property (getter=_effectiveEnabledFeedbackTypes,nonatomic,readonly) unsigned long long effectiveEnabledFeedbackTypes; 
@property (getter=_effectivePlayableFeedbackTypes,nonatomic,readonly) unsigned long long effectivePlayableFeedbackTypes; 
@property (getter=_effectiveEventType,nonatomic,readonly) unsigned long long effectiveEventType; 
@property (getter=_effectiveSystemSoundID,nonatomic,readonly) unsigned effectiveSystemSoundID; 
@property (getter=_effectiveDuration,nonatomic,readonly) double effectiveDuration; 
@property (getter=_effectiveDelay,nonatomic,readonly) double effectiveDelay; 
@property (getter=_individualFeedbacks,nonatomic,readonly) NSArray * individualFeedbacks; 
@property (getter=_allEventTypes,nonatomic,readonly) NSIndexSet * allEventTypes; 
@property (getter=_allSystemSoundIDs,nonatomic,readonly) NSIndexSet * allSystemSoundIDs; 
@property (assign,setter=_setEventToken:,getter=_eventToken,nonatomic) unsigned long long eventToken;                                       //@synthesize eventToken=_eventToken - In the implementation block
@property (assign,setter=_setCoordinateSpace:,getter=_coordinateSpace,nonatomic,__weak) id<UICoordinateSpace> coordinateSpace;              //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (setter=_setPlayer:,getter=_player,nonatomic,retain) id<_UIFeedbackPlayer> player;                                                //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) _UIFeedbackParameters * audioParameters;                                                                     //@synthesize audioParameters=_audioParameters - In the implementation block
@property (nonatomic,readonly) _UIFeedbackParameters * hapticParameters;                                                                    //@synthesize hapticParameters=_hapticParameters - In the implementation block
@property (assign,nonatomic) long long audioOutputMode;                                                                                     //@synthesize audioOutputMode=_audioOutputMode - In the implementation block
@property (assign,nonatomic) long long hapticOutputMode;                                                                                    //@synthesize hapticOutputMode=_hapticOutputMode - In the implementation block
@property (assign,nonatomic) float position;                                                                                                //@synthesize position=_position - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)type;
+(Class)classForType:(id)arg1 ;
+(Class)_parametersClass;
+(id)feedbackWithDictionaryRepresentation:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(float)position;
-(void)_setName:(id)arg1 ;
-(BOOL)isPlaying;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSMutableArray *)systemSoundSources;
-(NSMutableArray *)visualizerSources;
-(void)play;
-(_UIFeedbackParameters *)audioParameters;
-(void)stop;
-(double)_delay;
-(id)_name;
-(_UIFeedbackParameters *)hapticParameters;
-(id)description;
-(id)_category;
-(void)_setDelay:(double)arg1 ;
-(void)setPosition:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setPlayer:(id)arg1 ;
-(unsigned long long)_eventToken;
-(void)_setCoordinateSpace:(id)arg1 ;
-(unsigned long long)_effectiveEventType;
-(void)setHapticOutputMode:(long long)arg1 ;
-(long long)hapticOutputMode;
-(void)setAudioOutputMode:(long long)arg1 ;
-(long long)audioOutputMode;
-(double)_effectiveDelay;
-(void)_setCategory:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)_effectiveDuration;
-(id)_allEventTypes;
-(id)_individualFeedbacks;
-(id)_debugDictionary;
-(unsigned long long)_effectiveEnabledFeedbackTypes;
-(void)_setEventToken:(unsigned long long)arg1 ;
-(unsigned long long)_effectivePlayableFeedbackTypes;
-(void)_playedAtTime:(double)arg1 engine:(id)arg2 ;
-(id)_coordinateSpace;
-(id)_playableProtocol;
-(unsigned long long)_effectiveFeedbackTypes;
-(id)_allSystemSoundIDs;
-(id)_effectiveFeedbackData;
-(void)_setParentPattern:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_player;
-(unsigned)_effectiveSystemSoundID;
-(id)_parentPattern;
@end

