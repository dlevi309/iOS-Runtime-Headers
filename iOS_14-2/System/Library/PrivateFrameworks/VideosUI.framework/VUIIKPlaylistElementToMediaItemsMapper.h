/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

