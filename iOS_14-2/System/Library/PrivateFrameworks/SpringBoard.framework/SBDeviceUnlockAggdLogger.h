/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)conformsToCSEventHandling;
-(id)init;
-(BOOL)handleEvent:(id)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(NSString *)coverSheetIdentifier;
-(void)logUserResetIdleTimer;
-(long long)participantState;
-(void)_setObserveDashBoardEvents:(BOOL)arg1 ;
-(void)logOrientationAndAccessoryStateForPrefix:(id)arg1 ;
-(void)logDeviceWake;
-(void)logIdleTimerScreenDimWarning;
-(BOOL)_observeDashBoardEvents;
-(void)logDeviceUnlock;
-(void)dealloc;
@end

