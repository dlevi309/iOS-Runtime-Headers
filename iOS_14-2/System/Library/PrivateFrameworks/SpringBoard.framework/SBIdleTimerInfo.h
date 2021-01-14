/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBIdleTimerProviding, SBFIdleTimerBehaviorProviding;
@class NSString, SBIdleTimerProxy;

@interface SBIdleTimerInfo : NSObject {

	id<SBIdleTimerProviding> _provider;
	id<SBFIdleTimerBehaviorProviding> _behavior;
	NSString* _reason;
	SBIdleTimerProxy* _idleTimerProxy;

}

@property (nonatomic,__weak,readonly) id<SBIdleTimerProviding> provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) id<SBFIdleTimerBehaviorProviding> behavior;              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,copy) NSString * reason;                                         //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) SBIdleTimerProxy * idleTimerProxy;                       //@synthesize idleTimerProxy=_idleTimerProxy - In the implementation block
-(void)setBehavior:(id<SBFIdleTimerBehaviorProviding>)arg1 ;
-(SBIdleTimerProxy *)idleTimerProxy;
-(id<SBIdleTimerProviding>)provider;
-(id<SBFIdleTimerBehaviorProviding>)behavior;
-(void)setIdleTimerProxy:(SBIdleTimerProxy *)arg1 ;
-(id)initWithProvider:(id)arg1 behavior:(id)arg2 reason:(id)arg3 idleTimerProxy:(id)arg4 ;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
@end

