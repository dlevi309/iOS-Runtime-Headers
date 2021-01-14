/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)exitEmergencyDialerAnimated:(BOOL)arg1 ;
-(void)emergencyDialerExitedWithError:(id)arg1 ;
-(void)launchEmergencyDialer;
-(id)initWithCoverSheetViewController:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)isMakingEmergencyCall;
-(void)launchEmergencyDialerAnimated:(BOOL)arg1 ;
-(void)dealloc;
@end

