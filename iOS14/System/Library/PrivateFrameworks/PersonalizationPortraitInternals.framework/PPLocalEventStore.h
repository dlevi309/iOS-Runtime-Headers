/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/PPFeedbackAccepting.h>

@class PPEventCache, PPEventStorage, _PASNotificationToken;

@interface PPLocalEventStore : NSObject <PPFeedbackAccepting> {

	PPEventCache* _eventCache;
	PPEventStorage* _storage;
	_PASNotificationToken* _assetUpdateNotificationToken;

}
+(id)defaultStore;
-(void)clearCaches;
-(void)_registerForNotifications;
-(id)init;
-(id)eventsFromDate:(id)arg1 toDate:(id)arg2 ;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)_scoreForSecondsRelativeToNow:(double)arg1 ;
-(id)eventHighlightForEvent:(id)arg1 usingScorer:(id)arg2 date:(id)arg3 rankingOptions:(int)arg4 loadedFromEventKit:(BOOL*)arg5 ;
-(id)_recordForEvent:(id)arg1 ;
-(id)eventMetaDataFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)eventsInRange:(NSRange)arg1 ;
-(id)_recordForEKEvent:(id)arg1 ;
-(id)tripEventsWithQuery:(id)arg1 ;
-(BOOL)iterEventNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)eventNameRecordsForClient:(id)arg1 error:(id*)arg2 ;
-(void)_clearAndReloadAllCachesAndData;
-(id)highlightedEventsWithQuery:(id)arg1 ;
-(void)_setupCalendarVisibilityManager;
-(void)_preloadEvents;
-(id)eventWithExternalID:(id)arg1 ;
-(id)suggestedEventsWithQuery:(id)arg1 ;
-(id)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 ;
-(id)_recordForDeletedEKEventWithChangeIdentifier:(id)arg1 ;
-(id)scoredEventsWithQuery:(id)arg1 ;
-(id)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
@end

