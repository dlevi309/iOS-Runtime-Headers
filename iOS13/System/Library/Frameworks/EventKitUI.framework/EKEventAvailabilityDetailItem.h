/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell, NSArray;

@interface EKEventAvailabilityDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;
	long long _availability;
	unsigned long long _supportedAvailabilities;
	NSArray* _choices;
	unsigned long long _availabilityIndexInChoices;

}
-(void)reset;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(BOOL)_canChangeAvailability;
@end

