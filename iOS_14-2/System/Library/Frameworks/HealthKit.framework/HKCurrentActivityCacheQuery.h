/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKCurrentActivityCacheQueryClientInterface.h>

@class NSDateComponents;

@interface HKCurrentActivityCacheQuery : HKQuery <HKCurrentActivityCacheQueryClientInterface> {

	NSDateComponents* _statisticsIntervalComponents;
	/*^block*/id _updateHandler;

}

@property (nonatomic,copy) id updateHandler;              //@synthesize updateHandler=_updateHandler - In the implementation block
+(void)configureClientInterface:(id)arg1 ;
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(id)updateHandler;
-(void)queue_populateConfiguration:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)client_deliverQueryResult:(id)arg1 queryUUID:(id)arg2 ;
-(id)initWithStatisticsIntervalComponents:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)queue_validate;
@end

