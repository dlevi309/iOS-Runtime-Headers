/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/MTAlarmDataSourceObserver.h>

@protocol WFAlarmChooserViewControllerDelegate;
@class UITableView, MTAlarmDataSource, NSMutableOrderedSet, NSString;

@interface WFAlarmChooserViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MTAlarmDataSourceObserver> {

	id<WFAlarmChooserViewControllerDelegate> _delegate;
	UITableView* _tableView;
	MTAlarmDataSource* _alarmDataSource;
	NSMutableOrderedSet* _checkedAlarmIDs;

}

@property (nonatomic,readonly) UITableView * tableView;                                             //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) MTAlarmDataSource * alarmDataSource;                                 //@synthesize alarmDataSource=_alarmDataSource - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * checkedAlarmIDs;                               //@synthesize checkedAlarmIDs=_checkedAlarmIDs - In the implementation block
@property (assign,nonatomic,__weak) id<WFAlarmChooserViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFAlarmChooserViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFAlarmChooserViewControllerDelegate>)arg1 ;
-(void)finish:(id)arg1 ;
-(void)loadView;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)isModalInPresentation;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)cancel:(id)arg1 ;
-(void)dataSourceDidReload:(id)arg1 ;
-(MTAlarmDataSource *)alarmDataSource;
-(id)initWithAlarmDataSource:(id)arg1 checkedAlarmIDs:(id)arg2 ;
-(void)checkForValidCheckedAlarmIDs;
-(void)updateDoneButtonEnabled;
-(NSMutableOrderedSet *)checkedAlarmIDs;
@end

