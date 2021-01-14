/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoardServices/FBSServiceFacility.h>
#import <libobjc.A.dylib/FBApplicationDataStoreRepositoryServerClientContextDelegate.h>

@protocol FBApplicationDataStoreRepository;
@class FBServiceClientAuthenticator, NSString;

@interface FBApplicationDataStoreRepositoryServer : FBSServiceFacility <FBApplicationDataStoreRepositoryServerClientContextDelegate> {

	id<FBApplicationDataStoreRepository> _dataStore;
	FBServiceClientAuthenticator* _connectionAuthenticator;

}

@property (nonatomic,retain) id<FBApplicationDataStoreRepository> dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id<FBApplicationDataStoreRepository>)dataStore;
-(void)setDataStore:(id<FBApplicationDataStoreRepository>)arg1 ;
-(BOOL)shouldAllowClientConnection:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(id)_prerequisiteMilestones;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(id)_init;
-(void)applicationDataStoreRepositoryClientContext:(id)arg1 valueChangedForObject:(id)arg2 key:(id)arg3 bundleID:(id)arg4 ;
-(void)applicationDataStoreRepositoryClientContext:(id)arg1 repositoryInvalidatedForBundleID:(id)arg2 ;
-(void)_handleSetPrefetchedKeys:(id)arg1 context:(id)arg2 ;
-(void)_handleSetChangesInterest:(id)arg1 context:(id)arg2 ;
-(void)_handleSynchronize:(id)arg1 ;
-(void)_handleGetAvailableDataStores:(id)arg1 ;
-(void)_handleGetObjectForKey:(id)arg1 ;
-(void)_handleSetObjectForKey:(id)arg1 context:(id)arg2 ;
-(void)_handleRemoveObjectForKey:(id)arg1 context:(id)arg2 ;
-(void)_handleRemoveAllObjects:(id)arg1 ;
@end

