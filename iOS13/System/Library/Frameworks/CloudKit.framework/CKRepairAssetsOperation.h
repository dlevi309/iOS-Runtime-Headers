/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary, CKUploadRequestConfiguration;

@interface CKRepairAssetsOperation : CKDatabaseOperation {

	/*^block*/id _repairAssetsCompletionBlock;
	NSArray* _assets;
	NSArray* _packages;
	NSArray* _assetMetadata;
	NSArray* _packageMetadata;
	NSArray* _unavailableAssets;
	NSArray* _unavailablePackages;
	NSMutableDictionary* _perItemErrorsByRecordID;
	CKUploadRequestConfiguration* _uploadRequestConfiguration;

}

@property (nonatomic,retain) NSArray * assets;                                                                      //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) NSArray * packages;                                                                    //@synthesize packages=_packages - In the implementation block
@property (nonatomic,retain) NSArray * assetMetadata;                                                               //@synthesize assetMetadata=_assetMetadata - In the implementation block
@property (nonatomic,retain) NSArray * packageMetadata;                                                             //@synthesize packageMetadata=_packageMetadata - In the implementation block
@property (nonatomic,retain) NSArray * unavailableAssets;                                                           //@synthesize unavailableAssets=_unavailableAssets - In the implementation block
@property (nonatomic,retain) NSArray * unavailablePackages;                                                         //@synthesize unavailablePackages=_unavailablePackages - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * perItemErrorsByRecordID;                                         //@synthesize perItemErrorsByRecordID=_perItemErrorsByRecordID - In the implementation block
@property (nonatomic,copy) CKUploadRequestConfiguration * uploadRequestConfiguration;                               //@synthesize uploadRequestConfiguration=_uploadRequestConfiguration - In the implementation block
@property (nonatomic,copy,readonly) CKUploadRequestConfiguration * resolvedUploadRequestConfiguration; 
@property (nonatomic,copy) id repairAssetsCompletionBlock;                                                          //@synthesize repairAssetsCompletionBlock=_repairAssetsCompletionBlock - In the implementation block
-(CKUploadRequestConfiguration *)uploadRequestConfiguration;
-(NSArray *)assets;
-(void)setAssets:(NSArray *)arg1 ;
-(NSArray *)packages;
-(void)setPackages:(NSArray *)arg1 ;
-(NSArray *)assetMetadata;
-(void)setAssetMetadata:(NSArray *)arg1 ;
-(NSArray *)packageMetadata;
-(void)setPackageMetadata:(NSArray *)arg1 ;
-(NSArray *)unavailableAssets;
-(void)setUnavailableAssets:(NSArray *)arg1 ;
-(NSArray *)unavailablePackages;
-(void)setUnavailablePackages:(NSArray *)arg1 ;
-(CKUploadRequestConfiguration *)resolvedUploadRequestConfiguration;
-(void)setUploadRequestConfiguration:(CKUploadRequestConfiguration *)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)repairAssetsCompletionBlock;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(NSMutableDictionary *)perItemErrorsByRecordID;
-(void)setRepairAssetsCompletionBlock:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)initWithAssets:(id)arg1 packages:(id)arg2 assetMetadata:(id)arg3 packageMetadata:(id)arg4 unavailableAssets:(id)arg5 unavailablePackages:(id)arg6 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)includedMetadata;
-(void)setPerItemErrorsByRecordID:(NSMutableDictionary *)arg1 ;
@end

