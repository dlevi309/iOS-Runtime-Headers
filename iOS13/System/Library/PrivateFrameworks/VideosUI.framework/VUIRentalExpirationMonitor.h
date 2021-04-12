/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class TVPStateMachine, NSDate, NSTimer;

@interface VUIRentalExpirationMonitor : NSObject {

	TVPStateMachine* _stateMachine;
	NSDate* _dateOfLastRentalExpirationHandling;
	NSTimer* _earliestExpirationTimer;

}

@property (nonatomic,retain) TVPStateMachine * stateMachine;                           //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) NSDate * dateOfLastRentalExpirationHandling;              //@synthesize dateOfLastRentalExpirationHandling=_dateOfLastRentalExpirationHandling - In the implementation block
@property (nonatomic,retain) NSTimer * earliestExpirationTimer;                        //@synthesize earliestExpirationTimer=_earliestExpirationTimer - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)startMonitoring;
-(TVPStateMachine *)stateMachine;
-(void)setStateMachine:(TVPStateMachine *)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_libraryContentsDidChange:(id)arg1 ;
-(void)_registerStateMachineHandlers;
-(void)_isPlaybackUIBeingShownDidChange:(id)arg1 ;
-(void)setEarliestExpirationTimer:(NSTimer *)arg1 ;
-(NSDate *)dateOfLastRentalExpirationHandling;
-(void)setDateOfLastRentalExpirationHandling:(NSDate *)arg1 ;
-(NSTimer *)earliestExpirationTimer;
-(void)_expirationTimerDidFire:(id)arg1 ;
@end

