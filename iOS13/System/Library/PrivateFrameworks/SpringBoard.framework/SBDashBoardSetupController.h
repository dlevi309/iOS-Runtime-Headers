/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>
#import <libobjc.A.dylib/CSExternalEventHandling.h>

@class CSCoverSheetViewController, SBSetupManager, SBDashBoardSetupViewController, NSString;

@interface SBDashBoardSetupController : NSObject <CSExternalBehaviorProviding, CSExternalEventHandling> {

	CSCoverSheetViewController* _coverSheetViewController;
	SBSetupManager* _setupManager;
	SBDashBoardSetupViewController* _setupViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(id)init;
-(void)dealloc;
-(BOOL)handleEvent:(id)arg1 ;
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(long long)participantState;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(NSString *)coverSheetIdentifier;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;
-(void)_configureForCurrentSetupMode;
-(void)_setupModeChanged:(id)arg1 ;
-(void)_clearSetupViewIfNecessaryAnimated:(BOOL)arg1 ;
-(void)_addOrRemoveSetupViewIfNecessaryAnimated:(BOOL)arg1 ;
-(id)initWithCoverSheetViewController:(id)arg1 setupManager:(id)arg2 ;
@end

