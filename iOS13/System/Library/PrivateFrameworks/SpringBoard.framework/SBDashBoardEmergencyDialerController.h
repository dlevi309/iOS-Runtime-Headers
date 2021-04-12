/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/CSEmergencyCalling.h>
#import <libobjc.A.dylib/SBLockScreenCallHandling.h>

@class CSCoverSheetViewController, SBDashBoardEmergencyDialerViewController, NSString;

@interface SBDashBoardEmergencyDialerController : NSObject <PTSettingsKeyObserver, CSEmergencyCalling, SBLockScreenCallHandling> {

	CSCoverSheetViewController* _coverSheetViewController;
	SBDashBoardEmergencyDialerViewController* _emergencyDialerViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)isMakingEmergencyCall;
-(void)launchEmergencyDialer;
-(id)initWithCoverSheetViewController:(id)arg1 ;
-(void)launchEmergencyDialerAnimated:(BOOL)arg1 ;
-(void)exitEmergencyDialerAnimated:(BOOL)arg1 ;
-(void)launchInCallAlert;
-(void)emergencyDialerExitedWithError:(id)arg1 ;
@end

