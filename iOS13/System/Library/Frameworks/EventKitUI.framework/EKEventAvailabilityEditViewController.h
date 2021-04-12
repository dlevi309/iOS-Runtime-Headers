/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSMutableArray, UITableView, NSString;

@interface EKEventAvailabilityEditViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate> {

	long long _availability;
	unsigned long long _supportedAvailabilities;
	NSMutableArray* _choices;
	UITableView* _table;

}

@property (assign,nonatomic) long long availability;                                  //@synthesize availability=_availability - In the implementation block
@property (assign,nonatomic) unsigned long long supportedAvailabilities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)availability;
-(void)setAvailability:(long long)arg1 ;
-(void)setSupportedAvailabilities:(unsigned long long)arg1 ;
-(void)_selectRow:(unsigned long long)arg1 ;
-(unsigned long long)supportedAvailabilities;
@end

