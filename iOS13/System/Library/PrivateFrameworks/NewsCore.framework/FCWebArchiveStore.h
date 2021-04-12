/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCAssetStore;

@interface FCWebArchiveStore : NSObject {

	FCAssetStore* _assetStore;

}

@property (nonatomic,retain) FCAssetStore * assetStore;              //@synthesize assetStore=_assetStore - In the implementation block
-(FCAssetStore *)assetStore;
-(id)initWithStoreDirectory:(id)arg1 ;
-(id)webArchiveURLForKey:(id)arg1 ;
-(BOOL)saveWebArchiveData:(id)arg1 forKey:(id)arg2 ;
-(BOOL)deleteWebArchiveForKey:(id)arg1 ;
-(unsigned long long)totalSizeOfAllWebArchives;
-(id)allWebArchiveKeys;
-(void)setAssetStore:(FCAssetStore *)arg1 ;
@end

