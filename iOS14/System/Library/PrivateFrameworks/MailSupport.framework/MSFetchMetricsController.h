/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/


@protocol MSFetchMetricsControllerDataSource;
@interface MSFetchMetricsController : NSObject {

	double _startTime;
	id<MSFetchMetricsControllerDataSource> _dataSource;

}

@property (nonatomic,__weak,readonly) id<MSFetchMetricsControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id)initWithDataSource:(id)arg1 ;
-(void)start;
-(id<MSFetchMetricsControllerDataSource>)dataSource;
-(void)stopAndSubmitWithOptions:(unsigned long long)arg1 fetchSize:(unsigned long long)arg2 ;
@end

