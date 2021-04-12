/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSLock, NSMutableDictionary, NSMutableArray;

@interface AssetModel : NSObject {

	NSLock* m_assetLock;
	NSMutableDictionary* m_assetMap;
	NSMutableArray* m_knownAssets;
	double m_lastAssetsLibraryInvalidationAttempt;

}
+(id)sharedInstance;
+(double)imageScale;
+(double)thumbnailScale;
+(id)deviceCharacteristicsDict;
+(double)maxPixelsForImage:(BOOL)arg1 ;
+(id)builtInAssetDirectoryForClipType:(int)arg1 ;
+(id)assetDirectory;
-(id)init;
-(void)dealloc;
-(id)assetPathsForClipType:(int)arg1 inProjectPath:(id)arg2 excludingURLs:(id)arg3 ;
-(void)clearAssetsList;
-(void)invalidateAssetLibrary;
-(void)loadAssetsListIfNeeded;
-(void)mpMediaLibraryDidChange:(id)arg1 ;
-(id)builtInAssetPathsForClipType:(int)arg1 ;
-(id)fileTypesForClipType:(int)arg1 ;
-(id)files:(id)arg1 atPath:(id)arg2 filteredForTypes:(id)arg3 ;
-(id)filterURLs:(id)arg1 fromPaths:(id)arg2 ;
-(id)pathForBuiltInAssetWithName:(id)arg1 ;
-(id)assetPathsForRecordedAudio;
-(id)assetPathsForProjectAudio;
-(id)assetPathsForSharedAudio;
-(id)imageViewWithThemeImageNamed:(id)arg1 renderingIntent:(int)arg2 allowProxies:(BOOL)arg3 ;
-(id)ingestMovieAtPath:(id)arg1 intoProject:(id)arg2 asSharedAssets:(BOOL)arg3 ;
@end

