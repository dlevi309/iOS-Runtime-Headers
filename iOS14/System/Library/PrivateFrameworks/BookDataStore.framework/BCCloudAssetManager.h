/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <libobjc.A.dylib/BDSCloudKitSupportSignOut.h>

@protocol BCCloudAssetDetailManager, BCCloudReadingNowDetailManager, BCCloudAssetReviewManager, BCCloudStoreAssetManager;
@class NSManagedObjectModel, BCCloudDataSource, BCCloudAssetAnnotationManager, NSObject, BCCloudChangeTokenController, BDSServiceProxy;

@interface BCCloudAssetManager : NSObject <BDSCloudKitSupportSignOut> {

	BOOL _proxyMode;
	NSManagedObjectModel* _objectModel;
	BCCloudDataSource* _assetDataSource;
	BCCloudAssetAnnotationManager* _assetAnnotationManager;
	NSObject*<BCCloudAssetDetailManager> _assetDetailManager;
	NSObject*<BCCloudReadingNowDetailManager> _readingNowDetailManager;
	NSObject*<BCCloudAssetReviewManager> _assetReviewManager;
	NSObject*<BCCloudStoreAssetManager> _storeAssetManager;
	BCCloudChangeTokenController* _changeTokenController;
	BDSServiceProxy* _serviceProxy;

}

@property (nonatomic,retain) BCCloudAssetAnnotationManager * assetAnnotationManager;                         //@synthesize assetAnnotationManager=_assetAnnotationManager - In the implementation block
@property (nonatomic,retain) NSObject*<BCCloudAssetDetailManager> assetDetailManager;                        //@synthesize assetDetailManager=_assetDetailManager - In the implementation block
@property (nonatomic,retain) NSObject*<BCCloudReadingNowDetailManager> readingNowDetailManager;              //@synthesize readingNowDetailManager=_readingNowDetailManager - In the implementation block
@property (nonatomic,retain) NSObject*<BCCloudAssetReviewManager> assetReviewManager;                        //@synthesize assetReviewManager=_assetReviewManager - In the implementation block
@property (nonatomic,retain) NSObject*<BCCloudStoreAssetManager> storeAssetManager;                          //@synthesize storeAssetManager=_storeAssetManager - In the implementation block
@property (nonatomic,retain) BCCloudChangeTokenController * changeTokenController;                           //@synthesize changeTokenController=_changeTokenController - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * objectModel;                                             //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,retain) BDSServiceProxy * serviceProxy;                                                 //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (assign,nonatomic) BOOL proxyMode;                                                                 //@synthesize proxyMode=_proxyMode - In the implementation block
@property (nonatomic,retain) BCCloudDataSource * assetDataSource;                                            //@synthesize assetDataSource=_assetDataSource - In the implementation block
+(id)sharedManager;
+(id)sharedClientXPCProxy;
-(NSManagedObjectModel *)objectModel;
-(void)setServiceProxy:(BDSServiceProxy *)arg1 ;
-(BDSServiceProxy *)serviceProxy;
-(void)dealloc;
-(void)setObjectModel:(NSManagedObjectModel *)arg1 ;
-(void)dissociateCloudDataFromSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)setEnableCloudSync:(BOOL)arg1 enableReadingNowSync:(BOOL)arg2 ;
-(void)deleteCloudDataWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<BCCloudStoreAssetManager>)storeAssetManager;
-(id)initClientXPCProxy;
-(BCCloudChangeTokenController *)changeTokenController;
-(void)setChangeTokenController:(BCCloudChangeTokenController *)arg1 ;
-(BOOL)proxyMode;
-(void)setProxyMode:(BOOL)arg1 ;
-(BCCloudAssetAnnotationManager *)assetAnnotationManager;
-(BCCloudDataSource *)assetDataSource;
-(void)setAssetDataSource:(BCCloudDataSource *)arg1 ;
-(void)setAssetAnnotationManager:(BCCloudAssetAnnotationManager *)arg1 ;
-(NSObject*<BCCloudAssetDetailManager>)assetDetailManager;
-(void)setAssetDetailManager:(NSObject*<BCCloudAssetDetailManager>)arg1 ;
-(NSObject*<BCCloudReadingNowDetailManager>)readingNowDetailManager;
-(void)setReadingNowDetailManager:(NSObject*<BCCloudReadingNowDetailManager>)arg1 ;
-(NSObject*<BCCloudAssetReviewManager>)assetReviewManager;
-(void)setAssetReviewManager:(NSObject*<BCCloudAssetReviewManager>)arg1 ;
-(void)setStoreAssetManager:(NSObject*<BCCloudStoreAssetManager>)arg1 ;
@end

