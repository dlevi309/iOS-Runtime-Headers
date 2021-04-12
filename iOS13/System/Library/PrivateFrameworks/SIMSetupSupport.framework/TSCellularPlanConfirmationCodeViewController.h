/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<TSSIMSetupFlowDelegate>)delegate;
-(void)setDelegate:(id<TSSIMSetupFlowDelegate>)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(NSString *)confirmationCode;
-(BOOL)canBeShownFromSuspendedState;
-(void)confirm:(id)arg1 ;
-(UILabel *)confirmationCodeTitleLabel;
-(void)setConfirmationCodeTitleLabel:(UILabel *)arg1 ;
-(UITableView *)infoTableView;
-(void)setInfoTableView:(UITableView *)arg1 ;
-(NSLayoutConstraint *)infoTableViewHeightConstraint;
-(void)setInfoTableViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithCardData:(id)arg1 ;
-(id)initAsMidOperation;
@end

