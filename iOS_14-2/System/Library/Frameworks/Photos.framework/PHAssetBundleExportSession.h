/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSString, PHAsset, NSDictionary;

@interface PHAssetBundleExportSession : NSObject {

	NSString* _customFilenameBase;
	NSString* _sessionUUID;
	PHAsset* _asset;
	NSDictionary* _fileURLs;

}

@property (nonatomic,readonly) NSString * sessionUUID;                 //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,readonly) PHAsset * asset;                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) NSDictionary * fileURLs;                //@synthesize fileURLs=_fileURLs - In the implementation block
@property (nonatomic,copy) NSString * customFilenameBase;              //@synthesize customFilenameBase=_customFilenameBase - In the implementation block
-(NSString *)sessionUUID;
-(id)initWithAsset:(id)arg1 withAssetExportRequestFileURLs:(id)arg2 ;
-(void)writeToDirectoryURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_filenameBaseForAsset:(id)arg1 ;
-(id)_createAssetBundleFromAsset:(id)arg1 withFileURLs:(id)arg2 atURL:(id)arg3 withError:(id*)arg4 ;
-(PHAsset *)asset;
-(NSString *)customFilenameBase;
-(void)setCustomFilenameBase:(NSString *)arg1 ;
-(NSDictionary *)fileURLs;
@end

