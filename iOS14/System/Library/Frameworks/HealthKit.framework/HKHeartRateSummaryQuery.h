/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKHeartRateSummaryQueryClientInterface.h>

@class NSString;

@interface HKHeartRateSummaryQuery : HKQuery <HKHeartRateSummaryQueryClientInterface> {

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
-(void)client_deliverSummary:(id)arg1 queryUUID:(id)arg2 ;
-(void)queue_validate;
@end

