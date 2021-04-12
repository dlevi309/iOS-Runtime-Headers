/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/


@class TBDataSourceMediator;

@interface WiFi3BarsTileCacheObserver : NSObject {

	TBDataSourceMediator* _dataSourceMediator;

}

@property (nonatomic,retain) TBDataSourceMediator * dataSourceMediator;              //@synthesize dataSourceMediator=_dataSourceMediator - In the implementation block
-(id)initWithDataSourceMediator:(id)arg1 ;
-(TBDataSourceMediator *)dataSourceMediator;
-(void)setDataSourceMediator:(TBDataSourceMediator *)arg1 ;
-(void)_scheduleXPCActivity;
-(void)_submitCacheAvailabilityMetric;
@end

