/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@protocol SCKDatabaseStoreCoordinator
@property (nonatomic,readonly) id<SCKDatabaseStore> underlyingStore; 
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(void)readWithAccessor:(/*^block*/id)arg1;
-(void)writeWithAccessor:(/*^block*/id)arg1;
-(void)reloadWithAccessor:(/*^block*/id)arg1;
-(void)readZone:(id)arg1 withAccessor:(/*^block*/id)arg2;
-(void)writeZone:(id)arg1 withAccessor:(/*^block*/id)arg2;
-(id<SCKDatabaseStore>)underlyingStore;

@end

