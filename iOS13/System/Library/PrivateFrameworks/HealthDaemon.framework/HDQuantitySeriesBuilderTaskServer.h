/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKQuantitySeriesSampleBuilderTaskServerInterface.h>

@protocol OS_dispatch_queue;
@class NSObject, HKQuantitySample, NSMutableArray, NSError, HKQuantitySeriesSampleBuilderTaskServerConfiguration;

@interface HDQuantitySeriesBuilderTaskServer : HDStandardTaskServer <HKQuantitySeriesSampleBuilderTaskServerInterface> {

	NSObject*<OS_dispatch_queue> _queue;
	HKQuantitySample* _series;
	long long _state;
	NSMutableArray* _values;
	NSError* _fatalError;
	/*^block*/id _queue_activeHandler;
	HKQuantitySeriesSampleBuilderTaskServerConfiguration* _configuration;
	/*^block*/id _unitTest_saveSamplesCompletion;

}

@property (nonatomic,readonly) long long state; 
@property (nonatomic,copy) id unitTest_saveSamplesCompletion;              //@synthesize unitTest_saveSamplesCompletion=_unitTest_saveSamplesCompletion - In the implementation block
+(id)taskIdentifier;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(long long)state;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_insertQuantitySeries:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_finishSeriesWithMetadata:(id)arg1 endDate:(id)arg2 finalSeries:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)remote_discardWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_insertQuantitySeries:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_finishSeriesWithMetadata:(id)arg1 endDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_discardWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_queue_isStateInAllowedStates:(id)arg1 description:(id)arg2 error:(out id*)arg3 ;
-(void)_queue_newSeriesSaveCompleted;
-(BOOL)_queue_insertQuantitySeries:(id)arg1 series:(id)arg2 forceInsert:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_canSaveOrSanitizeMetadata:(id*)arg1 error:(id*)arg2 ;
-(id)unitTest_saveSamplesCompletion;
-(void)setUnitTest_saveSamplesCompletion:(id)arg1 ;
@end

