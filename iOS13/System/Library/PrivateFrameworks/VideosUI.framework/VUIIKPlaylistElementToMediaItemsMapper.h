/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@interface VUIIKPlaylistElementToMediaItemsMapper : NSObject {

	unsigned long long _resumeMenuBehavior;

}

@property (assign,nonatomic) unsigned long long resumeMenuBehavior;              //@synthesize resumeMenuBehavior=_resumeMenuBehavior - In the implementation block
-(id)init;
-(unsigned long long)resumeMenuBehavior;
-(id)_storeMediaItemsForAdamID:(long long)arg1 IKMediaElement:(id)arg2 ;
-(id)_storeAuxMediaItemForIKMediaElement:(id)arg1 isExtrasContent:(BOOL)arg2 ;
-(id)_clipMediaItemsMediaItem:(id)arg1 fromTimelineElement:(id)arg2 ;
-(void)_populateMediaItem:(id)arg1 withMetadatafromTimelineEventElement:(id)arg2 ;
-(void)_populateMediaItem:(id)arg1 withMetadatafromRelatedContentElement:(id)arg2 ;
-(BOOL)_shouldDisableResumeMenuForAsset:(id)arg1 ;
-(id)playlistForIKMediaElements:(id)arg1 isExtrasContent:(BOOL)arg2 ;
-(void)_populateMediaItem:(id)arg1 withMetadatafromVideoElement:(id)arg2 ;
-(void)setResumeMenuBehavior:(unsigned long long)arg1 ;
@end

