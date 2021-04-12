/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class NSDate, NSTimeZone, EKCalendar;

@interface EKUIAutocompletePETTracker : NSObject {

	BOOL _hasTrackedZKWQuery;
	BOOL _hasTrackedZKWResultShown;
	BOOL _hasTrackedAutocompleteQuery;
	BOOL _hasTrackedAutocompleteResultsShown;
	BOOL _hasTrackedNLResultShown;
	BOOL _initialIsAllDay;
	unsigned long long _finalNumberOfAutocompleteResults;
	NSDate* _initialStartDate;
	NSDate* _initialEndDate;
	NSTimeZone* _initialTimeZone;
	EKCalendar* _initialCalendar;

}

@property (assign) unsigned long long finalNumberOfAutocompleteResults;              //@synthesize finalNumberOfAutocompleteResults=_finalNumberOfAutocompleteResults - In the implementation block
@property (retain) NSDate * initialStartDate;                                        //@synthesize initialStartDate=_initialStartDate - In the implementation block
@property (retain) NSDate * initialEndDate;                                          //@synthesize initialEndDate=_initialEndDate - In the implementation block
@property (retain) NSTimeZone * initialTimeZone;                                     //@synthesize initialTimeZone=_initialTimeZone - In the implementation block
@property (assign) BOOL initialIsAllDay;                                             //@synthesize initialIsAllDay=_initialIsAllDay - In the implementation block
@property (retain) EKCalendar * initialCalendar;                                     //@synthesize initialCalendar=_initialCalendar - In the implementation block
+(id)_zkwQueryEventTracker;
+(id)_nlShownTracker;
+(id)_autocompleteQueryEventTracker;
+(id)_autocompleteEngagementEventTracker;
+(id)_autocompleteSelectionTypeTracker;
+(BOOL)_trackedEventProperty:(unsigned long long)arg1 isPresentInAutocompleteResult:(id)arg2 ;
+(BOOL)_trackedEventProperty:(unsigned long long)arg1 wasOverriddenInEvent:(id)arg2 fromAutocompleteResult:(id)arg3 ;
+(BOOL)_isChangeToTrackedPropertySignificant:(unsigned long long)arg1 ;
+(id)_eventTrackerForProperty:(unsigned long long)arg1 ;
+(id)_autocompleteCompleteWinTracker;
+(id)_autocompleteStatsTracker;
-(BOOL)_trackedEventProperty:(unsigned long long)arg1 wasSetInNewEvent:(id)arg2 ;
-(void)trackZKWQuery;
-(void)trackZKWResultShown;
-(void)trackNLResultShown;
-(void)trackAutocompleteQuery;
-(void)trackAutocompleteResultsShown;
-(void)trackAutocompleteEventsOnSaveWithEvent:(id)arg1 selectedResult:(id)arg2 selectedIndex:(unsigned long long)arg3 isZKW:(BOOL)arg4 ;
-(unsigned long long)finalNumberOfAutocompleteResults;
-(void)setFinalNumberOfAutocompleteResults:(unsigned long long)arg1 ;
-(NSDate *)initialStartDate;
-(void)setInitialStartDate:(NSDate *)arg1 ;
-(NSDate *)initialEndDate;
-(void)setInitialEndDate:(NSDate *)arg1 ;
-(NSTimeZone *)initialTimeZone;
-(void)setInitialTimeZone:(NSTimeZone *)arg1 ;
-(BOOL)initialIsAllDay;
-(void)setInitialIsAllDay:(BOOL)arg1 ;
-(EKCalendar *)initialCalendar;
-(void)setInitialCalendar:(EKCalendar *)arg1 ;
@end

