/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
*/


@protocol SLGActivatableLogging <SLGLogging>
@property (nonatomic,copy) id activationHandler; 
@property (nonatomic,copy) id deactivationHandler; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@required
-(void)setActive:(BOOL)arg1;
-(BOOL)isActive;
-(void)setActivationHandler:(/*^block*/id)arg1;
-(void)invalidate;
-(id)activationHandler;
-(id)deactivationHandler;
-(void)setDeactivationHandler:(/*^block*/id)arg1;

@end

