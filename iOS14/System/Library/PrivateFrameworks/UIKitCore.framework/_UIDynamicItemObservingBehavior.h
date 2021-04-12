/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicItemBehavior.h>

@interface _UIDynamicItemObservingBehavior : UIDynamicItemBehavior {

	BOOL _enabled;
	double _completionHandlerInvocationDelay;
	/*^block*/id _completionHandler;
	long long _frameCount;
	CGVector _targetVelocity;

}

@property (assign,nonatomic) BOOL enabled;                                         //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long frameCount;                                 //@synthesize frameCount=_frameCount - In the implementation block
@property (assign,nonatomic) CGVector targetVelocity;                              //@synthesize targetVelocity=_targetVelocity - In the implementation block
@property (assign,nonatomic) double completionHandlerInvocationDelay;              //@synthesize completionHandlerInvocationDelay=_completionHandlerInvocationDelay - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
-(long long)frameCount;
-(BOOL)enabled;
-(void)setTargetVelocity:(CGVector)arg1 ;
-(void)setFrameCount:(long long)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)completionHandler;
-(double)completionHandlerInvocationDelay;
-(void)setCompletionHandlerInvocationDelay:(double)arg1 ;
-(void)willMoveToAnimator:(id)arg1 ;
-(CGVector)targetVelocity;
-(void)cancel;
@end

