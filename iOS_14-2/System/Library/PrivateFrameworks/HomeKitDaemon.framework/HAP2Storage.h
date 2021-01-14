/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HAP2Storage <NSObject>
@property (assign,nonatomic,__weak) id<HAP2StorageDelegate> delegate; 
@optional
-(void)shutDownWithCompletion:(/*^block*/id)arg1;
-(void)startUpWithCompletion:(/*^block*/id)arg1;

@required
-(id<HAP2StorageDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)hasKeysForIdentifiers:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchKeysForIdentifiers:(id)arg1 completion:(/*^block*/id)arg2;
-(void)saveKeysForIdentifiers:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeKeysForIdentifiers:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchControllerKeysWithCompletion:(/*^block*/id)arg1;
-(void)removeControllerKeyWithCompletion:(/*^block*/id)arg1;
-(void)saveControllerIdentity:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchCacheForIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)saveCacheForIdentifier:(id)arg1 data:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeCacheForIdentifier:(id)arg1 completion:(/*^block*/id)arg2;

@end

