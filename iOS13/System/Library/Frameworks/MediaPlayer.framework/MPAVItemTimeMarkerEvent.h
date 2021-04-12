/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPAVItem, MPTimeMarker;

@interface MPAVItemTimeMarkerEvent : NSObject {

	MPAVItem* _AVItem;
	MPTimeMarker* _chapterMarker;
	MPTimeMarker* _artworkMarker;
	MPTimeMarker* _URLMarker;
	MPTimeMarker* _closedCaptionMarker;

}

@property (nonatomic,retain) MPAVItem * AVItem;                               //@synthesize AVItem=_AVItem - In the implementation block
@property (nonatomic,retain) MPTimeMarker * chapterMarker;                    //@synthesize chapterMarker=_chapterMarker - In the implementation block
@property (nonatomic,retain) MPTimeMarker * artworkMarker;                    //@synthesize artworkMarker=_artworkMarker - In the implementation block
@property (nonatomic,retain) MPTimeMarker * URLMarker;                        //@synthesize URLMarker=_URLMarker - In the implementation block
@property (nonatomic,retain) MPTimeMarker * closedCaptionMarker;              //@synthesize closedCaptionMarker=_closedCaptionMarker - In the implementation block
-(id)initWithTimeMarkerNotificationUserInfo:(id)arg1 ;
-(id)crossedMarkerOfType:(long long)arg1 ;
-(MPAVItem *)AVItem;
-(void)setAVItem:(MPAVItem *)arg1 ;
-(MPTimeMarker *)chapterMarker;
-(void)setChapterMarker:(MPTimeMarker *)arg1 ;
-(MPTimeMarker *)artworkMarker;
-(void)setArtworkMarker:(MPTimeMarker *)arg1 ;
-(MPTimeMarker *)URLMarker;
-(void)setURLMarker:(MPTimeMarker *)arg1 ;
-(MPTimeMarker *)closedCaptionMarker;
-(void)setClosedCaptionMarker:(MPTimeMarker *)arg1 ;
@end

