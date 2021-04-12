/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTimeSettingsUI.framework/SchoolTimeSettingsUI
*/

#import <SchoolTimeSettingsUI/SchoolTimeSettingsUI-Structs.h>
#import <Preferences/PSTableCell.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/SCLTimePickerTableViewCellDelegate.h>

@class UITableView, UITableViewDiffableDataSource, NSDateFormatter, NSString;

@interface SCLTimeIntervalTableViewCell : PSTableCell <UITableViewDelegate, SCLTimePickerTableViewCellDelegate> {

	BOOL _reloadingAnimated;
	UITableView* _tableView;
	UITableViewDiffableDataSource* _dataSource;
	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,retain) UITableView * tableView;                                        //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UITableViewDiffableDataSource * dataSource;                     //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * dateFormatter;                              //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (assign,getter=isReloadingAnimated,nonatomic) BOOL reloadingAnimated;              //@synthesize reloadingAnimated=_reloadingAnimated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)reloadWithSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(UITableView *)tableView;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(id)timeInterval;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(UITableViewDiffableDataSource *)dataSource;
-(void)setDataSource:(UITableViewDiffableDataSource *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(unsigned long long)pickerState;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 itemIdentifier:(id)arg3 ;
-(id)snapshotForPickerState:(unsigned long long)arg1 ;
-(void)setReloadingAnimated:(BOOL)arg1 ;
-(BOOL)isReloadingAnimated;
-(void)configureTimeCell:(id)arg1 forRow:(unsigned long long)arg2 ;
-(id)dateConverter;
-(void)configureTimePickerCell:(id)arg1 forRow:(unsigned long long)arg2 ;
-(id)constraintInterval;
-(id)scheduleTimeFormatter;
-(void)timePickerCell:(id)arg1 didUpdateDate:(id)arg2 ;
@end

