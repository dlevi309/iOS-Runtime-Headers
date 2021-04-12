/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HRWDTableViewSectionDelegate.h>

@class HRProfile, UITableView, NSArray, NSString;

@interface HRWDTableViewController : HKTableViewController <HRWDTableViewSectionDelegate> {

	NSArray* _tableSections;
	HRProfile* _profile;

}

@property (nonatomic,readonly) NSArray * tableSections;              //@synthesize tableSections=_tableSections - In the implementation block
@property (retain) HRProfile * profile;                              //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) UITableView * tableView; 
+(id)tableViewSectionClasses;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(HRProfile *)profile;
-(void)setProfile:(HRProfile *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)indexPathForCell:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_addObservers;
-(void)applicationWillEnterForeground;
-(void)applicationDidEnterBackground;
-(NSArray *)tableSections;
-(void)reloadSection:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)reloadTable;
-(id)_section:(long long)arg1 ;
-(id)_sectionAtIndexPath:(id)arg1 ;
-(void)pushViewController:(id)arg1 ;
-(void)sectionAddedChildViewController:(id)arg1 ;
@end

