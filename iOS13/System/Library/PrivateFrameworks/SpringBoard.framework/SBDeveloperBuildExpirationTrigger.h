/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBMainDisplayWorkspaceAppInteractionEventSourceObserving.h>

@class SBAlertItemsController, SBMainDisplayWorkspaceAppInteractionEventSource, NSDate, NSString;

@interface SBDeveloperBuildExpirationTrigger : NSObject <SBMainDisplayWorkspaceAppInteractionEventSourceObserving> {

	SBAlertItemsController* _alertItemsController;
	SBMainDisplayWorkspaceAppInteractionEventSource* _eventSource;
	NSDate* _expirationDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithAlertItemsController:(id)arg1 eventSource:(id)arg2 ;
-(void)eventSource:(id)arg1 didFinishTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5 ;
-(void)_coverSheetDidDismiss:(id)arg1 ;
-(id)_initWithAlertItemsController:(id)arg1 eventSource:(id)arg2 expirationDate:(id)arg3 ;
-(void)showDeveloperBuildExpirationAlertIfNecessaryFromLockscreen:(BOOL)arg1 toLauncher:(BOOL)arg2 ;
@end

