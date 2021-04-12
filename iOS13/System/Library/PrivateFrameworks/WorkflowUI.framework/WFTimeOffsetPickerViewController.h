/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@protocol WFTimeOffsetPickerViewControllerDelegate;
@class UIPickerView, UITableView, NSArray, NSString;

@interface WFTimeOffsetPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIPickerViewDelegate, UIPickerViewDataSource> {

	id<WFTimeOffsetPickerViewControllerDelegate> _delegate;
	unsigned long long _event;
	UIPickerView* _currentPickerView;
	UITableView* _tableView;
	NSArray* _sections;
	NSArray* _pickerItems;
	unsigned long long _timeOffset;

}

@property (nonatomic,retain) UIPickerView * currentPickerView;                                          //@synthesize currentPickerView=_currentPickerView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                   //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSArray * sections;                                                      //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) NSArray * pickerItems;                                                   //@synthesize pickerItems=_pickerItems - In the implementation block
@property (assign,nonatomic) unsigned long long timeOffset;                                             //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign,nonatomic,__weak) id<WFTimeOffsetPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long event;                                                //@synthesize event=_event - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFTimeOffsetPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFTimeOffsetPickerViewControllerDelegate>)arg1 ;
-(unsigned long long)event;
-(void)loadView;
-(UITableView *)tableView;
-(void)setTimeOffset:(unsigned long long)arg1 ;
-(unsigned long long)timeOffset;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)done:(id)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)cancel:(id)arg1 ;
-(NSArray *)pickerItems;
-(id)infoForSection:(long long)arg1 ;
-(id)initWithTimeTriggerEvent:(unsigned long long)arg1 timeOffset:(unsigned long long)arg2 ;
-(UIPickerView *)currentPickerView;
-(void)setCurrentPickerView:(UIPickerView *)arg1 ;
@end

