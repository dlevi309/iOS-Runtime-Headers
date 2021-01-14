/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol WFTimeOffsetPickerViewControllerDelegate;
@class UIPickerView, UITableView, NSArray, NSString;

@interface WFTimeOffsetPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	id<WFTimeOffsetPickerViewControllerDelegate> _delegate;
	unsigned long long _event;
	UIPickerView* _currentPickerView;
	UITableView* _tableView;
	NSArray* _sections;
	NSArray* _tableViewItems;
	unsigned long long _timeOffset;

}

@property (nonatomic,retain) UIPickerView * currentPickerView;                                          //@synthesize currentPickerView=_currentPickerView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                   //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSArray * sections;                                                      //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) NSArray * tableViewItems;                                                //@synthesize tableViewItems=_tableViewItems - In the implementation block
@property (assign,nonatomic) unsigned long long timeOffset;                                             //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign,nonatomic,__weak) id<WFTimeOffsetPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long event;                                                //@synthesize event=_event - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(unsigned long long)timeOffset;
-(id<WFTimeOffsetPickerViewControllerDelegate>)delegate;
-(UITableView *)tableView;
-(NSArray *)sections;
-(void)setTimeOffset:(unsigned long long)arg1 ;
-(void)cancel:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)done:(id)arg1 ;
-(void)setDelegate:(id<WFTimeOffsetPickerViewControllerDelegate>)arg1 ;
-(unsigned long long)event;
-(void)setTableView:(UITableView *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)titleForRow:(long long)arg1 ;
-(id)infoForSection:(long long)arg1 ;
-(id)initWithTimeTriggerEvent:(unsigned long long)arg1 timeOffset:(unsigned long long)arg2 ;
-(UIPickerView *)currentPickerView;
-(void)setCurrentPickerView:(UIPickerView *)arg1 ;
-(NSArray *)tableViewItems;
@end

