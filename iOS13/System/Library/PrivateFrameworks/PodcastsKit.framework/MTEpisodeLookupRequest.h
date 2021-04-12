/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@class NSString;

@interface MTEpisodeLookupRequest : NSObject {

	NSString* _uuid;
	long long _storeTrackId;
	long long _persistentID;
	NSString* _episodeGuid;
	NSString* _podcastFeedUrl;
	NSString* _episodeTitle;
	NSString* _podcastTitle;
	NSString* _streamUrl;

}

@property (nonatomic,retain) NSString * uuid;                        //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) long long storeTrackId;                 //@synthesize storeTrackId=_storeTrackId - In the implementation block
@property (assign,nonatomic) long long persistentID;                 //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,retain) NSString * episodeGuid;                 //@synthesize episodeGuid=_episodeGuid - In the implementation block
@property (nonatomic,retain) NSString * podcastFeedUrl;              //@synthesize podcastFeedUrl=_podcastFeedUrl - In the implementation block
@property (nonatomic,retain) NSString * episodeTitle;                //@synthesize episodeTitle=_episodeTitle - In the implementation block
@property (nonatomic,retain) NSString * podcastTitle;                //@synthesize podcastTitle=_podcastTitle - In the implementation block
@property (nonatomic,retain) NSString * streamUrl;                   //@synthesize streamUrl=_streamUrl - In the implementation block
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(long long)persistentID;
-(void)setPersistentID:(long long)arg1 ;
-(NSString *)podcastTitle;
-(NSString *)streamUrl;
-(void)setStreamUrl:(NSString *)arg1 ;
-(void)setStoreTrackId:(long long)arg1 ;
-(long long)storeTrackId;
-(void)setEpisodeGuid:(NSString *)arg1 ;
-(void)setEpisodeTitle:(NSString *)arg1 ;
-(void)setPodcastTitle:(NSString *)arg1 ;
-(void)setPodcastFeedUrl:(NSString *)arg1 ;
-(NSString *)podcastFeedUrl;
-(NSString *)episodeGuid;
-(NSString *)episodeTitle;
@end

