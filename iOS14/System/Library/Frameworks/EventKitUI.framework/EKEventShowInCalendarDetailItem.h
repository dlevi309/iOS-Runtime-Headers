/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class EKUITableViewCell, EKDayPreviewController, EKEvent, NSDate;

@interface EKEventShowInCalendarDetailItem : EKEventDetailItem {

	EKUITableViewCell* _cell;
	EKDayPreviewController* _containedDayViewController;
	EKEvent* _eventCopy;
	NSDate* _proposedTime;

}

@property (nonatomic,retain) NSDate * proposedTime;              //@synthesize proposedTime=_proposedTime - In the implementation block
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(void)_datesForPreviewViewControllerWithStartDate:(id*)arg1 endDate:(id*)arg2 ;
-(NSDate *)proposedTime;
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(void)setProposedTime:(NSDate *)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)reset;
-(id)_dayPreviewViewController;
-(void)refreshCopiedEvents;
-(void)_createNewEventCopy;
@end

