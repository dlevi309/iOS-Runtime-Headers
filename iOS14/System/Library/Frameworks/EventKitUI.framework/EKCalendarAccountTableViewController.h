/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UITableViewController.h>

@class NSString, EKEventStore, EKCalendar, NSMutableArray;

@interface EKCalendarAccountTableViewController : UITableViewController {

	NSString* _currentSourceIdentifier;
	EKEventStore* _eventStore;
	EKCalendar* _calendar;

}

@property (__weak) EKEventStore * eventStore;                       //@synthesize eventStore=_eventStore - In the implementation block
@property (__weak) EKCalendar * calendar;                           //@synthesize calendar=_calendar - In the implementation block
@property (readonly) NSMutableArray * accounts; 
@property (retain) NSString * currentSourceIdentifier;              //@synthesize currentSourceIdentifier=_currentSourceIdentifier - In the implementation block
-(NSMutableArray *)accounts;
-(EKEventStore *)eventStore;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(EKCalendar *)calendar;
-(NSString *)currentSourceIdentifier;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(id)initWithCalendar:(id)arg1 andStore:(id)arg2 ;
-(void)setCurrentSourceIdentifier:(NSString *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

