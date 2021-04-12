/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
*/

#import <StudyLog/StudyLog-Structs.h>
#import <libobjc.A.dylib/SLGActivatableLogging.h>

@protocol SLGActivatableLogging, OS_dispatch_source;
@class NSObject, NSString;

@interface SLGTimedLogger : NSObject <SLGActivatableLogging> {

	id<SLGActivatableLogging> _logger;
	double _duration;
	NSObject*<OS_dispatch_source> _timer;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id activationHandler; 
@property (nonatomic,copy) id deactivationHandler; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
-(void)invalidate;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 ;
-(void)_startTimer;
-(void)_stopTimer;
-(void)setActivationHandler:(id)arg1 ;
-(id)activationHandler;
-(id)deactivationHandler;
-(void)setDeactivationHandler:(id)arg1 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 tags:(/*^block*/id)arg3 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 tags:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithLogger:(id)arg1 duration:(double)arg2 ;
@end

