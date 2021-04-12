/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFetchedValueManagerObserving.h>
#import <libobjc.A.dylib/FCBoostableOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/FCFetchedValueManager.h>

@protocol FCFetchedValueManager <NSObject>
@property (nonatomic,readonly) id<NFCopying> value; 
@required
-(void)addObserver:(id)arg1;
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)fetchValueWithQualityOfService:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)removeObserver:(id)arg1;
-(id<NFCopying>)value;

@end


@class FCFetchedValueDescriptor, FCBoostableOperationThrottler, FCFetchedValueObservable, NSString;

@interface FCFetchedValueManager : NSObject <FCFetchedValueManagerObserving, FCBoostableOperationThrottlerDelegate, FCFetchedValueManager> {

	FCFetchedValueDescriptor* _descriptor;
	FCBoostableOperationThrottler* _operationThrottler;
	FCFetchedValueObservable* _observable;

}

@property (nonatomic,copy,readonly) FCFetchedValueDescriptor * descriptor;                      //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) FCBoostableOperationThrottler * operationThrottler;              //@synthesize operationThrottler=_operationThrottler - In the implementation block
@property (nonatomic,readonly) FCFetchedValueObservable * observable;                           //@synthesize observable=_observable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NFCopying> value; 
-(FCFetchedValueObservable *)observable;
-(void)addObserver:(id)arg1 ;
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchedObjectManager:(id)arg1 valueDidChange:(id)arg2 ;
-(unsigned long long)_cachePolicyForOptions:(unsigned long long)arg1 ;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithQualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchValueWithQualityOfService:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(id)initWithDescriptor:(id)arg1 ;
-(FCFetchedValueDescriptor *)descriptor;
-(void)removeObserver:(id)arg1 ;
-(FCBoostableOperationThrottler *)operationThrottler;
-(id)valuePromiseWithQualityOfService:(long long)arg1 ;
-(id)_updateDependentManagersPromiseWithQualityOfService:(long long)arg1 ;
-(id<NFCopying>)value;
-(unsigned long long)_optionsForCachePolicy:(unsigned long long)arg1 ;
@end

