/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSDictionary, NSString, WLKBasicEpisodeMetadata, NSArray;

@interface WLKCanonicalContainerResponse : NSObject {

	BOOL _watchListable;
	BOOL _watchListed;
	NSDictionary* _dictionary;
	NSString* _canonicalID;
	unsigned long long _contentType;
	WLKBasicEpisodeMetadata* _currentEpisode;
	NSDictionary* _defaultSeason;
	NSArray* _channels;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionary;                             //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalID;                                //@synthesize canonicalID=_canonicalID - In the implementation block
@property (nonatomic,readonly) unsigned long long contentType;                             //@synthesize contentType=_contentType - In the implementation block
@property (getter=isWatchListable,nonatomic,readonly) BOOL watchListable;                  //@synthesize watchListable=_watchListable - In the implementation block
@property (getter=isWatchListed,nonatomic,readonly) BOOL watchListed;                      //@synthesize watchListed=_watchListed - In the implementation block
@property (nonatomic,copy,readonly) WLKBasicEpisodeMetadata * currentEpisode;              //@synthesize currentEpisode=_currentEpisode - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * defaultSeason;                          //@synthesize defaultSeason=_defaultSeason - In the implementation block
@property (nonatomic,copy,readonly) NSArray * channels;                                    //@synthesize channels=_channels - In the implementation block
-(id)init;
-(unsigned long long)contentType;
-(NSString *)canonicalID;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isWatchListed;
-(BOOL)isWatchListable;
-(NSDictionary *)dictionary;
-(WLKBasicEpisodeMetadata *)currentEpisode;
-(NSArray *)channels;
-(NSDictionary *)defaultSeason;
@end

