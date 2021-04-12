/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HAP2Storage.h>

@protocol HAP2StorageDelegate, OS_dispatch_queue;
@class NSObject, HAPSystemKeychainStore, NSMutableSet, HMDAccessoryBrowser, NSString;

@interface HMDHAP2Storage : NSObject <HAP2Storage> {

	id<HAP2StorageDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HAPSystemKeychainStore* _storage;
	NSMutableSet* _registeredIdentifiers;
	HMDAccessoryBrowser* _accessoryBrowser;

}

@property (assign,nonatomic,__weak) id<HAP2StorageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HAP2StorageDelegate>)delegate;
-(void)registerPairedAccessoryWithIdentifier:(id)arg1 ;
-(void)setDelegate:(id<HAP2StorageDelegate>)arg1 ;
-(void)_removeKeysForIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)hasKeysForIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchKeysForIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveKeysForIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeKeysForIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchControllerKeysWithCompletion:(/*^block*/id)arg1 ;
-(void)removeControllerKeyWithCompletion:(/*^block*/id)arg1 ;
-(void)saveControllerIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchCacheForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveCacheForIdentifier:(id)arg1 data:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeCacheForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithAccessoryBrowser:(id)arg1 ;
-(void)resetPairedAccessoryIdentifiers;
-(void)deregisterPairedAccessoryWithIdentifier:(id)arg1 ;
@end

