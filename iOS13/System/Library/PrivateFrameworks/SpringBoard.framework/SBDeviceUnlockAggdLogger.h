/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSExternalEventHandling.h>

@class NSString;

@interface SBDeviceUnlockAggdLogger : NSObject <CSExternalEventHandling> {

	BOOL _observeDashBoardEvents;

}

@property (assign,setter=_setObserveDashBoardEvents:,getter=_observeDashBoardEvents,nonatomic) BOOL observeDashBoardEvents;              //@synthesize observeDashBoardEvents=_observeDashBoardEvents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(id)init;
-(void)dealloc;
-(BOOL)handleEvent:(id)arg1 ;
-(long long)participantState;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(NSString *)coverSheetIdentifier;
-(void)logOrientationAndAccessoryStateForPrefix:(id)arg1 ;
-(BOOL)_observeDashBoardEvents;
-(void)logDeviceWake;
-(void)logDeviceUnlock;
-(void)_setObserveDashBoardEvents:(BOOL)arg1 ;
-(void)logIdleTimerScreenDimWarning;
-(void)logUserResetIdleTimer;
@end

