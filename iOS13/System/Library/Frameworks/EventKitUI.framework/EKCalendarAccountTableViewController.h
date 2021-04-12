/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(EKCalendar *)calendar;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(NSMutableArray *)accounts;
-(void)loadView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(id)initWithCalendar:(id)arg1 andStore:(id)arg2 ;
-(void)setCurrentSourceIdentifier:(NSString *)arg1 ;
-(NSString *)currentSourceIdentifier;
@end

