/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
*/

#import <StudyLog/StudyLog-Structs.h>
#import <libobjc.A.dylib/SLGActivatableLogging.h>

@protocol SLGActivatableLogging;
@class NSMutableSet, NSMutableDictionary, NSString;

@interface SLGNotificationActivatedLogger : NSObject <SLGActivatableLogging> {

	id<SLGActivatableLogging> _logger;
	os_unfair_lock_s _lock;
	NSMutableSet* _activeReasons;
	NSMutableDictionary* _registrationsByReason;

}

@property (nonatomic,copy) id activationHandler; 
@property (nonatomic,copy) id deactivationHandler; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setActive:(BOOL)arg1 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 tags:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isActive;
-(id)initWithLogger:(id)arg1 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 tags:(/*^block*/id)arg3 ;
-(void)setActivationHandler:(id)arg1 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidate;
-(BOOL)isEnabled;
-(id)activationHandler;
-(id)deactivationHandler;
-(void)setDeactivationHandler:(id)arg1 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 ;
-(void)addBeginNotification:(id)arg1 endNotification:(id)arg2 ;
-(void)_beginLoggingForReason:(id)arg1 ;
-(void)_endLoggingForReason:(id)arg1 ;
-(void)_cancelRegistrations;
@end

