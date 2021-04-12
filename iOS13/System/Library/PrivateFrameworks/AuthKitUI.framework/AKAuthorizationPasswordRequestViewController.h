/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AKAuthorizationPaneViewController.h>
#import <libobjc.A.dylib/AKAuthorizationSubPaneConfirmButtonDelegate.h>
#import <libobjc.A.dylib/AKAuthorizationPasswordAuthenticationDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/AKAuthorizationEditableDataSources.h>

@class AKTiburonPasswordUIReport, AKAuthorizationScopeChoices, AKAuthorizationPresentationContext, AKAuthorizationViewController, AKAuthorizationSubPaneConfirmButton, NSString;

@interface AKAuthorizationPasswordRequestViewController : AKAuthorizationPaneViewController <AKAuthorizationSubPaneConfirmButtonDelegate, AKAuthorizationPasswordAuthenticationDelegate, UITableViewDataSource, UITableViewDelegate, AKAuthorizationEditableDataSources> {

	AKTiburonPasswordUIReport* _analyticsReport;
	BOOL _editableScopeChoicesChanged;
	AKAuthorizationScopeChoices* _editableScopeChoices;
	AKAuthorizationPresentationContext* _presentationContext;
	AKAuthorizationViewController* _authorizationViewController;
	AKAuthorizationSubPaneConfirmButton* _confirmButton;

}

@property (nonatomic,retain) AKAuthorizationSubPaneConfirmButton * confirmButton;                             //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,readonly) AKAuthorizationPresentationContext * presentationContext;                      //@synthesize presentationContext=_presentationContext - In the implementation block
@property (assign,nonatomic,__weak) AKAuthorizationViewController * authorizationViewController;              //@synthesize authorizationViewController=_authorizationViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AKAuthorizationScopeChoices * editableScopeChoices;                            //@synthesize editableScopeChoices=_editableScopeChoices - In the implementation block
@property (assign,nonatomic) BOOL editableScopeChoicesChanged;                                                //@synthesize editableScopeChoicesChanged=_editableScopeChoicesChanged - In the implementation block
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(AKAuthorizationPresentationContext *)presentationContext;
-(id)_buttonText;
-(AKAuthorizationSubPaneConfirmButton *)confirmButton;
-(void)setConfirmButton:(AKAuthorizationSubPaneConfirmButton *)arg1 ;
-(AKAuthorizationScopeChoices *)editableScopeChoices;
-(id)_infoLabelText;
-(void)_addAuthorizationButtonToPaneContext:(id)arg1 ;
-(BOOL)editableScopeChoicesChanged;
-(void)setEditableScopeChoicesChanged:(BOOL)arg1 ;
-(void)_paneDelegate_authorizationPaneViewControllerDismissWithAuthorization:(id)arg1 error:(id)arg2 ;
-(void)_handleAuthorizationError:(id)arg1 ;
-(void)_paneDelegate_authorizationPaneViewControllerDidRequestAuthorizationWithUserProvidedInformation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setCancelButtonEnabled:(BOOL)arg1 ;
-(void)subPaneConfirmButtonDidEnterProcessingState:(id)arg1 ;
-(void)subpaneConfirmButtonDidFailBiometry:(id)arg1 ;
-(void)performPasswordAuthentication;
-(void)performAuthorization;
-(BOOL)validateReadyForAuthorization;
-(void)passwordAuthenticationCompletedWithResults:(id)arg1 error:(id)arg2 ;
-(id)initWithAuthorizationContext:(id)arg1 scopeChoices:(id)arg2 ;
-(void)setAuthorizationViewController:(AKAuthorizationViewController *)arg1 ;
-(BOOL)_hasOneLoginChoice;
-(AKAuthorizationViewController *)authorizationViewController;
-(id)_firstLoginChoice;
-(id)_tableViewIconForContext:(id)arg1 ;
-(BOOL)_canPerformAuthorization;
-(void)_performAuthorizationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_performAuthorization;
-(void)_performAppleIDPasswordAuthenticationIfNeeded;
-(void)_setupKeychainCell:(id)arg1 forLoginChoice:(id)arg2 ;
-(void)_setupAppleIDCell:(id)arg1 forLoginChoice:(id)arg2 ;
@end

