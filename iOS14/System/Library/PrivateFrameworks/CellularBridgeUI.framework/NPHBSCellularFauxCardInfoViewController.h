/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
*/

#import <CellularBridgeUI/CellularBridgeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSString, NSArray, UITextField, CTXPCServiceSubscriptionContext, UILabel, UITableView, NSLayoutConstraint, UIScrollView;

@interface NPHBSCellularFauxCardInfoViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource> {

	NSString* _fauxCardData;
	NSArray* _tableData;
	UITextField* _activeTextField;
	CGSize _keyboardSize;
	/*^block*/id _completion;
	CTXPCServiceSubscriptionContext* _subscriptionContext;
	UILabel* _enterActivationLabel;
	UITableView* _infoTableView;
	NSLayoutConstraint* _infoTableViewHeightConstraint;
	UIScrollView* _scrollView;

}

@property (nonatomic,copy) id completion;                                                            //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) CTXPCServiceSubscriptionContext * subscriptionContext;                  //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (assign,nonatomic,__weak) UILabel * enterActivationLabel;                                  //@synthesize enterActivationLabel=_enterActivationLabel - In the implementation block
@property (assign,nonatomic,__weak) UITableView * infoTableView;                                     //@synthesize infoTableView=_infoTableView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * infoTableViewHeightConstraint;              //@synthesize infoTableViewHeightConstraint=_infoTableViewHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                       //@synthesize scrollView=_scrollView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)completion;
-(void)setSubscriptionContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)viewDidLoad;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)keyboardWasShown:(id)arg1 ;
-(void)keyboardWillBeHidden:(id)arg1 ;
-(UITableView *)infoTableView;
-(void)setInfoTableView:(UITableView *)arg1 ;
-(NSLayoutConstraint *)infoTableViewHeightConstraint;
-(void)setInfoTableViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)scrollViewForKeyboardIfNecessary;
-(void)activatePlan:(id)arg1 ;
-(UILabel *)enterActivationLabel;
-(void)setEnterActivationLabel:(UILabel *)arg1 ;
@end

