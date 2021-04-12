/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKMCDaySummaryObserverQueryClientInterface.h>

@class NSString;

@interface HKMCDaySummaryObserverQuery : HKQuery <HKMCDaySummaryObserverQueryClientInterface> {

	/*^block*/id _updateHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)queue_validate;
-(void)client_deliverUpdateWithQueryUUID:(id)arg1 ;
@end

