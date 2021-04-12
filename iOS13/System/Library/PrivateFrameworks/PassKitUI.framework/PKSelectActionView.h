/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol PKSelectActionViewDelegate;
@class PKPass, NSArray, PKSelectActionHeader, UITableView, PKPaymentPassAction, NSString;

@interface PKSelectActionView : UIView <UITableViewDelegate, UITableViewDataSource> {

	PKPass* _pass;
	NSArray* _actions;
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
-(id<PKSelectActionViewDelegate>)delegate;
-(void)setDelegate:(id<PKSelectActionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(PKPaymentPassAction *)selectedAction;
-(void)setSelectedAction:(PKPaymentPassAction *)arg1 ;
-(id)initWithPass:(id)arg1 actions:(id)arg2 actionType:(unsigned long long)arg3 ;
-(void)_addSubviews;
@end

