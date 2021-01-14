/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/PMLAWDSessionTracker.h>

@class NSMutableArray, NSArray;

@interface PMLAWDSessionTrackerMock : PMLAWDSessionTracker {

	NSMutableArray* _internalTrackedSessions;
	NSArray* _trackedSessions;

}

@property (nonatomic,readonly) NSArray * trackedSessions;              //@synthesize trackedSessions=_trackedSessions - In the implementation block
-(id)initWithModel:(id)arg1 ;
-(void)postMetricId:(unsigned)arg1 message:(id)arg2 ;
-(void)clearTrackedSessions;
-(NSArray *)trackedSessions;
@end

