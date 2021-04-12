/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSMutableSet, NSTimer, PSPointerClientController;

@interface TITypingAssertion : NSObject {

	BOOL _active;
	NSMutableSet* _restingPathIndices;
	NSTimer* _timer;
	PSPointerClientController* _pointerClientController;

}

@property (nonatomic,retain) NSTimer * timer;                                                  //@synthesize timer=_timer - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (nonatomic,retain) PSPointerClientController * pointerClientController;              //@synthesize pointerClientController=_pointerClientController - In the implementation block
+(id)sharedTypingAssertion;
-(id)init;
-(void)dealloc;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(PSPointerClientController *)pointerClientController;
-(void)setPointerClientController:(PSPointerClientController *)arg1 ;
-(void)timerFired:(id)arg1 ;
-(void)restResetTouches;
-(void)restTouchStartWithPathIndex:(long long)arg1 ;
-(void)restTouchEndWithPathIndex:(long long)arg1 ;
-(void)_sbsSetTypingActive:(BOOL)arg1 ;
-(void)touchWithDuration:(double)arg1 reason:(long long)arg2 ;
-(void)touchWithReason:(long long)arg1 ;
-(id)__restingPathIndices;
@end

