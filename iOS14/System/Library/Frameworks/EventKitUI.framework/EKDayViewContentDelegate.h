/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol EKDayViewContentDelegate <NSObject>
@optional
-(id)dayViewContent:(id)arg1 selectedCopyViewForOccurrenceView:(id)arg2;
-(void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2;
-(BOOL)dayViewContentShouldDrawSynchronously:(id)arg1;
-(void)dayViewContentDidLayout:(id)arg1;
-(void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2;
-(void)occurrencePressed:(id)arg1 onDay:(double)arg2;

@required
-(void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2;
-(void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2;

@end

