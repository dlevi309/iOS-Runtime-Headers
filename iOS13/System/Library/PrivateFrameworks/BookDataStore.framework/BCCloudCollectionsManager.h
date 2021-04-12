/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <libobjc.A.dylib/BDSCloudKitSupportSignOut.h>

@protocol BCCloudCollectionDetailManager, BCCloudCollectionMemberManager;
@class NSManagedObjectModel, BCCloudDataSource, NSObject, BCCloudChangeTokenController, BDSServiceProxy;

@interface BCCloudCollectionsManager : NSObject <BDSCloudKitSupportSignOut> {

	BOOL _proxyMode;
	NSManagedObjectModel* _objectModel;
	BCCloudDataSource* _collectionDataSource;
	NSObject*<BCCloudCollectionDetailManager> _collectionDetailManager;
	NSObject*<BCCloudCollectionMemberManager> _collectionMemberManager;
	BCCloudChangeTokenController* _changeTokenController;
	BDSServiceProxy* _serviceProxy;

}

@property (nonatomic,retain) NSObject*<BCCloudCollectionDetailManager> collectionDetailManager;              //@synthesize collectionDetailManager=_collectionDetailManager - In the implementation block
@property (nonatomic,retain) NSObject*<BCCloudCollectionMemberManager> collectionMemberManager;              //@synthesize collectionMemberManager=_collectionMemberManager - In the implementation block
@property (nonatomic,retain) BCCloudChangeTokenController * changeTokenController;                           //@synthesize changeTokenController=_changeTokenController - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * objectModel;                                             //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,retain) BCCloudDataSource * collectionDataSource;                                       //@synthesize collectionDataSource=_collectionDataSource - In the implementation block
@property (assign,nonatomic) BOOL proxyMode;                                                                 //@synthesize proxyMode=_proxyMode - In the implementation block
@property (nonatomic,retain) BDSServiceProxy * serviceProxy;                                                 //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (assign,nonatomic) BOOL enableCloudSync; 
+(id)sharedManager;
+(id)sharedClientXPCProxy;
-(BDSServiceProxy *)serviceProxy;
-(void)setServiceProxy:(BDSServiceProxy *)arg1 ;
-(void)setObjectModel:(NSManagedObjectModel *)arg1 ;
-(NSManagedObjectModel *)objectModel;
-(void)dissociateCloudDataFromSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteCloudDataWithCompletion:(/*^block*/id)arg1 ;
-(void)setEnableCloudSync:(BOOL)arg1 ;
-(NSObject*<BCCloudCollectionMemberManager>)collectionMemberManager;
-(id)initClientXPCProxy;
-(BCCloudDataSource *)collectionDataSource;
-(void)setCollectionDataSource:(BCCloudDataSource *)arg1 ;
-(NSObject*<BCCloudCollectionDetailManager>)collectionDetailManager;
-(void)setCollectionDetailManager:(NSObject*<BCCloudCollectionDetailManager>)arg1 ;
-(void)setCollectionMemberManager:(NSObject*<BCCloudCollectionMemberManager>)arg1 ;
-(BCCloudChangeTokenController *)changeTokenController;
-(void)setChangeTokenController:(BCCloudChangeTokenController *)arg1 ;
-(BOOL)proxyMode;
-(void)setProxyMode:(BOOL)arg1 ;
@end

