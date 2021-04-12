/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)queue_validate;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)client_deliverQueryResult:(id)arg1 queryUUID:(id)arg2 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(id)initWithStatisticsIntervalComponents:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
@end

