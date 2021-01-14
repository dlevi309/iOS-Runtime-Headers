/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCAssetStore;

@interface FCAASAFileManager : NSObject {

	FCAssetStore* _fileStore;

}

@property (nonatomic,readonly) FCAssetStore * fileStore;              //@synthesize fileStore=_fileStore - In the implementation block
-(id)init;
-(void)updateFilesWithManifest:(id)arg1 ;
-(id)initWithDirectoryFileURL:(id)arg1 ;
-(FCAssetStore *)fileStore;
@end

