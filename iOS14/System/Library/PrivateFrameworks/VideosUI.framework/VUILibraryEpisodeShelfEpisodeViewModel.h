/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(VUIMediaItem *)episode;
-(void)setEpisode:(VUIMediaItem *)arg1 ;
-(NSObject*<VUIMediaEntityAssetController>)assetController;
-(void)setAssetController:(NSObject*<VUIMediaEntityAssetController>)arg1 ;
@end

