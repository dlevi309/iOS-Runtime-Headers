/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <libobjc.A.dylib/NSXPCProxyCreating.h>
#import <libobjc.A.dylib/BDSServiceProtocol.h>

@protocol BDSServiceProtocolNSXPCProxyCreating;
@class NSXPCConnection, NSString;

@interface BDSServiceProxy : NSObject <NSXPCProxyCreating, BDSServiceProtocol> {

	BOOL _connectionHealthy;
	id<BDSServiceProtocol><NSXPCProxyCreating> _remoteObjectProxy;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) id<BDSServiceProtocol><NSXPCProxyCreating> remoteObjectProxy;              //@synthesize remoteObjectProxy=_remoteObjectProxy - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection;                                              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL connectionHealthy;                                                      //@synthesize connectionHealthy=_connectionHealthy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id<BDSServiceProtocol><NSXPCProxyCreating>)remoteObjectProxy;
-(NSXPCConnection *)connection;
-(void)shutdown;
-(void)formXPCConnection;
-(void)dissociateCloudDataFromSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)currentAssetDetailCloudSyncVersions:(/*^block*/id)arg1 ;
-(void)setAssetDetail:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAssetDetails:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAssetDetailForAssetID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)assetDetailForAssetID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)assetDetailsForAssetIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolvedAssetDetailForAssetID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAssetDetailsIncludingDeleted:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAssetDetailsForUnsyncedTastes:(/*^block*/id)arg1 ;
-(void)fetchFinishedDatesByAssetIDForYear:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchFinishedAssetCountByYearWithCompletion:(/*^block*/id)arg1 ;
-(void)getAssetDetailChangesSince:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)currentReadingNowDetailCloudSyncVersions:(/*^block*/id)arg1 ;
-(void)setReadingNowDetails:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteReadingNowDetailForAssetID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)readingNowDetailsForAssetIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getReadingNowDetailChangesSince:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAssetReview:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAssetReviews:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAssetReviewForAssetReviewID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAssetReviewForAssetReviewIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)assetReviewForAssetReviewID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)assetReviewsForAssetReviewIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAssetReviewsForUserID:(id)arg1 includingDeleted:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAssetReviewChangesSince:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addStoreItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addStoreItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteStoreItemWithStoreID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteStoreItemsWithStoreIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)storeItemForStoreID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchStoreItemsIncludingDeleted:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)getStoreItemChangesSince:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)currentCollectionDetailCloudSyncVersions:(/*^block*/id)arg1 ;
-(void)setCollectionDetail:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCollectionDetails:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteCollectionDetailForCollectionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteCollectionDetailForCollectionIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)collectionDetailForCollectionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)collectionDetailsForCollectionIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchCollectionDetailsIncludingDeleted:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCollectionDetailChangesSince:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)currentCollectionMemberCloudSyncVersions:(/*^block*/id)arg1 ;
-(void)setCollectionMember:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCollectionMembers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteCollectionMemberForCollectionMemberID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteCollectionMemberForCollectionMemberIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)collectionMemberForCollectionMemberID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchCollectionMembersIncludingDeleted:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchCollectionMembersInCollectionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchMaxSortOrderInCollectionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCollectionMemberChangesSince:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setEnableCollectionSync:(BOOL)arg1 ;
-(void)setEnableCloudSync:(BOOL)arg1 enableReadingNowSync:(BOOL)arg2 ;
-(void)setEnableSecureUserDataCloudSync:(BOOL)arg1 ;
-(void)setCloudSyncPaused:(BOOL)arg1 ;
-(void)deleteCloudDataWithCompletion:(/*^block*/id)arg1 ;
-(void)signalFetchChangesTransaction:(id)arg1 ;
-(void)fetchMostRecentAudiobookWithCompletion:(/*^block*/id)arg1 ;
-(id)updateWantToReadAndReadingNowWithCompletion:(/*^block*/id)arg1 ;
-(id)updateWantToReadWithCompletion:(/*^block*/id)arg1 ;
-(id)updateReadingNowWithCompletion:(/*^block*/id)arg1 ;
-(void)updateBitrateForItemWithAdamID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)currentCloudSyncVersions:(/*^block*/id)arg1 ;
-(void)setUserDatum:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUserData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteUserDatumForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)userDatumForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)userDatumIncludingDeleted:(BOOL)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchUserDataIncludingDeleted:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)getUserDataChangesSince:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolvedUserDataValueForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)userDataValueForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUserDataValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)audiobookStoreEnabledWithCompletion:(/*^block*/id)arg1 ;
-(void)setConnectionHealthy:(BOOL)arg1 ;
-(void)scheduleRestart;
-(BOOL)connectionHealthy;
@end

