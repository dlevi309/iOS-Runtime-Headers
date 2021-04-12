/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/PMLAWDAvailableSessionsTracker.h>

@class NSMutableArray, NSArray;

@interface PMLAWDAvailableSessionsTrackerMock : PMLAWDAvailableSessionsTracker {

	NSMutableArray* _internalTrackedStats;
	NSArray* _trackedStats;

}

@property (readonly) NSArray * trackedStats;              //@synthesize trackedStats=_trackedStats - In the implementation block
-(id)init;
-(void)postMetricId:(unsigned)arg1 message:(id)arg2 ;
-(id)recentStatsForModelName:(id)arg1 ;
-(void)triggerAWDMetricRequest;
-(void)clearTrackedMessages;
-(NSArray *)trackedStats;
@end

