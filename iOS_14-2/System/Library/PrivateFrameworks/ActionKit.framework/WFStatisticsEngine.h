/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface WFStatisticsEngine : NSObject {

	NSObject*<OS_dispatch_queue> _statisticsQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> statisticsQueue;              //@synthesize statisticsQueue=_statisticsQueue - In the implementation block
-(id)init;
-(void)applyOperation:(long long)arg1 onNumbers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)applyOperation:(long long)arg1 onStatisticsSampleProviders:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)asyncApplyNSExpressionFunction:(id)arg1 data:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)averageOfValues:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)minimumOfValues:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)maximumOfValues:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sumOfValues:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)medianOfValues:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)modeOfValues:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)rangeOfValues:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)standardDeviationOfValues:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)statisticsQueue;
-(void)setStatisticsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

