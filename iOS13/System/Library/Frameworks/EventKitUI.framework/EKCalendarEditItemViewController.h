/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <libobjc.A.dylib/EKCalendarChooserDelegate.h>

@class EKEventStore, EKCalendarChooser, EKCalendar, NSString;

@interface EKCalendarEditItemViewController : EKEditItemViewController <EKCalendarChooserDelegate> {

	EKEventStore* _store;
	EKCalendarChooser* _chooser;
	EKCalendar* _selectedCalendar;
	unsigned long long _entityType;
	BOOL _limitToSource;
	BOOL _onlyShowUnmanagedSources;

}

@property (nonatomic,retain) EKCalendar * selectedCalendar; 
@property (assign,nonatomic) BOOL limitToSource;                         //@synthesize limitToSource=_limitToSource - In the implementation block
@property (assign,nonatomic) BOOL onlyShowUnmanagedSources;              //@synthesize onlyShowUnmanagedSources=_onlyShowUnmanagedSources - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(CGSize)preferredContentSize;
-(id)initWithFrame:(CGRect)arg1 store:(id)arg2 styleProvider:(id)arg3 entityType:(unsigned long long)arg4 ;
-(void)setSelectedCalendar:(EKCalendar *)arg1 ;
-(void)setLimitToSource:(BOOL)arg1 ;
-(void)setOnlyShowUnmanagedSources:(BOOL)arg1 ;
-(EKCalendar *)selectedCalendar;
-(id)initWithFrame:(CGRect)arg1 store:(id)arg2 styleProvider:(id)arg3 ;
-(BOOL)onlyShowUnmanagedSources;
-(void)calendarChooserSelectionDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 store:(id)arg2 ;
-(BOOL)limitToSource;
@end

