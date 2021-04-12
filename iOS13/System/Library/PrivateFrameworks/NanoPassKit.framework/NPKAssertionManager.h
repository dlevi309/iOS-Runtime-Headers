/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable;

@interface NPKAssertionManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _acquiredAssertions;

}

@property (retain) NSHashTable * acquiredAssertions;              //@synthesize acquiredAssertions=_acquiredAssertions - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)addAssertion:(id)arg1 ;
-(void)removeAssertion:(id)arg1 ;
-(id)_errorWithUnderlyingError:(id)arg1 ;
-(NSHashTable *)acquiredAssertions;
-(id)acquiredAssertionWithType:(unsigned long long)arg1 ;
-(void)_queue_acquireAssertionWithType:(unsigned long long)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_invalidateAssertionWithType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)containsAssertionWithType:(unsigned long long)arg1 ;
-(void)acquireAssertionWithType:(unsigned long long)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidateAssertionWithType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAcquiredAssertions:(NSHashTable *)arg1 ;
@end

