/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/THThreadNetworkCredentialsStore.h>

@protocol THThreadNetworkCredentialsBackingStore;
@class NSString;

@interface THThreadNetworkCredentialsStoreLocalClient : NSObject <THThreadNetworkCredentialsStore> {

	NSString* _keychainAccessGroup;
	id<THThreadNetworkCredentialsBackingStore> _backingStore;

}

@property (nonatomic,readonly) NSString * keychainAccessGroup;                                              //@synthesize keychainAccessGroup=_keychainAccessGroup - In the implementation block
@property (nonatomic,__weak,readonly) id<THThreadNetworkCredentialsBackingStore> backingStore;              //@synthesize backingStore=_backingStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<THThreadNetworkCredentialsBackingStore>)backingStore;
-(NSString *)keychainAccessGroup;
-(id)initApplePrivateStoreWithBackingStore:(id)arg1 ;
-(void)retrieveRecordWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)retrieveAllRecordsForNetwork:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)retrieveAllRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteRecordWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithKeychainAccessGroup:(id)arg1 backingStore:(id)arg2 ;
-(void)storeCredentials:(id)arg1 waitForSync:(BOOL)arg2 forNetwork:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)storeCredentials:(id)arg1 forNetwork:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteRecordForNetwork:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

