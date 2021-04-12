/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKDateRangeQueryClientInterface.h>

@class NSString;

@interface _HKDateRangeQuery : HKQuery <HKDateRangeQueryClientInterface> {

	/*^block*/id _handler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureClientInterface:(id)arg1 ;
+(id)clientInterfaceProtocol;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(id)initWithDateIntervalHandler:(/*^block*/id)arg1 ;
-(void)client_deliverDateIntervals:(id)arg1 forQuery:(id)arg2 ;
-(void)queue_deliverError:(id)arg1 ;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)queue_validate;
@end

