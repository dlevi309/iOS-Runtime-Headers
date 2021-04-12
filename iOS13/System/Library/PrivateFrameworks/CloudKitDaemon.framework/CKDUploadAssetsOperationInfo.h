/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray, NSDictionary;

@interface CKDUploadAssetsOperationInfo : CKDatabaseOperationInfo {

	BOOL _temporary;
	NSArray* _assetsToUpload;
	NSDictionary* _assetUUIDToExpectedProperties;
	NSDictionary* _packageUUIDToExpectedProperties;

}

@property (nonatomic,retain) NSArray * assetsToUpload;                                    //@synthesize assetsToUpload=_assetsToUpload - In the implementation block
@property (nonatomic,retain) NSDictionary * assetUUIDToExpectedProperties;                //@synthesize assetUUIDToExpectedProperties=_assetUUIDToExpectedProperties - In the implementation block
@property (nonatomic,retain) NSDictionary * packageUUIDToExpectedProperties;              //@synthesize packageUUIDToExpectedProperties=_packageUUIDToExpectedProperties - In the implementation block
@property (assign,nonatomic) BOOL temporary;                                              //@synthesize temporary=_temporary - In the implementation block
-(NSDictionary *)assetUUIDToExpectedProperties;
-(void)setAssetUUIDToExpectedProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)packageUUIDToExpectedProperties;
-(void)setPackageUUIDToExpectedProperties:(NSDictionary *)arg1 ;
-(void)setTemporary:(BOOL)arg1 ;
-(BOOL)temporary;
-(NSArray *)assetsToUpload;
-(void)setAssetsToUpload:(NSArray *)arg1 ;
@end

