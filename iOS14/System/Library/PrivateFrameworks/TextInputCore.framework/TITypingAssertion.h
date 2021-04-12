/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSTimer *)timer;
-(void)setActive:(BOOL)arg1 ;
-(void)touchWithReason:(long long)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(id)init;
-(void)touchWithDuration:(double)arg1 reason:(long long)arg2 ;
-(id)__restingPathIndices;
-(BOOL)isActive;
-(void)restTouchEndWithPathIndex:(long long)arg1 ;
-(void)timerFired:(id)arg1 ;
-(PSPointerClientController *)pointerClientController;
-(void)restTouchStartWithPathIndex:(long long)arg1 ;
-(void)_sbsSetTypingActive:(BOOL)arg1 ;
-(void)setPointerClientController:(PSPointerClientController *)arg1 ;
-(void)restResetTouches;
-(void)dealloc;
@end

