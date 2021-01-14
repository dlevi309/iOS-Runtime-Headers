/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)invoke;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSObject*<UIRepeatedActionDelegate>)delegate;
-(NSInvocation *)invocation;
-(void)setDelegate:(NSObject*<UIRepeatedActionDelegate>)arg1 ;
-(void)setInvocation:(NSInvocation *)arg1 ;
-(void)schedule;
-(id)initWithInvocation:(id)arg1 ;
-(void)reset;
-(void)invalidate;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)setDisableRepeat:(BOOL)arg1 ;
-(void)setRepeatedDelay:(double)arg1 ;
-(void)scheduleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)setInvocationDelay:(double)arg1 ;
-(void)setSkipInitialFire:(BOOL)arg1 ;
-(void)dealloc;
-(double)preInvocationDelay;
-(void)setInvocationArgument:(id)arg1 ;
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

