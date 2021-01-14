/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ATXHeuristicDataSources.h>

@class ATXHeuristicDevice, NSXPCListener, NSXPCListenerEndpoint, NSString;

@interface ATXHeuristicDataSourcesServer : NSObject <NSXPCListenerDelegate, ATXHeuristicDataSources> {

	ATXHeuristicDevice* _device;
	NSXPCListener* _listener;

}

@property (nonatomic,readonly) NSXPCListenerEndpoint * listenerEndpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 ;
-(void)contactsWithIdentifiers:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)callNewerThan:(double)arg1 showIncoming:(BOOL)arg2 showOutgoing:(BOOL)arg3 missedOnly:(BOOL)arg4 callback:(/*^block*/id)arg5 ;
-(void)peopleSuggestionsWithCallback:(/*^block*/id)arg1 ;
-(void)unreadMessagesWithLimit:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(void)holidaysFromStartDate:(id)arg1 toEndDate:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)init;
-(void)bestAppSuggestionWithCallback:(/*^block*/id)arg1 ;
-(void)vipsWithCallback:(/*^block*/id)arg1 ;
-(void)appLaunchCountForBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 limit:(unsigned long long)arg4 callback:(/*^block*/id)arg5 ;
-(void)alarmTimeOfDay:(/*^block*/id)arg1 ;
-(void)duetInteractionCountForHandles:(id)arg1 sinceDate:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)contactsWithPhone:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)visibleCalendarsWithCallback:(/*^block*/id)arg1 ;
-(void)obtainOneTimeLocationWithCallback:(/*^block*/id)arg1 ;
-(void)preferredAppForIntentName:(id)arg1 andParameterCombination:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)alarms:(/*^block*/id)arg1 ;
-(void)hourOfDayInteractionProbabilitiesWithContact:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)contactsWithName:(id)arg1 callback:(/*^block*/id)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)fetchRemindersObjectGraphFromStartDate:(id)arg1 toEndDate:(id)arg2 incompleteRemindersOnly:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)contactsWithEmail:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)isDNDActive:(/*^block*/id)arg1 ;
-(void)birthdaysWithCallback:(/*^block*/id)arg1 ;
-(void)fetchWidgetMetadataForAppBundleIds:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)flightStatusForFlight:(id)arg1 callback:(/*^block*/id)arg2 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(void)nlEventsWithCallback:(/*^block*/id)arg1 ;
-(void)timeIntervalSinceUserWakeupWithCallback:(/*^block*/id)arg1 ;
-(void)batteryInformationWithCallback:(/*^block*/id)arg1 ;
-(void)passesWithStyle:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)contentsWithCallback:(/*^block*/id)arg1 ;
-(void)calendarEventsFromStartDate:(id)arg1 toEndDate:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)favoritesWithContacts:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)bestHandleForContact:(id)arg1 service:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)getEventsWithProminentFeature:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)travelTimeInfoForEventID:(id)arg1 location:(id)arg2 expectedArrivalDate:(id)arg3 transportType:(id)arg4 localOnlyAfterFirstUpdate:(BOOL)arg5 callback:(/*^block*/id)arg6 ;
-(void)fetchRecentWorkoutStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

