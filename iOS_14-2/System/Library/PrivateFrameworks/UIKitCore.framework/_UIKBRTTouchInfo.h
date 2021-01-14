/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIKBRTObject.h>

@protocol OS_dispatch_queue;
@class _UIKBRTTimerBlock, NSObject;

@interface _UIKBRTTouchInfo : _UIKBRTObject {

	char _currentTouchState;
	char _preRuleTouchState;
	double _originalTimestamp;
	double _maximumRadius;
	double _currentTimestamp;
	double _originalZGradient;
	double _currentZGradient;
	id _touchIdentifier;
	_UIKBRTTimerBlock* _timer;
	NSObject*<OS_dispatch_queue> _timerQueue;
	CGPoint _originalTouchPoint;
	CGPoint _currentTouchPoint;

}

@property (nonatomic,readonly) _UIKBRTTimerBlock * timer;                            //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> timerQueue;              //@synthesize timerQueue=_timerQueue - In the implementation block
@property (nonatomic,readonly) _UIKBRTTouchInfo * previousTouch; 
@property (nonatomic,readonly) _UIKBRTTouchInfo * nextTouch; 
@property (nonatomic,readonly) double originalTimestamp;                             //@synthesize originalTimestamp=_originalTimestamp - In the implementation block
@property (nonatomic,readonly) CGPoint originalTouchPoint;                           //@synthesize originalTouchPoint=_originalTouchPoint - In the implementation block
@property (nonatomic,readonly) CGPoint currentTouchPoint;                            //@synthesize currentTouchPoint=_currentTouchPoint - In the implementation block
@property (nonatomic,readonly) double maximumRadius;                                 //@synthesize maximumRadius=_maximumRadius - In the implementation block
@property (nonatomic,readonly) double currentTimestamp;                              //@synthesize currentTimestamp=_currentTimestamp - In the implementation block
@property (nonatomic,readonly) double originalZGradient;                             //@synthesize originalZGradient=_originalZGradient - In the implementation block
@property (nonatomic,readonly) double currentZGradient;                              //@synthesize currentZGradient=_currentZGradient - In the implementation block
@property (assign,nonatomic) char currentTouchState;                                 //@synthesize currentTouchState=_currentTouchState - In the implementation block
@property (assign,nonatomic) char preRuleTouchState;                                 //@synthesize preRuleTouchState=_preRuleTouchState - In the implementation block
@property (nonatomic,readonly) id touchIdentifier;                                   //@synthesize touchIdentifier=_touchIdentifier - In the implementation block
+(void)setTouchInfo:(id)arg1 forIdentifier:(id)arg2 ;
+(id)touchDict;
+(id)createTouchInfoForTouch:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(BOOL)arg3 ;
+(id)touchInfoForTouch:(id)arg1 withIdentifier:(id)arg2 ;
-(_UIKBRTTimerBlock *)timer;
-(id)touchIdentifier;
-(void)fireTimerNow;
-(id)initWithTouch:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(BOOL)arg3 ;
-(double)originalZGradient;
-(double)currentZGradient;
-(_UIKBRTTouchInfo *)nextTouch;
-(CGPoint)originalTouchPoint;
-(void)cleanup;
-(CGPoint)currentTouchPoint;
-(NSObject*<OS_dispatch_queue>)timerQueue;
-(void)updateTouch:(id)arg1 ;
-(void)invalidateTimer;
-(char)currentTouchState;
-(void)setCurrentTouchState:(char)arg1 ;
-(char)preRuleTouchState;
-(void)setPreRuleTouchState:(char)arg1 ;
-(double)originalTimestamp;
-(double)currentTimestamp;
-(_UIKBRTTouchInfo *)previousTouch;
-(void)dealloc;
-(id)setOfTouchesToIgnoreWhenSettingTouchInfo:(id)arg1 toState:(char)arg2 ;
-(void)setTimerWithTimeInterval:(double)arg1 onQueue:(id)arg2 do:(/*^block*/id)arg3 ;
-(double)maximumRadius;
-(BOOL)willChangeTouchInfo:(id)arg1 toState:(char)arg2 ;
@end

