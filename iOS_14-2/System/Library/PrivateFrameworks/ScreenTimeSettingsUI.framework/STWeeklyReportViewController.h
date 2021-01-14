/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <UIKitCore/UITableViewController.h>

@class STUsageReport, NSArray, NSLayoutConstraint;

@interface STWeeklyReportViewController : UITableViewController {

	STUsageReport* _report;
	NSArray* _tableViewCells;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,readonly) STUsageReport * report;                 //@synthesize report=_report - In the implementation block
@property (nonatomic,retain) NSArray * tableViewCells;                 //@synthesize tableViewCells=_tableViewCells - In the implementation block
@property (retain) NSLayoutConstraint * heightConstraint;              //@synthesize heightConstraint=_heightConstraint - In the implementation block
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(STUsageReport *)report;
-(id)initWithData:(id)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)viewDidLoad;
-(NSArray *)tableViewCells;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithUsageReport:(id)arg1 ;
-(void)_heightDidChange:(id)arg1 ;
-(void)setTableViewCells:(NSArray *)arg1 ;
@end

