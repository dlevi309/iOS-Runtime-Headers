/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupFieldCellDelegate.h>
#import <libobjc.A.dylib/PKNavigationItemController.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKTableHeaderView, PKPaymentSetupFieldsModel, NSMapTable, NSArray, PKPaymentWebService, NSString;

@interface PKPaymentSetupFieldsViewController : PKPaymentSetupTableViewController <UITextFieldDelegate, PKPaymentSetupFieldCellDelegate, PKNavigationItemController> {

	PKTableHeaderView* _headerView;
	BOOL _hasScrolledToShowFields;
	BOOL _cellsAreEnabled;
	PKPaymentSetupFieldsModel* _fieldsModel;
	NSMapTable* _fieldIdentifierToCellMap;
	id _currentNextActionBlock;
	NSArray* _leftBarButtonItems;
	NSArray* _rightBarButtonItems;
	BOOL _navigationEnabled;
	BOOL _rightBarButtonItemsEnabled;
	BOOL _hidesBackButton;
	BOOL _showingActivitySpinner;
	BOOL _performingNextActionLoop;
	BOOL _provisioningPaymentAccount;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	PKPaymentWebService* _webService;

}

@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;                      //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * webService;                                                   //@synthesize webService=_webService - In the implementation block
@property (nonatomic,retain) PKPaymentSetupFieldsModel * fieldsModel;                                            //@synthesize fieldsModel=_fieldsModel - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (getter=isShowingActivitySpinner,nonatomic,readonly) BOOL showingActivitySpinner;                      //@synthesize showingActivitySpinner=_showingActivitySpinner - In the implementation block
@property (getter=isPerformingNextActionLoop,nonatomic,readonly) BOOL performingNextActionLoop;                  //@synthesize performingNextActionLoop=_performingNextActionLoop - In the implementation block
@property (getter=isProvisioningPaymentAccount,nonatomic,readonly) BOOL provisioningPaymentAccount;              //@synthesize provisioningPaymentAccount=_provisioningPaymentAccount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)footerView;
-(BOOL)isComplete;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(PKPaymentWebService *)webService;
-(void)triggerNextActionLoop;
-(id)defaultFields;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)fieldCellEditableTextFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)fieldCellEditableTextFieldShouldClear:(id)arg1 ;
-(BOOL)fieldCellEditableTextFieldShouldReturn:(id)arg1 ;
-(id)firstEmptyField;
-(void)logAggDContextSpecificCheckpointForKey:(id)arg1 ;
-(id)readonlyFieldIdentifiers;
-(void)fieldCellDidTapButton:(id)arg1 ;
-(BOOL)isProvisioningPaymentAccount;
-(BOOL)isPerformingNextActionLoop;
-(void)logAggDCheckpointForKey:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)fieldForIdentifier:(id)arg1 ;
-(void)_setCellsEnabled:(BOOL)arg1 ;
-(void)fieldCellEditableTextFieldValueDidChange:(id)arg1 ;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(id)cellForIdentifier:(id)arg1 ;
-(id)nextResponderCellForCurrentIdentifier:(id)arg1 ;
-(void)_triggerNextActionLoop:(BOOL)arg1 ;
-(void)_continueNextActionLoop:(BOOL)arg1 ;
-(void)handleNextActionError:(id)arg1 shouldContinue:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)handleNextActionWithCompletion:(/*^block*/id)arg1 ;
-(void)_setTableViewHeaderActivityIndicatorActive:(BOOL)arg1 title:(id)arg2 subtitle:(id)arg3 animated:(BOOL)arg4 ;
-(void)hideActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3 ;
-(void)_setNavigationBarEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)firstResponderCell;
-(id)firstEmptyCell;
-(void)_destroyNavigationBarButtonItemsAnimated:(BOOL)arg1 ;
-(void)setFieldsModel:(PKPaymentSetupFieldsModel *)arg1 ;
-(void)noteFieldIdentifiersChanged;
-(BOOL)isShowingActivitySpinner;
-(void)viewDidLoad;
-(void)setWebService:(PKPaymentWebService *)arg1 ;
-(id)allCells;
-(PKPaymentSetupFieldsModel *)fieldsModel;
-(void)_setLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(id)firstEmptySetupField;
-(BOOL)shouldAppearWithFirstEmptyFieldAsFirstResponder;
-(id)initWithWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4 ;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(id)visibleFieldIdentifiers;
-(void)handleNextButtonTapped:(id)arg1 ;
-(id)_contextSpecificStringForAggDKey:(id)arg1 ;
-(void)_handleNextButtonTapped:(id)arg1 ;
-(void)_setRightBarButtonItemsEnabled:(BOOL)arg1 ;
-(void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)_setIdleTimerDisabled:(BOOL)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(void)_setRightBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)headerView;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)_updateRightBarButtonState;
-(void)hideActivitySpinner;
-(void)setHidesBackButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isEmpty;
-(void)showActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)_updateNavigationItemAnimated:(BOOL)arg1 ;
@end

