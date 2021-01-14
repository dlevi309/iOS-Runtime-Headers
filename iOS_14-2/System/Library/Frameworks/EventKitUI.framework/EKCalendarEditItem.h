/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(BOOL)becomeFirstResponder;
-(id)headerTitle;
-(id<EKCalendarEditItemDelegate>)delegate;
-(EKCalendar *)calendar;
-(void)setDelegate:(id<EKCalendarEditItemDelegate>)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)setCalendar:(id)arg1 store:(id)arg2 ;
-(void)layoutForWidth:(double)arg1 ;
-(id)footerViewForSection;
-(double)footerHeightForSection;
-(BOOL)saveStateToCalendar:(id)arg1 ;
-(void)applyStyleProviderToCell:(id)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 ;
-(void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(void)reset;
-(BOOL)calendarEditor:(id)arg1 shouldSelectSubitem:(unsigned long long)arg2 ;
-(id<EKStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<EKStyleProvider>)arg1 ;
@end

