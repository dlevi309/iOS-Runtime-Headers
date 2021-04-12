/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol WFTimeRangePickerViewControllerDelegate;
@class NSDate, NSArray;

@interface WFTimeRangePickerViewController : UITableViewController {

	id<WFTimeRangePickerViewControllerDelegate> _delegate;
	NSDate* _startTime;
	NSDate* _endTime;
	NSArray* _sections;

}

@property (nonatomic,retain) NSDate * startTime;                                                       //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                                                         //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) NSArray * sections;                                                     //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic,__weak) id<WFTimeRangePickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<WFTimeRangePickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFTimeRangePickerViewControllerDelegate>)arg1 ;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)done:(id)arg1 ;
-(id)initWithStartTime:(id)arg1 endTime:(id)arg2 ;
-(void)cancel:(id)arg1 ;
-(void)startTimeChanged:(id)arg1 ;
-(void)endTimeChanged:(id)arg1 ;
@end

