/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFeedbackPlayer_Internal.h>

@protocol OS_dispatch_queue, CHHapticPatternPlayer;
@class NSObject, _UIFeedbackCoreHapticsEngine;

@interface _UIFeedbackCoreHapticsPlayer : NSObject <_UIFeedbackPlayer_Internal> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	/*^block*/id _invalidationBlock;
	_UIFeedbackCoreHapticsEngine* _hapticEngine;
	id<CHHapticPatternPlayer> _coreHapticsPlayer;

}

@property (assign,nonatomic,__weak) _UIFeedbackCoreHapticsEngine * hapticEngine;              //@synthesize hapticEngine=_hapticEngine - In the implementation block
@property (nonatomic,retain) id<CHHapticPatternPlayer> coreHapticsPlayer;                     //@synthesize coreHapticsPlayer=_coreHapticsPlayer - In the implementation block
@property (nonatomic,copy) id invalidationBlock;                                              //@synthesize invalidationBlock=_invalidationBlock - In the implementation block
-(id)_internal_createEventsForFeedbackData:(id)arg1 engine:(id)arg2 parameters:(id*)arg3 parameterCurves:(id*)arg4 ;
-(id)_internal_createEventsForFileFeedbackData:(id)arg1 engine:(id)arg2 parameters:(id*)arg3 parameterCurves:(id*)arg4 ;
-(id)_internal_createFixedParameterForParameters:(id)arg1 withKey:(id)arg2 forEventType:(id)arg3 ;
-(void)setInvalidationBlock:(id)arg1 ;
-(id)_internal_createEventsForLegacyFeedbackData:(id)arg1 ;
-(id<CHHapticPatternPlayer>)coreHapticsPlayer;
-(void)setCoreHapticsPlayer:(id<CHHapticPatternPlayer>)arg1 ;
-(void)_internal_updateValueForParameters:(id)arg1 withKey:(id)arg2 ;
-(id)_internal_createPatternForFeedbackData:(id)arg1 feedback:(id)arg2 engine:(id)arg3 ;
-(id)_internal_createPlayerWithPattern:(id)arg1 ;
-(void)setHapticEngine:(_UIFeedbackCoreHapticsEngine *)arg1 ;
-(void)_internal_stopFeedbackData:(id)arg1 forFeedback:(id)arg2 ;
-(id)invalidationBlock;
-(void)_playFeedback:(id)arg1 atTime:(double)arg2 ;
-(BOOL)_internal_playFeedbackData:(id)arg1 forFeedback:(id)arg2 atTime:(double)arg3 ;
-(void)_updateValueForParameters:(id)arg1 withKey:(id)arg2 ;
-(id)initWithEngine:(id)arg1 ;
-(void)_stopFeedback:(id)arg1 ;
-(_UIFeedbackCoreHapticsEngine *)hapticEngine;
@end

