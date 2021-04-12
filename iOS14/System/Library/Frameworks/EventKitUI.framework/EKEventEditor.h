/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditor.h>
#import <libobjc.A.dylib/EKEventAutocompleteResultsEditItemDelegate.h>

@protocol EKUIAutocompletePendingSearchProtocol;
@class EKEventDateEditItem, EKEventAttendeesEditItem, EKEventAutocompleteResultsEditItem, EKCalendarItemTitleInlineEditItem, EKCalendarItemLocationInlineEditItem, EKCalendarItemCalendarEditItem, EKCalendarItemAlarmEditItem, EKEventURLAndNotesInlineEditItem, EKEventAttachmentsEditItem, NSTimer, NSString, EKUIAutocompleteSearchResult, EKUIAutocompleteTracker, UIColor, EKEvent;

@interface EKEventEditor : EKCalendarItemEditor <EKEventAutocompleteResultsEditItemDelegate> {

	EKEventDateEditItem* _dateItem;
	EKEventAttendeesEditItem* _attendeesEditItem;
	EKEventAutocompleteResultsEditItem* _autocompleteEditItem;
	EKCalendarItemTitleInlineEditItem* _titleInlineEditItem;
	EKCalendarItemLocationInlineEditItem* _locationInlineEditItem;
	EKCalendarItemCalendarEditItem* _calendarEditItem;
	EKCalendarItemAlarmEditItem* _alarmEditItem;
	EKEventURLAndNotesInlineEditItem* _notesEditItem;
	EKEventAttachmentsEditItem* _attachmentsEditItem;
	BOOL _shouldAutocomplete;
	id<EKUIAutocompletePendingSearchProtocol> _pendingSearch;
	NSTimer* _autocompleteTimer;
	NSString* _autocompleteSearchString;
	BOOL _isTransitioning;
	BOOL _autocompleteResultsVisible;
	unsigned long long _focusOnAppearanceTarget;
	BOOL _selectOnFocus;
	EKUIAutocompleteSearchResult* _selectedAutocompleteResult;
	unsigned long long _selectedAutocompleteResultIndex;
	EKUIAutocompleteSearchResult* _zeroKeywordResult;
	EKUIAutocompleteSearchResult* _naturalLanguageResult;
	BOOL _hasShownZeroKeywordResult;
	BOOL _hasShownNaturalLanguageResult;
	EKUIAutocompleteTracker* _autocompleteTracker;
	BOOL _showAttachments;
	UIColor* _backgroundColor;
	NSString* _suggestionKey;

}

@property (nonatomic,retain) NSString * suggestionKey;               //@synthesize suggestionKey=_suggestionKey - In the implementation block
@property (nonatomic,retain) EKEvent * event; 
@property (assign,nonatomic) BOOL showAttachments;                   //@synthesize showAttachments=_showAttachments - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_now;
+(void)_applyTimeToAutocompleteResults:(id)arg1 usingCurrentStartDate:(id)arg2 currentEndDate:(id)arg3 timeImplicitlySet:(BOOL)arg4 ;
+(void)_modifyCurrentEvent:(id)arg1 withAutocompleteResult:(id)arg2 ;
+(id)_copyAlarmsForAutocompleteFromResult:(id)arg1 ;
+(id)_copyAttendeesForAutocompleteFromResult:(id)arg1 ;
+(id)defaultTitleForCalendarItem;
+(Class)_SGSuggestionsServiceClass;
-(void)viewDidAppear:(BOOL)arg1 ;
-(unsigned long long)entityType;
-(NSString *)suggestionKey;
-(BOOL)hasAttachmentChanges;
-(void)_focusAppearanceTarget;
-(void)_updateTitleEditItemSeparatorVisibility;
-(void)refreshInvitees;
-(void)refreshLocation;
-(id)_calendarItemIndexSet;
-(void)prepareEditItems;
-(void)_scheduleAutocompleteSearchWithString:(id)arg1 ;
-(void)_showAutocompleteResults;
-(void)_hideAndCancelAutocompleteResults;
-(id)_orderedEditItems;
-(void)_cancelPendingAutocompleteAndCleanup;
-(void)_scheduleAutocompleteTimerIfNeeded;
-(void)_beginAutocompleteSearch:(id)arg1 ;
-(void)_setAutocompleteResultsVisible:(BOOL)arg1 ;
-(void)reloadTableViewSectionsForDates:(BOOL)arg1 invitees:(BOOL)arg2 location:(BOOL)arg3 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(BOOL)attachmentsModifiedOnRecurrence;
-(id)attachmentsModifiedEvent;
-(BOOL)saveCalendarItemWithSpan:(long long)arg1 error:(id*)arg2 ;
-(id)_nameForDeleteButton;
-(void)setupDeleteButton;
-(id)defaultAlertTitle;
-(id)notificationNamesForLocaleChange;
-(void)_copyEventForPossibleRevert;
-(void)_revertEvent;
-(id)_viewForSheet;
-(void)_setEventTitleForTestingAutocomplete:(id)arg1 ;
-(CGSize)preferredContentSize;
-(BOOL)shouldAutorotate;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(id)_editItems;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)autocompleteResultsEditItemDidShowResults:(id)arg1 ;
-(void)autocompleteResultsEditItemDidHideResults:(id)arg1 ;
-(void)setSuggestionKey:(NSString *)arg1 ;
-(void)refreshStartAndEndDates;
-(void)editItemTextChanged:(id)arg1 ;
-(void)editItemDidStartEditing:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)autocompleteResultsEditItem:(id)arg1 resultSelected:(id)arg2 ;
-(BOOL)showAttachments;
-(void)setShowAttachments:(BOOL)arg1 ;
-(void)focus:(unsigned long long)arg1 select:(BOOL)arg2 ;
-(id)preferredTitle;
-(BOOL)hasUnsavedChanges;
@end

