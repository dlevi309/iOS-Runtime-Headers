/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)hasDetailViewControllerAtIndex:(unsigned long long)arg1 ;
-(void)setCellPosition:(int)arg1 ;
-(void)_updateCellsIfNeededForWidth:(double)arg1 ;
-(id)attendeeForIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)reset;
-(BOOL)detailItemVisibilityChanged;
@end

