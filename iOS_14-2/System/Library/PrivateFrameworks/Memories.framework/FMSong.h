/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol FlexSongProtocol;
#import <Memories/Memories-Structs.h>
@class NSObject;

@interface FMSong : NSObject {

	NSObject*<FlexSongProtocol> _backend;

}

@property (readonly) NSObject*<FlexSongProtocol> backend;              //@synthesize backend=_backend - In the implementation block
+(id)loadSongsAndArtworkInFolderAtPath:(id)arg1 ;
+(id)loadSongBundleAtPath:(id)arg1 ;
+(id)availableTagIDs;
+(id)localizedNameForTagWithID:(id)arg1 ;
+(BOOL)hasValidTagIDs:(id)arg1 ;
+(long long)versionFromArtworkFilename:(id)arg1 ;
-(id)uid;
-(BOOL)hidden;
-(void)updateAssets:(id)arg1 ;
-(BOOL)canPlay;
-(id)keywords;
-(id)tagIDs;
-(id)artistName;
-(long long)metadataVersion;
-(id)initWithBackend:(id)arg1 ;
-(id)description;
-(void)_loadIfNeeded;
-(id)artwork;
-(NSObject*<FlexSongProtocol>)backend;
-(id)_impl;
-(BOOL)isLoaded;
-(long long)sampleRate;
-(SCD_Struct_PM8)minimumDuration;
-(id)songName;
-(id)assetWithID:(id)arg1 ;
-(void)requestDownloadOfAllAssetsWithIDs:(id)arg1 ;
-(void)cancelDownloadOfAllAssetsWithIDs:(id)arg1 ;
-(BOOL)recalled;
-(id)mappedToVEK;
-(SCD_Struct_PM8)naturalDuration;
-(id)renditionForDuration:(SCD_Struct_PM8)arg1 withOptions:(id)arg2 ;
-(void)requestDownloadOfAllAssetsWithIDs:(id)arg1 withOptions:(id)arg2 ;
-(void)_notifySongAssetsChanged;
-(BOOL)_loadFlexSong;
-(id)existingAssetWithID:(id)arg1 ;
-(void)updateBackend:(id)arg1 ;
-(id)songFormat;
-(id)audioEncoderPresetName;
-(void)updateAsset:(id)arg1 downloadProgress:(double)arg2 ;
-(id)idealDurations;
-(id)renditionForDuration:(SCD_Struct_PM8)arg1 withOptions:(id)arg2 testingContext:(id)arg3 ;
-(id)customOptions;
@end

