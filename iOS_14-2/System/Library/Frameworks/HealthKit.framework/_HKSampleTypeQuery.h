/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKSampleTypeQueryClientInterface.h>

@class NSString;

@interface _HKSampleTypeQuery : HKQuery <HKSampleTypeQueryClientInterface> {

	/*^block*/id _resultsHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureClientInterface:(id)arg1 ;
+(id)clientInterfaceProtocol;
-(void)queue_deliverError:(id)arg1 ;
-(void)client_deliverSampleTypes:(id)arg1 query:(id)arg2 ;
-(id)initWithPredicate:(id)arg1 resultsHandler:(/*^block*/id)arg2 ;
@end

