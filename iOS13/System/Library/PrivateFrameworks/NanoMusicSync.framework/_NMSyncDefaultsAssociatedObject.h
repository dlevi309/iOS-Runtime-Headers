/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class MPMediaPlaylist;

@interface _NMSyncDefaultsAssociatedObject : NSObject {

	MPMediaPlaylist* _assetSyncPlaylist;

}

@property (nonatomic,retain) MPMediaPlaylist * assetSyncPlaylist;              //@synthesize assetSyncPlaylist=_assetSyncPlaylist - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(MPMediaPlaylist *)assetSyncPlaylist;
-(void)setAssetSyncPlaylist:(MPMediaPlaylist *)arg1 ;
@end

