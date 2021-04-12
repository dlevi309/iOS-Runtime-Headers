/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VUIMediaEntityAssetController;
@class VUIMediaItem, NSObject;

@interface VUILibraryEpisodeShelfEpisodeViewModel : NSObject {

	VUIMediaItem* _episode;
	NSObject*<VUIMediaEntityAssetController> _assetController;

}

@property (nonatomic,retain) VUIMediaItem * episode;                                                //@synthesize episode=_episode - In the implementation block
@property (nonatomic,retain) NSObject*<VUIMediaEntityAssetController> assetController;              //@synthesize assetController=_assetController - In the implementation block
-(void)setEpisode:(VUIMediaItem *)arg1 ;
-(VUIMediaItem *)episode;
-(NSObject*<VUIMediaEntityAssetController>)assetController;
-(void)setAssetController:(NSObject*<VUIMediaEntityAssetController>)arg1 ;
@end

