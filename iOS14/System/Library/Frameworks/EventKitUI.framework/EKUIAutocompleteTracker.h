/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class NSDate, NSTimeZone, EKCalendar;

@interface EKUIAutocompleteTracker : NSObject {

	BOOL _hasTrackedZKWQuery;
	BOOL _hasTrackedZKWResultShown;
	BOOL _hasTrackedAutocompleteQuery;
	BOOL _hasTrackedAutocompleteResultsShown;
	BOOL _hasTrackedNLResultShown;
	BOOL _hasFinalizedTracking;
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
+(BOOL)_trackedEventProperty:(unsigned long long)arg1 isPresentInAutocompleteResult:(id)arg2 ;
+(BOOL)_trackedEventProperty:(unsigned long long)arg1 wasOverriddenInEvent:(id)arg2 fromAutocompleteResult:(id)arg3 ;
+(BOOL)_isChangeToTrackedPropertySignificant:(unsigned long long)arg1 ;
+(id)propertyName:(unsigned long long)arg1 ;
-(void)_augmentPayload:(id)arg1 withEvent:(id)arg2 selectedResult:(id)arg3 selectedIndex:(unsigned long long)arg4 isZKW:(BOOL)arg5 ;
-(BOOL)_trackedEventProperty:(unsigned long long)arg1 wasSetInNewEvent:(id)arg2 ;
-(void)trackZKWQuery;
-(void)trackZKWResultShown;
-(void)trackNLResultShown;
-(void)trackAutocompleteQuery;
-(void)trackAutocompleteResultsShown;
-(void)finalizeAutocompleteTrackingOnSave:(BOOL)arg1 withEvent:(id)arg2 selectedResult:(id)arg3 selectedIndex:(unsigned long long)arg4 isZKW:(BOOL)arg5 ;
-(unsigned long long)finalNumberOfAutocompleteResults;
-(void)setFinalNumberOfAutocompleteResults:(unsigned long long)arg1 ;
-(void)setInitialStartDate:(NSDate *)arg1 ;
-(void)setInitialEndDate:(NSDate *)arg1 ;
-(NSTimeZone *)initialTimeZone;
-(void)setInitialTimeZone:(NSTimeZone *)arg1 ;
-(BOOL)initialIsAllDay;
-(void)setInitialIsAllDay:(BOOL)arg1 ;
-(EKCalendar *)initialCalendar;
-(void)setInitialCalendar:(EKCalendar *)arg1 ;
-(NSDate *)initialStartDate;
-(NSDate *)initialEndDate;
@end
