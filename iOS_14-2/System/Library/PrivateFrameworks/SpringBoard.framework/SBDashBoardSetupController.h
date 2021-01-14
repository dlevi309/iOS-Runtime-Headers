/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(void)conformsToCSEventHandling;
-(void)_addOrRemoveSetupViewIfNecessaryAnimated:(BOOL)arg1 ;
-(void)conformsToCSExternalBehaviorProviding;
-(id)init;
-(BOOL)handleEvent:(id)arg1 ;
-(long long)notificationBehavior;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(void)conformsToCSBehaviorProviding;
-(long long)proximityDetectionMode;
-(void)_configureForCurrentSetupMode;
-(NSString *)coverSheetIdentifier;
-(long long)participantState;
-(void)_clearSetupViewIfNecessaryAnimated:(BOOL)arg1 ;
-(void)_setupModeChanged:(id)arg1 ;
-(id)initWithCoverSheetViewController:(id)arg1 setupManager:(id)arg2 ;
-(long long)scrollingStrategy;
-(unsigned long long)restrictedCapabilities;
-(void)dealloc;
@end

