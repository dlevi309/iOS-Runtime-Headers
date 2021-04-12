/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol NFCopying, FCFetchedValueManager;
@class NSHashTable, NFUnfairLock, NSError;

@interface FCFetchedValueObservable : NSObject {

	id<NFCopying> _value;
	id<FCFetchedValueManager> _manager;
	/*^block*/id _equalityTest;
	NSHashTable* _observers;
	NFUnfairLock* _lock;
	NSError* _error;

}

@property (nonatomic,__weak,readonly) id<FCFetchedValueManager> manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,copy,readonly) id equalityTest;                                  //@synthesize equalityTest=_equalityTest - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                               //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NFUnfairLock * lock;                                   //@synthesize lock=_lock - In the implementation block
@property (nonatomic,copy) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id<NFCopying> value;                                       //@synthesize value=_value - In the implementation block
-(void)addObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(id)init;
-(void)handleError:(id)arg1 ;
-(id)valueWithError:(id*)arg1 ;
-(NFUnfairLock *)lock;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setValue:(id<NFCopying>)arg1 ;
-(id)equalityTest;
-(void)removeObserver:(id)arg1 ;
-(id<FCFetchedValueManager>)manager;
-(id<NFCopying>)value;
-(id)initWithManager:(id)arg1 initialValue:(id)arg2 equalityTest:(/*^block*/id)arg3 ;
@end

