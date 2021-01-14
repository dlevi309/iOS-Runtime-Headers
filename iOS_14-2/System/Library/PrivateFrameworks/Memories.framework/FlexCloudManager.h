/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class FMSongLibrary, NSMutableArray, NSMutableDictionary;

@interface FlexCloudManager : NSObject {

	FMSongLibrary* _library;
	NSMutableArray* _cloudManagedSongs;
	NSMutableDictionary* _cloudManagedSongsByUID;
	unsigned long long _retryCount;

}

@property (assign,nonatomic) unsigned long long retryCount;                     //@synthesize retryCount=_retryCount - In the implementation block
@property (__weak,readonly) FMSongLibrary * library;                            //@synthesize library=_library - In the implementation block
@property (readonly) NSMutableArray * cloudManagedSongs;                        //@synthesize cloudManagedSongs=_cloudManagedSongs - In the implementation block
@property (readonly) NSMutableDictionary * cloudManagedSongsByUID;              //@synthesize cloudManagedSongsByUID=_cloudManagedSongsByUID - In the implementation block
+(id)createCloudManager:(long long)arg1 withLibrary:(id)arg2 options:(id)arg3 ;
-(FMSongLibrary *)library;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)retryCount;
-(id)initWithLibrary:(id)arg1 ;
-(void)retryFetchAllSongs;
-(void)fetchAllSongsWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)cloudManagedSongsByUID;
-(NSMutableArray *)cloudManagedSongs;
-(void)_registerSongs:(id)arg1 ;
-(void)cancelDownloadOfAsset:(id)arg1 ;
-(id)loadCachedSongs;
-(void)loadAssetWithID:(id)arg1 forSongID:(id)arg2 ;
-(void)requestDownloadOfAsset:(id)arg1 withOptions:(id)arg2 ;
-(void)cancelDownloadOfAllAssets;
-(void)requestPurgeOfAsset:(id)arg1 ;
-(unsigned long long)assetStatus:(id)arg1 ;
-(id)_purgeAndReturnReplacementFor:(id)arg1 ;
-(void)requestDownloadOfAsset:(id)arg1 ;
@end

