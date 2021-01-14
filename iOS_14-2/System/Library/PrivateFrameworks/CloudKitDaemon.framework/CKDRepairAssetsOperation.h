/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKUploadRequestConfiguration, NSDictionary, NSArray, CKDOperation, NSMutableDictionary, NSSet;

@interface CKDRepairAssetsOperation : CKDDatabaseOperation {

	/*^block*/id _assetOrPackageRepairedBlock;
	CKUploadRequestConfiguration* _uploadRequestConfiguration;
	NSDictionary* _UUIDToAssetOrPackage;
	NSDictionary* _assetOrPackageUUIDToMetadata;
	NSArray* _unavailableAssetsAndPackages;
	CKDOperation* _fetchOperation;
	CKDOperation* _uploadOperation;
	CKDOperation* _updateOperation;
	NSMutableDictionary* _assetOrPackageUUIDToOriginalRecord;
	NSDictionary* _assetOrPackageUUIDToUploadError;
	NSSet* _uploadedAssetOrPackageUUIDs;

}

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) CKUploadRequestConfiguration * uploadRequestConfiguration;                      //@synthesize uploadRequestConfiguration=_uploadRequestConfiguration - In the implementation block
@property (nonatomic,retain) NSDictionary * UUIDToAssetOrPackage;                                            //@synthesize UUIDToAssetOrPackage=_UUIDToAssetOrPackage - In the implementation block
@property (nonatomic,retain) NSDictionary * assetOrPackageUUIDToMetadata;                                    //@synthesize assetOrPackageUUIDToMetadata=_assetOrPackageUUIDToMetadata - In the implementation block
@property (nonatomic,retain) NSArray * unavailableAssetsAndPackages;                                         //@synthesize unavailableAssetsAndPackages=_unavailableAssetsAndPackages - In the implementation block
@property (nonatomic,retain) CKDOperation * fetchOperation;                                                  //@synthesize fetchOperation=_fetchOperation - In the implementation block
@property (nonatomic,retain) CKDOperation * uploadOperation;                                                 //@synthesize uploadOperation=_uploadOperation - In the implementation block
@property (nonatomic,retain) CKDOperation * updateOperation;                                                 //@synthesize updateOperation=_updateOperation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetOrPackageUUIDToOriginalRecord;                       //@synthesize assetOrPackageUUIDToOriginalRecord=_assetOrPackageUUIDToOriginalRecord - In the implementation block
@property (nonatomic,retain) NSDictionary * assetOrPackageUUIDToUploadError;                                 //@synthesize assetOrPackageUUIDToUploadError=_assetOrPackageUUIDToUploadError - In the implementation block
@property (nonatomic,retain) NSSet * uploadedAssetOrPackageUUIDs;                                            //@synthesize uploadedAssetOrPackageUUIDs=_uploadedAssetOrPackageUUIDs - In the implementation block
@property (nonatomic,retain) id<CKRepairAssetsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id assetOrPackageRepairedBlock;                                                   //@synthesize assetOrPackageRepairedBlock=_assetOrPackageRepairedBlock - In the implementation block
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(id)nameForState:(unsigned long long)arg1 ;
-(void)setUploadRequestConfiguration:(CKUploadRequestConfiguration *)arg1 ;
-(CKDOperation *)updateOperation;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)main;
-(CKDOperation *)fetchOperation;
-(void)setFetchOperation:(CKDOperation *)arg1 ;
-(BOOL)makeStateTransition;
-(CKUploadRequestConfiguration *)uploadRequestConfiguration;
-(void)setUpdateOperation:(CKDOperation *)arg1 ;
-(void)setAssetOrPackageRepairedBlock:(id)arg1 ;
-(id)repairContext;
-(void)_fetchAssetMetadata;
-(void)_uploadAssetsModify;
-(void)_updateMissingAssetServerStatus;
-(NSDictionary *)assetOrPackageUUIDToMetadata;
-(NSMutableDictionary *)assetOrPackageUUIDToOriginalRecord;
-(NSDictionary *)UUIDToAssetOrPackage;
-(id)assetOrPackageForMetadata:(id)arg1 inRecord:(id)arg2 ;
-(id)assetOrPackageRepairedBlock;
-(void)setAssetOrPackageUUIDToUploadError:(NSDictionary *)arg1 ;
-(void)setUploadedAssetOrPackageUUIDs:(NSSet *)arg1 ;
-(void)setUploadOperation:(CKDOperation *)arg1 ;
-(NSSet *)uploadedAssetOrPackageUUIDs;
-(NSDictionary *)assetOrPackageUUIDToUploadError;
-(NSArray *)unavailableAssetsAndPackages;
-(void)setUUIDToAssetOrPackage:(NSDictionary *)arg1 ;
-(void)setAssetOrPackageUUIDToMetadata:(NSDictionary *)arg1 ;
-(void)setUnavailableAssetsAndPackages:(NSArray *)arg1 ;
-(CKDOperation *)uploadOperation;
-(void)setAssetOrPackageUUIDToOriginalRecord:(NSMutableDictionary *)arg1 ;
@end

