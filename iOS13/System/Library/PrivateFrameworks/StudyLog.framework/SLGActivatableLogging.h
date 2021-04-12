/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
*/


@protocol SLGActivatableLogging <SLGLogging>
@property (nonatomic,copy) id activationHandler; 
@property (nonatomic,copy) id deactivationHandler; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@required
-(void)invalidate;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1;
-(void)setActivationHandler:(/*^block*/id)arg1;
-(id)activationHandler;
-(id)deactivationHandler;
-(void)setDeactivationHandler:(/*^block*/id)arg1;

@end

