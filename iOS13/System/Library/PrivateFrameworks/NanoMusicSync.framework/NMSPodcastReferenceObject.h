/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSString;

@interface NMSPodcastReferenceObject : NSObject {

	NSString* _feedURL;
	unsigned long long _episodeLimit;
	unsigned long long _downloadOrder;

}

@property (nonatomic,readonly) NSString * feedURL;                            //@synthesize feedURL=_feedURL - In the implementation block
@property (assign,nonatomic) unsigned long long episodeLimit;                 //@synthesize episodeLimit=_episodeLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long downloadOrder;              //@synthesize downloadOrder=_downloadOrder - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)feedURL;
-(unsigned long long)episodeLimit;
-(void)setEpisodeLimit:(unsigned long long)arg1 ;
-(id)predicatesForFeedURL;
-(id)initWithFeedURL:(id)arg1 episodeLimit:(unsigned long long)arg2 downloadOrder:(unsigned long long)arg3 ;
-(unsigned long long)downloadOrder;
-(id)initWithFeedURL:(id)arg1 downloadOrder:(unsigned long long)arg2 ;
@end

