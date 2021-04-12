/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/CMMotionAlarmDelegateProtocol.h>

@protocol SBFMotionAlarmDelegate;
@class NSMutableArray, CMMotionAlarmManager, NSString;

@interface SBFMotionAlarmController : NSObject <CMMotionAlarmDelegateProtocol> {

	id<SBFMotionAlarmDelegate> _delegate;
	NSMutableArray* _observers;
	CMMotionAlarmManager* _motionAlarmManager;

}

@property (nonatomic,retain) NSMutableArray * observers;                              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) CMMotionAlarmManager * motionAlarmManager;               //@synthesize motionAlarmManager=_motionAlarmManager - In the implementation block
@property (assign,nonatomic,__weak) id<SBFMotionAlarmDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)observers;
-(id)init;
-(id<SBFMotionAlarmDelegate>)delegate;
-(void)alarmDidRegister:(id)arg1 error:(id)arg2 ;
-(void)alarmDidUnregister:(id)arg1 error:(id)arg2 ;
-(void)remoteAppLaunchedWithResult:(unsigned)arg1 error:(id)arg2 ;
-(void)alarmDidFire:(id)arg1 error:(id)arg2 ;
-(void)_unregisterMotionAlarm;
-(void)_registerMotionAlarm;
-(void)registerMotionAlarm;
-(void)unregisterMotionAlarm;
-(CMMotionAlarmManager *)motionAlarmManager;
-(void)setMotionAlarmManager:(CMMotionAlarmManager *)arg1 ;
-(void)setDelegate:(id<SBFMotionAlarmDelegate>)arg1 ;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(void)_notifyDelegate;
-(void)dealloc;
@end

