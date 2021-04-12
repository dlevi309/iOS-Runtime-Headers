/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIRepeatedActionDelegate;
@class NSInvocation, NSTimer, NSObject;

@interface UIRepeatedAction : NSObject {

	BOOL _didCompletePreInvocationDelay;
	BOOL _didCompleteInvocationDelay;
	BOOL _disableRepeat;
	BOOL _skipInitialFire;
	double _preInvocationDelay;
	double _invocationDelay;
	double _repeatedDelay;
	NSInvocation* _invocation;
	id _invocationArgument;
	NSTimer* _timer;
	NSObject*<UIRepeatedActionDelegate> _delegate;

}

@property (nonatomic,retain) NSInvocation * invocation;                                        //@synthesize invocation=_invocation - In the implementation block
@property (nonatomic,retain) id invocationArgument;                                            //@synthesize invocationArgument=_invocationArgument - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                  //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) double preInvocationDelay;                                        //@synthesize preInvocationDelay=_preInvocationDelay - In the implementation block
@property (assign,nonatomic) double invocationDelay;                                           //@synthesize invocationDelay=_invocationDelay - In the implementation block
@property (assign,nonatomic) double repeatedDelay;                                             //@synthesize repeatedDelay=_repeatedDelay - In the implementation block
@property (assign,nonatomic) BOOL disableRepeat;                                               //@synthesize disableRepeat=_disableRepeat - In the implementation block
@property (assign,nonatomic) BOOL skipInitialFire;                                             //@synthesize skipInitialFire=_skipInitialFire - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<UIRepeatedActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_invocationForTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
+(id)actionWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(NSObject*<UIRepeatedActionDelegate>)delegate;
-(void)setDelegate:(NSObject*<UIRepeatedActionDelegate>)arg1 ;
-(BOOL)invoke;
-(id)initWithInvocation:(id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(NSInvocation *)invocation;
-(void)reset;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)schedule;
-(void)setDisableRepeat:(BOOL)arg1 ;
-(void)scheduleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)setInvocationDelay:(double)arg1 ;
-(void)setRepeatedDelay:(double)arg1 ;
-(void)setSkipInitialFire:(BOOL)arg1 ;
-(void)setInvocationArgument:(id)arg1 ;
-(void)setInvocation:(NSInvocation *)arg1 ;
-(double)preInvocationDelay;
-(id)invocationArgument;
-(void)_adjustInvocationForPhase:(unsigned long long)arg1 ;
-(BOOL)disableRepeat;
-(double)repeatedDelay;
-(void)_repeatedTimerFire;
-(double)invocationDelay;
-(void)_invocationTimerFire;
-(void)_preInvocationTimerFire;
-(void)setPreInvocationDelay:(double)arg1 ;
-(BOOL)skipInitialFire;
@end

