/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKTableViewController.h>

@class NSMutableArray, HKWorkoutEvent;

@interface HKWorkoutEventDetailViewController : HKTableViewController {

	NSMutableArray* _sections;
	HKWorkoutEvent* _event;

}

@property (nonatomic,retain) NSMutableArray * sections;              //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) HKWorkoutEvent * event;                 //@synthesize event=_event - In the implementation block
-(void)setSections:(NSMutableArray *)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)initWithEvent:(id)arg1 ;
-(NSMutableArray *)sections;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(HKWorkoutEvent *)event;
-(void)setEvent:(HKWorkoutEvent *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_loadSections;
-(void)_addSectionIfNotNil:(id)arg1 ;
@end

