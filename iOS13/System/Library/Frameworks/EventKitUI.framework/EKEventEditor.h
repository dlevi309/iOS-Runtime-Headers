/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditor.h>
#import <libobjc.A.dylib/EKEventAutocompleteResultsEditItemDelegate.h>

@protocol EKUIAutocompletePendingSearchProtocol;
@class EKEventDateEditItem, EKEventAttendeesEditItem, EKEventAutocompleteResultsEditItem, EKCalendarItemTitleInlineEditItem, EKCalendarItemLocationInlineEditItem, EKCalendarItemCalendarEditItem, EKCalendarItemAlarmEditItem, EKEventURLAndNotesInlineEditItem, EKEventAttachmentsEditItem, NSTimer, NSString, EKUIAutocompleteSearchResult, EKUIAutocompletePETTracker, UIColor, EKEvent;

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
	EKUIAutocompletePETTracker* _autocompletePETTracker;
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
+(Class)_SGSuggestionsServiceClass;
+(id)defaultTitleForCalendarItem;
+(void)_applyTimeToAutocompleteResults:(id)arg1 usingCurrentStartDate:(id)arg2 currentEndDate:(id)arg3 timeImplicitlySet:(BOOL)arg4 ;
+(void)_modifyCurrentEvent:(id)arg1 withAutocompleteResult:(id)arg2 ;
+(id)_copyAlarmsForAutocompleteFromResult:(id)arg1 ;
+(id)_copyAttendeesForAutocompleteFromResult:(id)arg1 ;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)hasUnsavedChanges;
-(unsigned long long)entityType;
-(void)autocompleteResultsEditItemDidShowResults:(id)arg1 ;
-(void)autocompleteResultsEditItemDidHideResults:(id)arg1 ;
-(void)autocompleteResultsEditItem:(id)arg1 resultSelected:(id)arg2 ;
-(void)editItemDidStartEditing:(id)arg1 ;
-(void)editItemTextChanged:(id)arg1 ;
-(void)setSuggestionKey:(NSString *)arg1 ;
-(void)refreshStartAndEndDates;
-(BOOL)showAttachments;
-(void)setShowAttachments:(BOOL)arg1 ;
-(void)focus:(unsigned long long)arg1 select:(BOOL)arg2 ;
-(NSString *)suggestionKey;
-(id)_editItems;
-(void)_focusAppearanceTarget;
-(id)preferredTitle;
-(void)_updateTitleEditItemSeparatorVisibility;
-(void)refreshInvitees;
-(void)refreshLocation;
-(void)prepareEditItems;
-(void)_scheduleAutocompleteSearchWithString:(id)arg1 ;
-(void)_showAutocompleteResults;
-(void)_hideAndCancelAutocompleteResults;
-(void)_cancelPendingAutocompleteAndCleanup;
-(void)_scheduleAutocompleteTimerIfNeeded;
-(void)_beginAutocompleteSearch:(id)arg1 ;
-(void)_setAutocompleteResultsVisible:(BOOL)arg1 ;
-(id)_calendarItemIndexSet;
-(id)_orderedEditItems;
-(BOOL)hasAttachmentChanges;
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
@end

