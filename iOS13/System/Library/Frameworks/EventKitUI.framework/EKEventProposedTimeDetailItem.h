/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class NSMutableDictionary, NSArray;

@interface EKEventProposedTimeDetailItem : EKEventDetailItem {

	NSMutableDictionary* _cellForAttendee;
	NSArray* _attendeesWithProposedTimes;
	BOOL _visibilityChanged;

}
-(void)reset;
-(void)setCellPosition:(int)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(BOOL)hasDetailViewControllerAtIndex:(unsigned long long)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)detailItemVisibilityChanged;
-(id)attendeeForIndex:(unsigned long long)arg1 ;
-(void)_updateCellsIfNeededForWidth:(double)arg1 ;
@end

