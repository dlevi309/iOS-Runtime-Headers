/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSDate;

@interface ATXNotificationsContentAnalyzer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _ppnames;
	NSArray* _ppscores;
	NSDate* _lastUpdated;

}
-(id)init;
-(BOOL)isExpired;
-(void)updateAnalyzers;
-(id)analyzeContent:(id)arg1 ;
@end

