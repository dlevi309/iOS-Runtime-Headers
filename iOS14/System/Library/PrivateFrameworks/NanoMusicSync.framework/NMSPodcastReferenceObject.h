/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(NSString *)feedURL;
-(BOOL)isEqual:(id)arg1 ;
-(id)predicatesForFeedURL;
-(id)initWithFeedURL:(id)arg1 episodeLimit:(unsigned long long)arg2 downloadOrder:(unsigned long long)arg3 ;
-(unsigned long long)episodeLimit;
-(unsigned long long)downloadOrder;
-(id)initWithFeedURL:(id)arg1 downloadOrder:(unsigned long long)arg2 ;
-(void)setEpisodeLimit:(unsigned long long)arg1 ;
@end

