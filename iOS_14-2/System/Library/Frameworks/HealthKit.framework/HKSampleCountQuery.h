/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKSampleCountQueryClientInterface.h>

@class NSSet, NSString;

@interface HKSampleCountQuery : HKQuery <HKSampleCountQueryClientInterface> {

	/*^block*/id _resultsHandler;
	NSSet* _sampleQueryDescriptions;

}

@property (nonatomic,copy,readonly) NSSet * sampleQueryDescriptions;              //@synthesize sampleQueryDescriptions=_sampleQueryDescriptions - In the implementation block
@property (nonatomic,copy,readonly) NSSet * sampleTypes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureClientInterface:(id)arg1 ;
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(NSSet *)sampleTypes;
-(void)queue_populateConfiguration:(id)arg1 ;
-(id)initWithSampleQueryDescriptions:(id)arg1 resultsHandler:(/*^block*/id)arg2 ;
-(id)initWithSampleTypes:(id)arg1 predicate:(id)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(void)client_deliverSampleCountDictionary:(id)arg1 forQuery:(id)arg2 ;
-(id)initWithSampleType:(id)arg1 predicate:(id)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(NSSet *)sampleQueryDescriptions;
-(void)queue_validate;
@end

