/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@protocol SCKDatabaseStoreCoordinator
@property (nonatomic,readonly) id<SCKDatabaseStore> underlyingStore; 
@required
-(void)addObserver:(id)arg1;
-(void)writeWithAccessor:(/*^block*/id)arg1;
-(void)writeZone:(id)arg1 withAccessor:(/*^block*/id)arg2;
-(void)readZone:(id)arg1 withAccessor:(/*^block*/id)arg2;
-(void)removeObserver:(id)arg1;
-(void)readWithAccessor:(/*^block*/id)arg1;
-(id<SCKDatabaseStore>)underlyingStore;
-(void)reloadWithAccessor:(/*^block*/id)arg1;

@end

