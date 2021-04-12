/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@protocol ATXHeuristicDataSources
@required
-(void)preferredAppForIntentName:(id)arg1 andParameterCombination:(id)arg2 callback:(/*^block*/id)arg3;
-(void)passesWithStyle:(id)arg1 callback:(/*^block*/id)arg2;
-(void)birthdaysWithCallback:(/*^block*/id)arg1;
-(void)getEventsWithProminentFeature:(id)arg1 callback:(/*^block*/id)arg2;
-(void)hourOfDayInteractionProbabilitiesWithContact:(id)arg1 callback:(/*^block*/id)arg2;
-(void)isDNDActive:(/*^block*/id)arg1;
-(void)travelTimeInfoForEventID:(id)arg1 location:(id)arg2 expectedArrivalDate:(id)arg3 transportType:(id)arg4 localOnlyAfterFirstUpdate:(BOOL)arg5 callback:(/*^block*/id)arg6;
-(void)alarms:(/*^block*/id)arg1;
-(void)obtainOneTimeLocationWithCallback:(/*^block*/id)arg1;
-(void)contentsWithCallback:(/*^block*/id)arg1;
-(void)callNewerThan:(double)arg1 showIncoming:(BOOL)arg2 showOutgoing:(BOOL)arg3 missedOnly:(BOOL)arg4 callback:(/*^block*/id)arg5;
-(void)calendarEventsFromStartDate:(id)arg1 toEndDate:(id)arg2 callback:(/*^block*/id)arg3;
-(void)flightStatusForFlight:(id)arg1 callback:(/*^block*/id)arg2;
-(void)holidaysFromStartDate:(id)arg1 toEndDate:(id)arg2 callback:(/*^block*/id)arg3;
-(void)vipsWithCallback:(/*^block*/id)arg1;
-(void)nlEventsWithCallback:(/*^block*/id)arg1;
-(void)bestHandleForContact:(id)arg1 service:(id)arg2 callback:(/*^block*/id)arg3;
-(void)favoritesWithContacts:(id)arg1 callback:(/*^block*/id)arg2;
-(void)contactsWithIdentifiers:(id)arg1 callback:(/*^block*/id)arg2;
-(void)contactsWithName:(id)arg1 callback:(/*^block*/id)arg2;
-(void)contactsWithEmail:(id)arg1 callback:(/*^block*/id)arg2;
-(void)contactsWithPhone:(id)arg1 callback:(/*^block*/id)arg2;
-(void)alarmTimeOfDay:(/*^block*/id)arg1;
-(void)duetInteractionCountForHandles:(id)arg1 sinceDate:(id)arg2 callback:(/*^block*/id)arg3;
-(void)unreadMessagesWithLimit:(long long)arg1 callback:(/*^block*/id)arg2;
-(void)peopleSuggestionsWithCallback:(/*^block*/id)arg1;

@end

