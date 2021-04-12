/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@interface MTShowSettings : NSObject {

	BOOL _episodeOrderAscending;
	int _downloadEpisodes;
	long long _deletePlayedEpisodes;
	long long _episodeLimit;
	long long _updateInterval;

}

@property (assign,nonatomic) BOOL episodeOrderAscending;                  //@synthesize episodeOrderAscending=_episodeOrderAscending - In the implementation block
@property (assign,nonatomic) int downloadEpisodes;                        //@synthesize downloadEpisodes=_downloadEpisodes - In the implementation block
@property (assign,nonatomic) long long deletePlayedEpisodes;              //@synthesize deletePlayedEpisodes=_deletePlayedEpisodes - In the implementation block
@property (assign,nonatomic) long long episodeLimit;                      //@synthesize episodeLimit=_episodeLimit - In the implementation block
@property (assign,nonatomic) long long updateInterval;                    //@synthesize updateInterval=_updateInterval - In the implementation block
-(long long)updateInterval;
-(void)setUpdateInterval:(long long)arg1 ;
-(long long)episodeLimit;
-(void)setEpisodeLimit:(long long)arg1 ;
-(long long)deletePlayedEpisodes;
-(BOOL)episodeOrderAscending;
-(int)downloadEpisodes;
-(void)setDeletePlayedEpisodes:(long long)arg1 ;
-(void)setEpisodeOrderAscending:(BOOL)arg1 ;
-(void)setDownloadEpisodes:(int)arg1 ;
@end

