/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>

@protocol OS_dispatch_queue;
@class HKQuantityType, NSDate, HKDevice, NSObject, NSError, HKCodableQuantitySeries, HKHealthStore, NSUUID, HKTaskServerProxyProvider, NSString;

@interface HKQuantitySeriesSampleBuilder : NSObject <_HKXPCExportable> {

	HKQuantityType* _quantityType;
	NSDate* _startDate;
	HKDevice* _device;
	long long _batchSize;
	NSObject*<OS_dispatch_queue> _queue;
	NSError* _fatalError;
	long long _state;
	HKCodableQuantitySeries* _quantitySeries;
	HKHealthStore* _healthStore;
	NSUUID* _identifier;
	HKTaskServerProxyProvider* _proxyProvider;
	/*^block*/id _unitTest_insertQuantityCompletion;

}

@property (nonatomic,copy) id unitTest_insertQuantityCompletion;              //@synthesize unitTest_insertQuantityCompletion=_unitTest_insertQuantityCompletion - In the implementation block
@property (nonatomic,readonly) long long unitTest_state; 
@property (copy,readonly) HKQuantityType * quantityType; 
@property (copy,readonly) NSDate * startDate; 
@property (copy,readonly) HKDevice * device; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_clientErrorForFinishedSeries;
+(id)_exceptionForPreviouslyDiscardedBuilder;
+(id)serverInterface;
-(void)connectionInvalidated;
-(id)init;
-(NSDate *)startDate;
-(id)exportedInterface;
-(BOOL)_validateQuantity:(id)arg1 error:(out id*)arg2 ;
-(BOOL)_validateDateInterval:(id)arg1 error:(out id*)arg2 ;
-(BOOL)_changeStateForInsertWithError:(out id*)arg1 ;
-(BOOL)_insertQuantity:(id)arg1 dateInterval:(id)arg2 error:(id*)arg3 ;
-(BOOL)insertQuantity:(id)arg1 dateInterval:(id)arg2 error:(id*)arg3 ;
-(BOOL)_changeStateForFinishWithError:(out id*)arg1 ;
-(void)_finishSeriesWithMetadata:(id)arg1 endDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_discardWithCompletion:(/*^block*/id)arg1 ;
-(void)finishSeriesWithMetadata:(id)arg1 endDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_changeStateForFatalError:(id)arg1 ;
-(BOOL)_changeStateForDiscardWithError:(out id*)arg1 ;
-(void)_taskServer_insertQuantitySeries:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)unitTest_state;
-(void)_taskServer_finishSeriesWithMetadata:(id)arg1 endDate:(id)arg2 finalSeries:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_taskServer_discardWithCompletion:(/*^block*/id)arg1 ;
-(id)_queue_clientErrorForFatalError;
-(void)unitTest_setBatchSize:(long long)arg1 ;
-(id)initWithHealthStore:(id)arg1 quantityType:(id)arg2 startDate:(id)arg3 device:(id)arg4 ;
-(BOOL)insertQuantity:(id)arg1 date:(id)arg2 error:(id*)arg3 ;
-(void)unitTest_discardWithCompletion:(/*^block*/id)arg1 ;
-(void)finishSeriesWithMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)unitTest_insertQuantityCompletion;
-(void)setUnitTest_insertQuantityCompletion:(id)arg1 ;
-(HKQuantityType *)quantityType;
-(void)discard;
-(id)remoteInterface;
-(HKDevice *)device;
@end

