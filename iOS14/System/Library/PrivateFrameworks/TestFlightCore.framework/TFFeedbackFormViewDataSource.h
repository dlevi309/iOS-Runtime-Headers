/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(TFFeedbackFormPresenter *)presenter;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithPresenter:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)prepareTableViewForDataSource:(id)arg1 ;
-(TFFeedbackFormCellUpdater *)cellUpdater;
@end

