/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
*/

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSMutableSet;

@interface SRResearchDaysViewController : UITableViewController {

	double _end;
	long long _numberOfDays;
	NSArray* _tombstones;
	NSMutableSet* _deletedDays;

}

@property (nonatomic,retain) NSMutableSet * deletedDays;              //@synthesize deletedDays=_deletedDays - In the implementation block
@property (assign,nonatomic) double end;                              //@synthesize end=_end - In the implementation block
@property (assign,nonatomic) long long numberOfDays;                  //@synthesize numberOfDays=_numberOfDays - In the implementation block
@property (nonatomic,retain) NSArray * tombstones;                    //@synthesize tombstones=_tombstones - In the implementation block
-(long long)numberOfDays;
-(double)end;
-(id)init;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setEnd:(double)arg1 ;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSArray *)tombstones;
-(void)dealloc;
-(void)setNumberOfDays:(long long)arg1 ;
-(void)setTombstones:(NSArray *)arg1 ;
-(void)setDeletedDays:(NSMutableSet *)arg1 ;
-(NSMutableSet *)deletedDays;
-(id)datesFrom:(double)arg1 to:(double)arg2 ;
-(id)dateForRow:(long long)arg1 ;
@end

