/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPMediaItemArtwork, NSString;

@interface MPContentItem : NSObject {

	void* _mediaRemoteContentItem;
	MPMediaItemArtwork* _artwork;

}

@property (nonatomic,readonly) void* _mediaRemoteContentItem;                              //@synthesize mediaRemoteContentItem=_mediaRemoteContentItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) MPMediaItemArtwork * artwork;                                 //@synthesize artwork=_artwork - In the implementation block
@property (assign,nonatomic) float playbackProgress; 
@property (assign,getter=isStreamingContent,nonatomic) BOOL streamingContent; 
@property (assign,getter=isExplicitContent,nonatomic) BOOL explicitContent; 
@property (assign,getter=isContainer,nonatomic) BOOL container; 
@property (assign,getter=isPlayable,nonatomic) BOOL playable; 
+(BOOL)isSuppressingChangeNotifications;
+(void)performSuppressingChangeNotifications:(/*^block*/id)arg1 ;
+(void)performChangeImmediately:(/*^block*/id)arg1 ;
+(BOOL)shouldPushArtworkData;
-(BOOL)isPlayable;
-(void)setPlayable:(BOOL)arg1 ;
-(BOOL)isContainer;
-(id)init;
-(void)setArtwork:(MPMediaItemArtwork *)arg1 ;
-(BOOL)isStreamingContent;
-(NSString *)subtitle;
-(void*)_mediaRemoteContentItem;
-(id)initWithExternalRepresentation:(id)arg1 ;
-(id)_initWithMediaRemoteContentItem:(void*)arg1 ;
-(id)createExternalRepresentation;
-(void)setTitle:(NSString *)arg1 ;
-(void)_postItemChangedNotificationWithDeltaBlock:(/*^block*/id)arg1 ;
-(void)_loadArtwork:(id)arg1 completion:(/*^block*/id)arg2 ;
-(float)playbackProgress;
-(void)setPlaybackProgress:(float)arg1 ;
-(void)setContainer:(BOOL)arg1 ;
-(id)description;
-(void)setStreamingContent:(BOOL)arg1 ;
-(BOOL)isExplicitContent;
-(MPMediaItemArtwork *)artwork;
-(void)setExplicitContent:(BOOL)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

