/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithEngine:(id)arg1 ;
-(void)_stopFeedback:(id)arg1 ;
-(void)_updateValueForParameters:(id)arg1 withKey:(id)arg2 ;
-(void)setInvalidationBlock:(id)arg1 ;
-(_UIFeedbackCoreHapticsEngine *)hapticEngine;
-(id)_internal_createFixedParameterForParameters:(id)arg1 withKey:(id)arg2 forEventType:(id)arg3 ;
-(id)_internal_createEventForFeedbackData:(id)arg1 ;
-(void)_internal_updateValueForParameters:(id)arg1 withKey:(id)arg2 ;
-(id<CHHapticPatternPlayer>)coreHapticsPlayer;
-(BOOL)_internal_playFeedbackData:(id)arg1 forFeedback:(id)arg2 atTime:(double)arg3 ;
-(id)_internal_createPatternForFeedbackData:(id)arg1 feedback:(id)arg2 ;
-(id)_internal_createPlayerWithPattern:(id)arg1 ;
-(void)setCoreHapticsPlayer:(id<CHHapticPatternPlayer>)arg1 ;
-(void)_internal_stopFeedbackData:(id)arg1 forFeedback:(id)arg2 ;
-(void)_playFeedback:(id)arg1 atTime:(double)arg2 ;
-(id)invalidationBlock;
-(void)setHapticEngine:(_UIFeedbackCoreHapticsEngine *)arg1 ;
@end

