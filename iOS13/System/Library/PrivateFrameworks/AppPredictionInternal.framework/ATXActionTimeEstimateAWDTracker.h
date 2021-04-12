/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class _ATXDuetHelper;

@interface ATXActionTimeEstimateAWDTracker : NSObject {

	_ATXDuetHelper* _duetHelper;

}
-(id)init;
-(id)initWithDuetHelper:(id)arg1 ;
-(void)logActionTimeEstimates;
-(void)logActionTimeEstimatesWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_getActionKeyFor:(id)arg1 ;
-(id)_effectiveStartDateFor:(id)arg1 ;
-(id)_effectiveEndDateFor:(id)arg1 ;
-(id)getTimeEstimatesFor:(id)arg1 forAppLaunches:(id)arg2 withActionType:(unsigned long long)arg3 ;
-(id)_createTimeEstimateContainers:(id)arg1 withSessionLengths:(id)arg2 withSessionIndices:(id)arg3 withParameterSet:(id)arg4 withLaunchReasons:(id)arg5 withNoMatchCount:(id)arg6 forActionType:(unsigned long long)arg7 ;
-(void)postTimeEstimates:(id)arg1 ;
-(id)_defaultActionTimeEstimateTimestampPath;
-(id)_queryStartTime;
-(id)_readTimestamp;
-(void)_writeTimestamp:(id)arg1 ;
@end

