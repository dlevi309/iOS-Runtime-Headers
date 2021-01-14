/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class MPMediaPlaylist;

@interface _NMSyncDefaultsAssociatedObject : NSObject {

	MPMediaPlaylist* _assetSyncPlaylist;

}

@property (nonatomic,retain) MPMediaPlaylist * assetSyncPlaylist;              //@synthesize assetSyncPlaylist=_assetSyncPlaylist - In the implementation block
-(id)init;
-(MPMediaPlaylist *)assetSyncPlaylist;
-(void)setAssetSyncPlaylist:(MPMediaPlaylist *)arg1 ;
-(void)dealloc;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
@end

