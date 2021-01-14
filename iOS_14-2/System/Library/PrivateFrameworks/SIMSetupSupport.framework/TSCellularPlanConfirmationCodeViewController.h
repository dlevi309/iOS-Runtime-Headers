/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <SIMSetupSupport/SIMSetupSupport-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/TSSetupFlowItem.h>

@protocol TSSIMSetupFlowDelegate;
@class TSCellularPlanTableViewCell, NSString, UIBarButtonItem, UILabel, UITableView, NSLayoutConstraint;

@interface TSCellularPlanConfirmationCodeViewController : UIViewController <UITextFieldDelegate, TSSetupFlowItem> {

	TSCellularPlanTableViewCell* _confirmationCodeCell;
	NSString* _fauxCardData;
	NSString* _confirmationCode;
	long long _userConsentResponse;
	BOOL _isMidOperation;
	UIBarButtonItem* _nextButton;
	UIBarButtonItem* _cancelButton;
	id<TSSIMSetupFlowDelegate> _delegate;
	UILabel* _confirmationCodeTitleLabel;
	UITableView* _infoTableView;
	NSLayoutConstraint* _infoTableViewHeightConstraint;

}

@property (assign,nonatomic,__weak) id<TSSIMSetupFlowDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * confirmationCode;                                          //@synthesize confirmationCode=_confirmationCode - In the implementation block
@property (assign,nonatomic,__weak) UILabel * confirmationCodeTitleLabel;                            //@synthesize confirmationCodeTitleLabel=_confirmationCodeTitleLabel - In the implementation block
@property (assign,nonatomic,__weak) UITableView * infoTableView;                                     //@synthesize infoTableView=_infoTableView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * infoTableViewHeightConstraint;              //@synthesize infoTableViewHeightConstraint=_infoTableViewHeightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(NSString *)confirmationCode;
-(id<TSSIMSetupFlowDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<TSSIMSetupFlowDelegate>)arg1 ;
-(void)viewDidLoad;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)viewDidLayoutSubviews;
-(void)confirm:(id)arg1 ;
-(UILabel *)confirmationCodeTitleLabel;
-(void)setConfirmationCodeTitleLabel:(UILabel *)arg1 ;
-(UITableView *)infoTableView;
-(void)setInfoTableView:(UITableView *)arg1 ;
-(NSLayoutConstraint *)infoTableViewHeightConstraint;
-(void)setInfoTableViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)userDidTapCancel;
-(id)initWithCardData:(id)arg1 ;
-(id)initAsMidOperation;
@end

