/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setUpdateInterval:(long long)arg1 ;
-(long long)updateInterval;
-(long long)episodeLimit;
-(long long)deletePlayedEpisodes;
-(BOOL)episodeOrderAscending;
-(int)downloadEpisodes;
-(void)setDeletePlayedEpisodes:(long long)arg1 ;
-(void)setEpisodeLimit:(long long)arg1 ;
-(void)setEpisodeOrderAscending:(BOOL)arg1 ;
-(void)setDownloadEpisodes:(int)arg1 ;
@end

