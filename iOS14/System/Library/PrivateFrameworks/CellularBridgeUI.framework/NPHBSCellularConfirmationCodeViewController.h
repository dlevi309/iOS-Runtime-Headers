/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
*/

#import <CellularBridgeUI/CellularBridgeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol NPHBSCellularConfirmationCodeViewControllerDelegate;
@class NPHSetupTableViewCell, UILabel, UITableView, NSLayoutConstraint, NSString;

@interface NPHBSCellularConfirmationCodeViewController : UIViewController <UITextFieldDelegate> {

	NPHSetupTableViewCell* _confirmationCodeCell;
	id<NPHBSCellularConfirmationCodeViewControllerDelegate> _delegate;
	UILabel* _confirmationCodeTitleLabel;
	UITableView* _infoTableView;
	NSLayoutConstraint* _infoTableViewHeightConstraint;

}

@property (assign,nonatomic,__weak) id<NPHBSCellularConfirmationCodeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UILabel * confirmationCodeTitleLabel;                                          //@synthesize confirmationCodeTitleLabel=_confirmationCodeTitleLabel - In the implementation block
@property (assign,nonatomic,__weak) UITableView * infoTableView;                                                   //@synthesize infoTableView=_infoTableView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * infoTableViewHeightConstraint;                            //@synthesize infoTableViewHeightConstraint=_infoTableViewHeightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)init;
-(id<NPHBSCellularConfirmationCodeViewControllerDelegate>)delegate;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<NPHBSCellularConfirmationCodeViewControllerDelegate>)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)confirm:(id)arg1 ;
-(UILabel *)confirmationCodeTitleLabel;
-(void)setConfirmationCodeTitleLabel:(UILabel *)arg1 ;
-(UITableView *)infoTableView;
-(void)setInfoTableView:(UITableView *)arg1 ;
-(NSLayoutConstraint *)infoTableViewHeightConstraint;
-(void)setInfoTableViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

