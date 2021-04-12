/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/PMLAWDSessionTracker.h>

@class NSMutableArray, NSArray;

@interface PMLAWDSessionTrackerMock : PMLAWDSessionTracker {

	NSMutableArray* _internalTrackedSessions;
	NSArray* _trackedSessions;

}

@property (readonly) NSArray * trackedSessions;              //@synthesize trackedSessions=_trackedSessions - In the implementation block
-(id)initWithModel:(id)arg1 ;
-(void)postMetricId:(unsigned)arg1 message:(id)arg2 ;
-(void)clearTrackedSessions;
-(NSArray *)trackedSessions;
@end

