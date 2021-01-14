/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <libobjc.A.dylib/EKCalendarChooserDelegate.h>

@class EKEventStore, EKCalendarChooser, EKCalendar, EKEvent, NSString;

@interface EKCalendarEditItemViewController : EKEditItemViewController <EKCalendarChooserDelegate> {

	EKEventStore* _store;
	EKCalendarChooser* _chooser;
	unsigned long long _entityType;
	EKCalendar* _selectedCalendar;
	BOOL _limitToSource;
	BOOL _onlyShowUnmanagedSources;
	EKEvent* _event;

}

@property (nonatomic,retain) EKCalendar * selectedCalendar; 
@property (assign,nonatomic) BOOL limitToSource;                         //@synthesize limitToSource=_limitToSource - In the implementation block
@property (assign,nonatomic,__weak) EKEvent * event;                     //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) BOOL onlyShowUnmanagedSources;              //@synthesize onlyShowUnmanagedSources=_onlyShowUnmanagedSources - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 store:(id)arg2 styleProvider:(id)arg3 entityType:(unsigned long long)arg4 ;
-(void)setSelectedCalendar:(EKCalendar *)arg1 ;
-(void)setLimitToSource:(BOOL)arg1 ;
-(void)setOnlyShowUnmanagedSources:(BOOL)arg1 ;
-(EKCalendar *)selectedCalendar;
-(CGSize)preferredContentSize;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 store:(id)arg2 styleProvider:(id)arg3 ;
-(BOOL)onlyShowUnmanagedSources;
-(void)calendarChooserSelectionDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 store:(id)arg2 ;
-(BOOL)limitToSource;
-(void)loadView;
@end

