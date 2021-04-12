/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
*/

#import <UIKitCore/UITableViewController.h>

@protocol CertInfoTrustDescription, CertInfoTrustSummaryControllerDelegate;
@class UIBarButtonItem, UITableViewCell;

@interface CertInfoTrustSummaryController : UITableViewController {

	id<CertInfoTrustDescription> _description;
	id<CertInfoTrustSummaryControllerDelegate> _delegate;
	UIBarButtonItem* _doneButton;
	UITableViewCell* _headerCell;
	UITableViewCell* _descriptionCell;
	unsigned _showsDoneButton : 1;

}

@property (assign,nonatomic,__weak) id<CertInfoTrustSummaryControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)showsDoneButton;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<CertInfoTrustSummaryControllerDelegate>)delegate;
-(void)_doneButtonPressed:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(void)setDelegate:(id<CertInfoTrustSummaryControllerDelegate>)arg1 ;
-(id)_headerCell;
-(void)_actionButtonPressed:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_cellForReuseIdentifier:(id)arg1 ;
-(id)_descriptionCell;
-(void)setActionButtonTitle:(id)arg1 destructive:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)initWithTrustDescription:(id)arg1 ;
@end

