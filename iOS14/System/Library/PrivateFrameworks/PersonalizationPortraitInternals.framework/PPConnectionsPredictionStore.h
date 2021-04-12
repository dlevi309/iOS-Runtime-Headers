/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_queue;
@class PPConnectionsParameters, PPConnectionsPasteboardSource, PPConnectionsCalendarSource, PPConnectionsDuetSource, PPConnectionsNamedEntitySource, PPConnectionsFoundInAppsSource, PPConnectionsMetricsTracker, NSObject;

@interface PPConnectionsPredictionStore : NSObject {

	PPConnectionsParameters* _parameters;
	PPConnectionsPasteboardSource* _pasteboardSource;
	PPConnectionsCalendarSource* _calendarSource;
	PPConnectionsDuetSource* _duetSource;
	PPConnectionsNamedEntitySource* _namedEntitySource;
	PPConnectionsFoundInAppsSource* _fiaSource;
	PPConnectionsMetricsTracker* _metricsTracker;
	NSObject*<OS_dispatch_queue> _predictionQueue;

}
+(id)defaultStore;
-(id)parameters;
-(id)cutoffCalendarEventTime;
-(id)init;
-(id)calendarSource;
-(id)duetSource;
-(id)cutoffNamedEntityTime;
-(id)cutoffLocationAppLastUseTime;
-(id)cutoffPasteboardItemTime;
-(id)cutoffActivityTime;
-(id)pasteboardSource;
-(id)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 timeout:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)initWithParameters:(id)arg1 pasteboardSource:(id)arg2 calendarSource:(id)arg3 duetSource:(id)arg4 namedEntitySource:(id)arg5 fiaSource:(id)arg6 metricsTracker:(id)arg7 ;
-(void)_asyncFillLocationData:(id)arg1 group:(id)arg2 source:(id)arg3 consumer:(unsigned long long)arg4 criteria:(id)arg5 earliestDate:(id)arg6 latestDate:(id)arg7 limit:(unsigned long long)arg8 explanationSet:(id)arg9 ;
-(id)cutoffLinguisticTriggerTime;
@end

