/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol PKSelectActionViewDelegate;
@class PKPass, NSArray, NSDictionary, PKSelectActionHeader, UITableView, PKPaymentPassAction, NSString;

@interface PKSelectActionView : UIView <UITableViewDelegate, UITableViewDataSource> {

	PKPass* _pass;
	NSArray* _actions;
	NSDictionary* _balances;
	unsigned long long _actionType;
	PKSelectActionHeader* _actionHeader;
	UITableView* _tableView;
	id<PKSelectActionViewDelegate> _delegate;
	PKPaymentPassAction* _selectedAction;

}

@property (nonatomic,retain) PKPaymentPassAction * selectedAction;                        //@synthesize selectedAction=_selectedAction - In the implementation block
@property (assign,nonatomic,__weak) id<PKSelectActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id<PKSelectActionViewDelegate>)delegate;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)initWithPass:(id)arg1 actions:(id)arg2 actionType:(unsigned long long)arg3 balanceDictionary:(id)arg4 ;
-(void)setDelegate:(id<PKSelectActionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)_addSubviews;
-(id)_balanceForTopUpAction:(id)arg1 ;
-(PKPaymentPassAction *)selectedAction;
-(void)setSelectedAction:(PKPaymentPassAction *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

