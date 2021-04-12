/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol EKCalendarEditItemDelegate, EKStyleProvider;
@class EKEventStore, EKCalendar;

@interface EKCalendarEditItem : NSObject {

	EKEventStore* _store;
	EKCalendar* _calendar;
	id<EKCalendarEditItemDelegate> _delegate;
	id<EKStyleProvider> _styleProvider;

}

@property (assign,nonatomic,__weak) id<EKCalendarEditItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<EKStyleProvider> styleProvider;                           //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,readonly) EKCalendar * calendar;                                     //@synthesize calendar=_calendar - In the implementation block
-(id<EKCalendarEditItemDelegate>)delegate;
-(void)setDelegate:(id<EKCalendarEditItemDelegate>)arg1 ;
-(EKCalendar *)calendar;
-(void)reset;
-(BOOL)becomeFirstResponder;
-(id)headerTitle;
-(void)setStyleProvider:(id<EKStyleProvider>)arg1 ;
-(id<EKStyleProvider>)styleProvider;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(void)setCalendar:(id)arg1 store:(id)arg2 ;
-(void)layoutForWidth:(double)arg1 ;
-(id)footerViewForSection;
-(double)footerHeightForSection;
-(BOOL)saveStateToCalendar:(id)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 ;
-(void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(BOOL)calendarEditor:(id)arg1 shouldSelectSubitem:(unsigned long long)arg2 ;
-(void)applyStyleProviderToCell:(id)arg1 ;
@end

