/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <libobjc.A.dylib/AFUIDebugControllerDelegate.h>
#import <libobjc.A.dylib/AFUIInternalDebugControllerDelegate.h>
#import <libobjc.A.dylib/AFUIBugReportPresenting.h>

@protocol AFUIInternalDebugControlling, AFUIDebugControlling, AFUIBugReportPresentingDelegate;
@class UIViewController, UIAlertController;

@interface AFUIBugReportPresenter : NSObject <AFUIDebugControllerDelegate, AFUIInternalDebugControllerDelegate, AFUIBugReportPresenting> {

	UIViewController*<AFUIInternalDebugControlling> _internalDebugController;
	id<AFUIDebugControlling> _debugController;
	id<AFUIBugReportPresentingDelegate> _delegate;
	UIAlertController* _presentedAlertController;

}

@property (setter=_setPresentedAlertController:,nonatomic,retain) UIAlertController * presentedAlertController;              //@synthesize presentedAlertController=_presentedAlertController - In the implementation block
@property (__weak) id<AFUIBugReportPresentingDelegate> delegate;                                                             //@synthesize delegate=_delegate - In the implementation block
-(id<AFUIBugReportPresentingDelegate>)delegate;
-(double)_logTime;
-(void)setDelegate:(id<AFUIBugReportPresentingDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)dismiss;
-(BOOL)hasContentAtPoint:(CGPoint)arg1 ;
-(void)didReceiveReportBugAction;
-(void)didReceiveBugButtonLongPress;
-(void)_requestToPresentDebugController:(id)arg1 ;
-(id)_alertControllerWithActionTypes:(id)arg1 ;
-(void)_requestToPresentAlertController:(id)arg1 ;
-(void)_dismissAlertControllerAnimated:(BOOL)arg1 ;
-(void)_debugControllerPresentationWillStart;
-(void)_captureViewHierarchyDescriptionForController:(id)arg1 ;
-(id)_lastUserTextFromConversation:(id)arg1 ;
-(id)_conversationDataFromConversation:(id)arg1 ;
-(void)_debugControllerPresentationDidEnd;
-(void)_requestDeviceUnlockWithSuccessCompletion:(/*^block*/id)arg1 withErrorCompletion:(/*^block*/id)arg2 ;
-(void)_setPresentedAlertController:(id)arg1 ;
-(id)_actionForAlertAction:(long long)arg1 ;
-(id)_actionTitleForAlertAction:(long long)arg1 ;
-(long long)_actionStyleForAlertAction:(long long)arg1 ;
-(void)_actionClickedForAction:(id)arg1 withActionType:(long long)arg2 ;
-(void)_requestToOpenURL:(id)arg1 ;
-(void)_requestToPresentInternalDebugController:(id)arg1 ;
-(id)_confirmationAlertControllerWithTitle:(id)arg1 onConfirmation:(/*^block*/id)arg2 ;
-(void)_dismissInternalDebugController;
-(void)debugController:(id)arg1 stateDidChangeWithAddViews:(id)arg2 ;
-(void)debugController:(id)arg1 requestsPermissionToScreenshot:(/*^block*/id)arg2 ;
-(void)debugController:(id)arg1 requestsScreenShotWithCompletion:(/*^block*/id)arg2 ;
-(void)debugController:(id)arg1 openURL:(id)arg2 ;
-(id)debugControllerRequestsBugReportPrefixForTitle:(id)arg1 ;
-(id)debugControllerRequestsBugReportKeywordIdentifiers:(id)arg1 ;
-(void)internalDebugControllerWantsDismissViewController;
-(UIAlertController *)presentedAlertController;
@end

