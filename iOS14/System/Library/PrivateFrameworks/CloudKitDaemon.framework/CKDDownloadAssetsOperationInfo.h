/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray;

@interface CKDDownloadAssetsOperationInfo : CKDatabaseOperationInfo {

	BOOL _shouldFetchAssetContentInMemory;
	NSArray* _assetsToDownload;
	NSArray* _packageIndexSets;
	NSArray* _assetsToDownloadInMemory;
	NSArray* _assetURLInfosToFillOut;

}

@property (assign,nonatomic) BOOL shouldFetchAssetContentInMemory;              //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
@property (nonatomic,retain) NSArray * assetsToDownload;                        //@synthesize assetsToDownload=_assetsToDownload - In the implementation block
@property (nonatomic,retain) NSArray * packageIndexSets;                        //@synthesize packageIndexSets=_packageIndexSets - In the implementation block
@property (nonatomic,retain) NSArray * assetsToDownloadInMemory;                //@synthesize assetsToDownloadInMemory=_assetsToDownloadInMemory - In the implementation block
@property (nonatomic,retain) NSArray * assetURLInfosToFillOut;                  //@synthesize assetURLInfosToFillOut=_assetURLInfosToFillOut - In the implementation block
-(void)setShouldFetchAssetContentInMemory:(BOOL)arg1 ;
-(BOOL)shouldFetchAssetContentInMemory;
-(void)setAssetsToDownload:(NSArray *)arg1 ;
-(NSArray *)assetsToDownload;
-(NSArray *)packageIndexSets;
-(NSArray *)assetsToDownloadInMemory;
-(NSArray *)assetURLInfosToFillOut;
-(void)setPackageIndexSets:(NSArray *)arg1 ;
-(void)setAssetsToDownloadInMemory:(NSArray *)arg1 ;
-(void)setAssetURLInfosToFillOut:(NSArray *)arg1 ;
@end

