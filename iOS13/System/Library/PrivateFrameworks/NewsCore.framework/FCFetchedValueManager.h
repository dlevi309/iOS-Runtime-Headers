/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFetchedValueManagerObserving.h>
#import <libobjc.A.dylib/FCBoostableOperationThrottlerDelegate.h>

@protocol NFCopying;
@class FCFetchedValueDescriptor, FCBoostableOperationThrottler, NSHashTable, NFUnfairLock, NSError, NSString;

@interface FCFetchedValueManager : NSObject <FCFetchedValueManagerObserving, FCBoostableOperationThrottlerDelegate> {

	id<NFCopying> _value;
	FCFetchedValueDescriptor* _descriptor;
	FCBoostableOperationThrottler* _operationThrottler;
	NSHashTable* _observers;
	NFUnfairLock* _lock;
	NSError* _error;

}

@property (nonatomic,copy,readonly) FCFetchedValueDescriptor * descriptor;                      //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) FCBoostableOperationThrottler * operationThrottler;              //@synthesize operationThrottler=_operationThrottler - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                         //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NFUnfairLock * lock;                                             //@synthesize lock=_lock - In the implementation block
@property (nonatomic,copy) NSError * error;                                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id<NFCopying> value;                                                 //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NFUnfairLock *)lock;
-(NSError *)error;
-(id<NFCopying>)value;
-(void)setValue:(id<NFCopying>)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(FCFetchedValueDescriptor *)descriptor;
-(NSHashTable *)observers;
-(id)initWithDescriptor:(id)arg1 ;
-(void)_handleError:(id)arg1 ;
-(FCBoostableOperationThrottler *)operationThrottler;
-(void)fetchValueWithQualityOfService:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithQualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)_optionsForCachePolicy:(unsigned long long)arg1 ;
-(id)_updateDependentManagersPromiseWithQualityOfService:(long long)arg1 ;
-(unsigned long long)_cachePolicyForOptions:(unsigned long long)arg1 ;
-(void)_handleValue:(id)arg1 ;
-(void)fetchedObjectManager:(id)arg1 valueDidChange:(id)arg2 ;
-(id)valuePromiseWithQualityOfService:(long long)arg1 ;
@end

