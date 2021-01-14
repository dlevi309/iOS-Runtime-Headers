/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/PKPerformActionView.h>

@protocol PKPerformActionViewDelegate;
@class UITextField, PKPass, PKPaymentPassAction, NSDateFormatter, PKSelectedItemActionItem, UITableView, PKPerformActionSelectItemExpiresHeader, NSString;

@interface PKPerformActionSelectItemView : UIView <UITableViewDelegate, UITableViewDataSource, PKPerformActionView> {

	PKPass* _pass;
	PKPaymentPassAction* _action;
	NSDateFormatter* _dateFormatter;
	PKSelectedItemActionItem* _selectedItem;
	UITableView* _tableView;
	PKPerformActionSelectItemExpiresHeader* _expiresHeader;
	id<PKPerformActionViewDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PKPerformActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITextField * amountTextField; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)init;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id<PKPerformActionViewDelegate>)delegate;
-(id)transactionCurrency;
-(void)saveLastInputValues;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3 ;
-(void)setDelegate:(id<PKPerformActionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)_addSubviews;
-(BOOL)_showsExpirationSection;
-(id)_optionsSectionHeaderText;
-(id)_optionsSectionFooterText;
-(id)pass;
-(id)transactionAmount;
-(UITextField *)amountTextField;
-(id)serviceProviderData;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
@end

