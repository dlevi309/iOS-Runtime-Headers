/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/


@protocol MSFetchMetricsControllerDataSource;
@interface MSFetchMetricsController : NSObject {

	double _startTime;
	id<MSFetchMetricsControllerDataSource> _dataSource;

}

@property (nonatomic,__weak,readonly) id<MSFetchMetricsControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)start;
-(id)initWithDataSource:(id)arg1 ;
-(id<MSFetchMetricsControllerDataSource>)dataSource;
-(void)stopAndSubmitWithOptions:(unsigned long long)arg1 fetchSize:(unsigned long long)arg2 ;
@end

