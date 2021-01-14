/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/EKCalendarEditItemDelegate.h>
#import <libobjc.A.dylib/EKUIManagedViewController.h>

@protocol EKCalendarEditorDelegate, EKStyleProvider;
@class UITableView, NSArray, EKCalendarShareesEditItem, EKCalendarColorEditItem, EKSource, EKEventStore, EKCalendar, NSString;

@interface EKCalendarEditor : UIViewController <EKCalendarEditItemDelegate, EKUIManagedViewController> {

	UITableView* _tableView;
	NSArray* _editItems;
	EKCalendarShareesEditItem* _shareesEditItem;
	EKCalendarColorEditItem* _colorEditItem;
	unsigned long long _entityType;
	EKSource* _limitedToSource;
	CGSize _preferredContentSize;
	BOOL _isNewCalendar;
	EKEventStore* _eventStore;
	EKCalendar* _calendar;
	id<EKCalendarEditorDelegate> _delegate;
	id<EKStyleProvider> _styleProvider;

}

@property (nonatomic,retain) EKEventStore * eventStore;                                 //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,retain) EKCalendar * calendar;                                     //@synthesize calendar=_calendar - In the implementation block
@property (assign,nonatomic,__weak) id<EKCalendarEditorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isNewCalendar;                                        //@synthesize isNewCalendar=_isNewCalendar - In the implementation block
@property (assign,nonatomic,__weak) id<EKStyleProvider> styleProvider;                  //@synthesize styleProvider=_styleProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_eventStoreChanged:(id)arg1 ;
-(EKEventStore *)eventStore;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)_presentValidationAlert:(id)arg1 ;
-(void)_localeChanged;
-(id<EKCalendarEditorDelegate>)delegate;
-(id)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(EKCalendar *)calendar;
-(void)cancel:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(void)_deleteClicked:(id)arg1 ;
-(void)done:(id)arg1 ;
-(BOOL)wantsManagement;
-(BOOL)canManagePresentationStyle;
-(void)setDelegate:(id<EKCalendarEditorDelegate>)arg1 ;
-(CGSize)preferredContentSize;
-(id)owningNavigationController;
-(void)calendarItemStartedEditing:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)isModalInPresentation;
-(id)_editItems;
-(void)setupForCalendar;
-(BOOL)_shouldShowDeleteButton;
-(void)_deleteCalendar;
-(int)sectionForCalendarEditItem:(id)arg1 ;
-(void)setIsNewCalendar:(BOOL)arg1 ;
-(id)initWithCalendar:(id)arg1 eventStore:(id)arg2 entityType:(unsigned long long)arg3 limitedToSource:(id)arg4 ;
-(BOOL)isNewCalendar;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<EKStyleProvider>)styleProvider;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)setStyleProvider:(id<EKStyleProvider>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(void)saveChanges;
@end

