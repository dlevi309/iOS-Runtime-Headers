/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol EKDayViewContentDelegate <NSObject>
@optional
-(void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2;
-(id)dayViewContent:(id)arg1 selectedCopyViewForOccurrenceView:(id)arg2;
-(void)dayViewContentDidLayout:(id)arg1;
-(void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2;
-(void)occurrencePressed:(id)arg1 onDay:(double)arg2;

@required
-(void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2;
-(void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2;

@end

