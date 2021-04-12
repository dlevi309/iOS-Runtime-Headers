/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(unsigned long long)supportedAvailabilities;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setSupportedAvailabilities:(unsigned long long)arg1 ;
-(long long)availability;
-(void)_selectRow:(unsigned long long)arg1 ;
-(void)setAvailability:(long long)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

