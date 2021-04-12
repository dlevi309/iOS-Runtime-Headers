/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class _HDDataFaker;

@interface HDDemoManager : NSObject {

	_HDDataFaker* _faker;

}
-(void)stopFakingData;
-(void)startFakingDataForActivityType:(long long)arg1 speed:(id)arg2 objectHandler:(/*^block*/id)arg3 ;
-(void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 objectHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isProvidingData;
@end

