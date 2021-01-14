/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)finish:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<WFAlarmChooserViewControllerDelegate>)delegate;
-(UITableView *)tableView;
-(void)dataSourceDidReload:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<WFAlarmChooserViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(BOOL)isModalInPresentation;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(MTAlarmDataSource *)alarmDataSource;
-(id)initWithAlarmDataSource:(id)arg1 checkedAlarmIDs:(id)arg2 ;
-(void)checkForValidCheckedAlarmIDs;
-(void)updateDoneButtonEnabled;
-(NSMutableOrderedSet *)checkedAlarmIDs;
@end

