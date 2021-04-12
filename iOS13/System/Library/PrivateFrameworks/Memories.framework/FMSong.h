/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol FlexSongProtocol;
#import <Memories/Memories-Structs.h>
@class NSObject;

@interface FMSong : NSObject {

	NSObject*<FlexSongProtocol> _backend;

}

@property (readonly) NSObject*<FlexSongProtocol> backend;              //@synthesize backend=_backend - In the implementation block
+(id)loadSongBundleAtPath:(id)arg1 ;
+(id)availableTagIDs;
+(id)localizedNameForTagWithID:(id)arg1 ;
+(id)loadSongsAndArtworkInFolderAtPath:(id)arg1 ;
+(BOOL)hasValidTagIDs:(id)arg1 ;
+(long long)versionFromArtworkFilename:(id)arg1 ;
-(id)description;
-(BOOL)isLoaded;
-(id)_impl;
-(id)keywords;
-(id)uid;
-(BOOL)hidden;
-(long long)sampleRate;
-(NSObject*<FlexSongProtocol>)backend;
-(id)artwork;
-(BOOL)canPlay;
-(id)artistName;
-(id)initWithBackend:(id)arg1 ;
-(long long)metadataVersion;
-(id)tagIDs;
-(void)updateAssets:(id)arg1 ;
-(void)_loadIfNeeded;
-(SCD_Struct_PM5)naturalDuration;
-(SCD_Struct_PM5)minimumDuration;
-(id)assetWithID:(id)arg1 ;
-(id)songName;
-(void)requestDownloadOfAllAssetsWithIDs:(id)arg1 ;
-(void)cancelDownloadOfAllAssetsWithIDs:(id)arg1 ;
-(BOOL)recalled;
-(id)mappedToVEK;
-(id)renditionForDuration:(SCD_Struct_PM5)arg1 withOptions:(id)arg2 ;
-(void)requestDownloadOfAllAssetsWithIDs:(id)arg1 withOptions:(id)arg2 ;
-(void)_notifySongAssetsChanged;
-(BOOL)_loadFlexSong;
-(id)customOptions;
-(id)existingAssetWithID:(id)arg1 ;
-(void)updateBackend:(id)arg1 ;
-(id)songFormat;
-(id)audioEncoderPresetName;
-(void)updateAsset:(id)arg1 downloadProgress:(double)arg2 ;
-(id)idealDurations;
-(id)renditionForDuration:(SCD_Struct_PM5)arg1 withOptions:(id)arg2 testingContext:(id)arg3 ;
@end

