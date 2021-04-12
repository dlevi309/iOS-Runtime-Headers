/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PPConnectionsSource.h>
#import <libobjc.A.dylib/PPConnectionsLocationSource.h>

@class PPLocalEventStore, NSString;

@interface PPConnectionsCalendarSource : PPConnectionsSource <PPConnectionsLocationSource> {

	PPLocalEventStore* _localEventStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)locationNameFromEvent:(id)arg1 ;
+(id)locationValueFromEvent:(id)arg1 ;
+(id)locationLabelFromEvent:(id)arg1 ;
-(id)init;
-(id)upcomingCalendarEventsOfInterestFrom:(id)arg1 lookaheadTime:(double)arg2 ;
-(id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6 ;
-(BOOL)isCalendarEventEligibleForLocationPrediction:(id)arg1 ;
-(id)identifier;
-(id)ekEventWithExternalID:(id)arg1 ;
@end

