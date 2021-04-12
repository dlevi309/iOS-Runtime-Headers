/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTemporary:(BOOL)arg1 ;
-(BOOL)temporary;
-(NSDictionary *)assetUUIDToExpectedProperties;
-(NSDictionary *)packageUUIDToExpectedProperties;
-(void)setAssetUUIDToExpectedProperties:(NSDictionary *)arg1 ;
-(void)setPackageUUIDToExpectedProperties:(NSDictionary *)arg1 ;
-(NSArray *)assetsToUpload;
-(void)setAssetsToUpload:(NSArray *)arg1 ;
@end

