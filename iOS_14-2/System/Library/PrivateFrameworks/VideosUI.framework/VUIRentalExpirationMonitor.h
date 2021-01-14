/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol OS_dispatch_queue;
@class TVPStateMachine, NSDate, NSTimer, NSObject;

@interface VUIRentalExpirationMonitor : NSObject {

	TVPStateMachine* _stateMachine;
	NSDate* _dateOfLastRentalExpirationHandling;
	NSTimer* _earliestExpirationTimer;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) TVPStateMachine * stateMachine;                           //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) NSDate * dateOfLastRentalExpirationHandling;              //@synthesize dateOfLastRentalExpirationHandling=_dateOfLastRentalExpirationHandling - In the implementation block
@property (nonatomic,retain) NSTimer * earliestExpirationTimer;                        //@synthesize earliestExpirationTimer=_earliestExpirationTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                 //@synthesize serialQueue=_serialQueue - In the implementation block
+(id)sharedInstance;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)startMonitoring;
-(void)setStateMachine:(TVPStateMachine *)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(TVPStateMachine *)stateMachine;
-(void)_libraryContentsDidChange:(id)arg1 ;
-(void)dealloc;
-(void)_registerStateMachineHandlers;
-(void)_isPlaybackUIBeingShownDidChange:(id)arg1 ;
-(void)setEarliestExpirationTimer:(NSTimer *)arg1 ;
-(NSDate *)dateOfLastRentalExpirationHandling;
-(void)setDateOfLastRentalExpirationHandling:(NSDate *)arg1 ;
-(NSTimer *)earliestExpirationTimer;
-(void)_expirationTimerDidFire:(id)arg1 ;
@end

