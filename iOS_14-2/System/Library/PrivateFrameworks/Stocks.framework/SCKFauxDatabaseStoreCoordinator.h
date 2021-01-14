/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <libobjc.A.dylib/SCKDatabaseStoreCoordinator.h>

@protocol SCKDatabaseStore, OS_dispatch_queue;
@class NSObject;

@interface SCKFauxDatabaseStoreCoordinator : NSObject <SCKDatabaseStoreCoordinator> {

	id<SCKDatabaseStore> _store;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) id<SCKDatabaseStore> store;                          //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<SCKDatabaseStore> underlyingStore; 
-(void)addObserver:(id)arg1 ;
-(void)writeWithAccessor:(/*^block*/id)arg1 ;
-(void)setStore:(id<SCKDatabaseStore>)arg1 ;
-(void)writeZone:(id)arg1 withAccessor:(/*^block*/id)arg2 ;
-(id<SCKDatabaseStore>)store;
-(void)readZone:(id)arg1 withAccessor:(/*^block*/id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)readWithAccessor:(/*^block*/id)arg1 ;
-(id<SCKDatabaseStore>)underlyingStore;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)reloadWithAccessor:(/*^block*/id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithDatabaseStore:(id)arg1 ;
@end

