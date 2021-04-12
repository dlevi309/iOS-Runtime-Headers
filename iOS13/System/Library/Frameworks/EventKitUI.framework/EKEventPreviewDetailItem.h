/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell, EKDayPreviewController, EKEvent, NSDate;

@interface EKEventPreviewDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;
	EKDayPreviewController* _containedDayViewController;
	EKEvent* _eventCopy;
	BOOL _inlineDayViewRespectsSelectedCalendarsFilter;
	NSDate* _proposedTime;

}

@property (assign,nonatomic) BOOL inlineDayViewRespectsSelectedCalendarsFilter;              //@synthesize inlineDayViewRespectsSelectedCalendarsFilter=_inlineDayViewRespectsSelectedCalendarsFilter - In the implementation block
@property (nonatomic,retain) NSDate * proposedTime;                                          //@synthesize proposedTime=_proposedTime - In the implementation block
-(void)reset;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(NSDate *)proposedTime;
-(void)setProposedTime:(NSDate *)arg1 ;
-(void)_createNewEventCopy;
-(void)_datesForPreviewViewControllerWithStartDate:(id*)arg1 endDate:(id*)arg2 ;
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(id)_dayPreviewViewController;
-(BOOL)inlineDayViewRespectsSelectedCalendarsFilter;
-(void)refreshCopiedEvents;
-(void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned long long)arg2 ;
-(void)setInlineDayViewRespectsSelectedCalendarsFilter:(BOOL)arg1 ;
@end

