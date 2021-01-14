/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKSampleQueryClientInterface.h>

@class NSArray, NSMutableArray, NSString;

@interface HKSampleQuery : HKQuery <HKSampleQueryClientInterface> {

	unsigned long long _limit;
	BOOL _includeAutomaticTimeZones;
	NSArray* _sortDescriptors;
	NSMutableArray* _samplesPendingDelivery;
	BOOL _includeContributorInformation;
	/*^block*/id _resultHandler;

}

@property (nonatomic,copy,readonly) id resultHandler;                         //@synthesize resultHandler=_resultHandler - In the implementation block
@property (assign,nonatomic) BOOL includeAutomaticTimeZones;                  //@synthesize includeAutomaticTimeZones=_includeAutomaticTimeZones - In the implementation block
@property (assign,nonatomic) BOOL includeContributorInformation;              //@synthesize includeContributorInformation=_includeContributorInformation - In the implementation block
@property (readonly) unsigned long long limit; 
@property (copy,readonly) NSArray * sortDescriptors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureClientInterface:(id)arg1 ;
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
-(id)resultHandler;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(unsigned long long)limit;
-(void)queue_deliverError:(id)arg1 ;
-(id)initWithSampleType:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(/*^block*/id)arg5 ;
-(void)setIncludeContributorInformation:(BOOL)arg1 ;
-(void)client_deliverSamples:(id)arg1 clearPendingSamples:(BOOL)arg2 isFinalBatch:(BOOL)arg3 queryUUID:(id)arg4 ;
-(NSArray *)sortDescriptors;
-(void)queue_populateConfiguration:(id)arg1 ;
-(BOOL)_prepareSamplesForDelivery:(id)arg1 error:(id*)arg2 ;
-(BOOL)includeContributorInformation;
-(void)setIncludeAutomaticTimeZones:(BOOL)arg1 ;
-(BOOL)includeAutomaticTimeZones;
-(void)queue_validate;
@end

