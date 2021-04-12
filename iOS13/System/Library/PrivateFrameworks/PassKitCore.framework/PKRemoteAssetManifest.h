/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSURL, NSMutableDictionary, NSDictionary;

@interface PKRemoteAssetManifest : NSObject {

	NSURL* _fileURL;
	NSURL* _passURL;
	NSMutableDictionary* _remoteAssets;

}

@property (nonatomic,readonly) NSURL * fileURL;                          //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * remoteAssets;              //@synthesize remoteAssets=_remoteAssets - In the implementation block
+(Class)_remoteAssestManifestItemClassWithValues:(id)arg1 ;
-(NSURL *)fileURL;
-(id)deviceSpecificAssetForScreenScale:(double)arg1 suffix:(id)arg2 ;
-(id)initWithFileURL:(id)arg1 passURL:(id)arg2 deviceSEIDs:(id)arg3 error:(id*)arg4 ;
-(NSDictionary *)remoteAssets;
-(id)initWithFileURL:(id)arg1 passURL:(id)arg2 error:(id*)arg3 ;
-(id)deviceSpecificAsset;
@end

