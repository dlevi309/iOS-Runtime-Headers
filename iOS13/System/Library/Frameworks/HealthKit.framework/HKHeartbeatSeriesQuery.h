/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKHeartbeatSeriesQueryClientInterface.h>

@class HKHeartbeatSeriesSample, NSString;

@interface HKHeartbeatSeriesQuery : HKQuery <HKHeartbeatSeriesQueryClientInterface> {

	/*^block*/id _dataHandler;
	HKHeartbeatSeriesSample* _heartbeatSeries;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
-(void)queue_deliverError:(id)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)_enumerateHeartbeatsWithHandler:(/*^block*/id)arg1 ;
-(void)client_deliverHeartbeats;
-(id)initWithHeartbeatSeries:(id)arg1 dataHandler:(/*^block*/id)arg2 ;
@end

