/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKCorrelationQueryClientInterface.h>

@class NSDictionary, NSMutableArray, HKCorrelationType, NSString;

@interface HKCorrelationQuery : HKQuery <HKCorrelationQueryClientInterface> {

	NSDictionary* _samplePredicates;
	NSMutableArray* _correlationsPendingDelivery;
	/*^block*/id _completionHandler;
	NSDictionary* _filterDictionary;

}

@property (nonatomic,readonly) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSDictionary * filterDictionary;              //@synthesize filterDictionary=_filterDictionary - In the implementation block
@property (copy,readonly) HKCorrelationType * correlationType; 
@property (copy,readonly) NSDictionary * samplePredicates;                   //@synthesize samplePredicates=_samplePredicates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureClientInterface:(id)arg1 ;
+(BOOL)shouldApplyAdditionalPredicateForObjectType:(id)arg1 ;
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(id)completionHandler;
-(void)client_deliverCorrelations:(id)arg1 clearPendingSamples:(BOOL)arg2 isFinalBatch:(BOOL)arg3 queryUUID:(id)arg4 ;
-(id)initWithType:(id)arg1 predicate:(id)arg2 samplePredicates:(id)arg3 completion:(/*^block*/id)arg4 ;
-(HKCorrelationType *)correlationType;
-(NSDictionary *)samplePredicates;
-(NSDictionary *)filterDictionary;
-(void)queue_populateConfiguration:(id)arg1 ;
-(void)queue_validate;
@end

