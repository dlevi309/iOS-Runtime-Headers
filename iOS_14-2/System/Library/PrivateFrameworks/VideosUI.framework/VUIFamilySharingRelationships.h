/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class VUIFamilySharingRelationship, VUIFamilySharingPlaybackPositionRelationship;

@interface VUIFamilySharingRelationships : NSObject {

	VUIFamilySharingRelationship* _season;
	VUIFamilySharingRelationship* _show;
	VUIFamilySharingPlaybackPositionRelationship* _playbackPosition;

}

@property (nonatomic,retain) VUIFamilySharingRelationship * season;                                        //@synthesize season=_season - In the implementation block
@property (nonatomic,retain) VUIFamilySharingRelationship * show;                                          //@synthesize show=_show - In the implementation block
@property (nonatomic,retain) VUIFamilySharingPlaybackPositionRelationship * playbackPosition;              //@synthesize playbackPosition=_playbackPosition - In the implementation block
-(void)setPlaybackPosition:(VUIFamilySharingPlaybackPositionRelationship *)arg1 ;
-(VUIFamilySharingRelationship *)season;
-(VUIFamilySharingRelationship *)show;
-(void)setSeason:(VUIFamilySharingRelationship *)arg1 ;
-(void)setShow:(VUIFamilySharingRelationship *)arg1 ;
-(VUIFamilySharingPlaybackPositionRelationship *)playbackPosition;
@end

