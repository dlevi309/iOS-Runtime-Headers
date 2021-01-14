/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOAnalyticsPipelineReportOperation.h>

@class NSString, NSNumber;

@interface GEOAnalyticsPipelineDailyUsageCountsOperation : GEOAnalyticsPipelineReportOperation {

	int _countType;
	NSString* _usageString;
	NSNumber* _usageBool;
	NSString* _appId;

}
-(id)initWithDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 remoteProxy:(id)arg5 runQueue:(id)arg6 completionQueue:(id)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)main;
@end

