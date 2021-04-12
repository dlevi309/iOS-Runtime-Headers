/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/PPFeedbackAccepting.h>

@class PPEventCache, PPEventStorage, _PASNotificationToken, PPMFeedbackRegistered, PPM2FeedbackPortraitRegistered;

@interface PPLocalEventStore : NSObject <PPFeedbackAccepting> {

	PPEventCache* _eventCache;
	PPEventStorage* _storage;
	_PASNotificationToken* _assetUpdateNotificationToken;
	PPMFeedbackRegistered* _feedbackTracker;
	PPM2FeedbackPortraitRegistered* _feedbackTracker2;

}
+(id)defaultStore;
-(id)init;
-(void)dealloc;
-(void)clearCaches;
-(void)_registerForNotifications;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)iterEventNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)eventWithExternalID:(id)arg1 ;
-(void)_preloadEvents;
-(id)eventNameRecordsForClient:(id)arg1 error:(id*)arg2 ;
-(id)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(id)eventsInRange:(NSRange)arg1 ;
-(id)_recordForEKEvent:(id)arg1 ;
-(id)_recordForEvent:(id)arg1 ;
-(id)_recordForDeletedEKEventWithChangeIdentifier:(id)arg1 ;
-(double)_scoreForSecondsRelativeToNow:(double)arg1 ;
-(void)_clearAndReloadAllCachesAndData;
-(void)_setupCalendarVisibilityManager;
-(id)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 ;
-(id)eventHighlightForEvent:(id)arg1 usingScorer:(id)arg2 date:(id)arg3 rankingOptions:(int)arg4 loadedFromEventKit:(BOOL*)arg5 ;
-(id)eventMetaDataFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)eventsFromDate:(id)arg1 toDate:(id)arg2 ;
@end

