/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSURL, NSMutableDictionary, NSArray, NSDictionary;

@interface PKRemoteAssetManifest : NSObject {

	NSURL* _fileURL;
	NSURL* _passURL;
	NSMutableDictionary* _remoteAssets;
	NSArray* _encryptedDeviceSpecificRemoteAssetFilenames;

}

@property (nonatomic,readonly) NSURL * fileURL;                                                    //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * remoteAssets;                                        //@synthesize remoteAssets=_remoteAssets - In the implementation block
@property (nonatomic,readonly) NSArray * encryptedDeviceSpecificRemoteAssetFilenames;              //@synthesize encryptedDeviceSpecificRemoteAssetFilenames=_encryptedDeviceSpecificRemoteAssetFilenames - In the implementation block
+(Class)_remoteAssestManifestItemClassWithValues:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 passURL:(id)arg2 deviceSEIDs:(id)arg3 error:(id*)arg4 ;
-(NSDictionary *)remoteAssets;
-(NSArray *)encryptedDeviceSpecificRemoteAssetFilenames;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 passURL:(id)arg2 error:(id*)arg3 ;
-(id)deviceSpecificAsset;
-(id)deviceSpecificAssetForScreenScale:(double)arg1 suffix:(id)arg2 ;
@end

