/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/WDTableViewSectionDelegate.h>

@class WDProfile, UITableView, NSArray, NSString;

@interface WDTableViewController : HKTableViewController <WDTableViewSectionDelegate> {

	NSArray* _tableSections;
	WDProfile* _profile;

}

@property (nonatomic,readonly) NSArray * tableSections;              //@synthesize tableSections=_tableSections - In the implementation block
@property (nonatomic,retain) WDProfile * profile;                    //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) UITableView * tableView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tableViewSectionClasses;
-(void)applicationWillEnterForeground;
-(void)applicationDidEnterBackground;
-(void)setProfile:(WDProfile *)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)reloadSection:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)pushViewController:(id)arg1 ;
-(WDProfile *)profile;
-(void)viewDidLoad;
-(void)_addObservers;
-(id)initWithCoder:(id)arg1 ;
-(id)indexPathForCell:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)reloadTable;
-(id)_section:(long long)arg1 ;
-(id)_sectionAtIndexPath:(id)arg1 ;
-(void)sectionAddedChildViewController:(id)arg1 ;
-(void)dealloc;
-(NSArray *)tableSections;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

