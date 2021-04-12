/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit
*/


@class NSURLSessionDataTask, NPTMetricResult, NSURLSessionTaskMetrics;

@interface NPTTaskMetrics : NSObject {

	NSURLSessionDataTask* _task;
	NPTMetricResult* _results;
	NSURLSessionTaskMetrics* _taskMetrics;

}

@property (nonatomic,retain) NSURLSessionDataTask * task;                        //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NPTMetricResult * results;                          //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSURLSessionTaskMetrics * taskMetrics;              //@synthesize taskMetrics=_taskMetrics - In the implementation block
-(void)setResults:(NPTMetricResult *)arg1 ;
-(void)setTaskMetrics:(NSURLSessionTaskMetrics *)arg1 ;
-(NSURLSessionTaskMetrics *)taskMetrics;
-(NPTMetricResult *)results;
-(NSURLSessionDataTask *)task;
-(id)init;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
@end

