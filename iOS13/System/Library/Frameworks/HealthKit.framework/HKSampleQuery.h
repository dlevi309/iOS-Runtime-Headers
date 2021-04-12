/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	/*^block*/id _resultHandler;

}

@property (nonatomic,copy,readonly) id resultHandler;                     //@synthesize resultHandler=_resultHandler - In the implementation block
@property (assign,nonatomic) BOOL includeAutomaticTimeZones;              //@synthesize includeAutomaticTimeZones=_includeAutomaticTimeZones - In the implementation block
@property (readonly) unsigned long long limit; 
@property (copy,readonly) NSArray * sortDescriptors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(NSArray *)sortDescriptors;
-(unsigned long long)limit;
-(id)resultHandler;
-(void)queue_validate;
-(void)queue_deliverError:(id)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(id)initWithSampleType:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(/*^block*/id)arg5 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(BOOL)_prepareSamplesForDelivery:(id)arg1 error:(id*)arg2 ;
-(void)setIncludeAutomaticTimeZones:(BOOL)arg1 ;
-(void)client_deliverSamples:(id)arg1 clearPendingSamples:(BOOL)arg2 isFinalBatch:(BOOL)arg3 queryUUID:(id)arg4 ;
-(BOOL)includeAutomaticTimeZones;
@end

