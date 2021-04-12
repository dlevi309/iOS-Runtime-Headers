/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <TestFlightCore/TestFlightCore-Structs.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class TFFeedbackFormPresenter, TFFeedbackFormCellUpdater, NSString;

@interface TFFeedbackFormViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate> {

	TFFeedbackFormPresenter* _presenter;
	TFFeedbackFormCellUpdater* _cellUpdater;

}

@property (nonatomic,readonly) TFFeedbackFormPresenter * presenter;                  //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,readonly) TFFeedbackFormCellUpdater * cellUpdater;              //@synthesize cellUpdater=_cellUpdater - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(TFFeedbackFormPresenter *)presenter;
-(id)initWithPresenter:(id)arg1 ;
-(void)prepareTableViewForDataSource:(id)arg1 ;
-(TFFeedbackFormCellUpdater *)cellUpdater;
@end

