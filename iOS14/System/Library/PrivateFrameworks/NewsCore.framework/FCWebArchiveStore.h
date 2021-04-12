/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCAssetStore;

@interface FCWebArchiveStore : NSObject {

	FCAssetStore* _assetStore;

}

@property (nonatomic,retain) FCAssetStore * assetStore;              //@synthesize assetStore=_assetStore - In the implementation block
-(void)setAssetStore:(FCAssetStore *)arg1 ;
-(id)allWebArchiveKeys;
-(FCAssetStore *)assetStore;
-(id)initWithStoreDirectory:(id)arg1 ;
-(id)webArchiveURLForKey:(id)arg1 ;
-(BOOL)saveWebArchiveData:(id)arg1 forKey:(id)arg2 ;
-(BOOL)deleteWebArchiveForKey:(id)arg1 ;
-(unsigned long long)totalSizeOfAllWebArchives;
@end

