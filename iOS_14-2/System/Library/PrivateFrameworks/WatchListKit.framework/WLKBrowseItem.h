/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class WLKBasicContentMetadata, NSArray, WLKComingSoonInfo;

@interface WLKBrowseItem : NSObject {

	BOOL _watchlisted;
	BOOL _watchlistable;
	WLKBasicContentMetadata* _content;
	WLKBrowseItem* _currentEpisode;
	NSArray* _playables;
	WLKComingSoonInfo* _contentComingSoonInfo;

}

@property (nonatomic,retain) WLKComingSoonInfo * contentComingSoonInfo;                //@synthesize contentComingSoonInfo=_contentComingSoonInfo - In the implementation block
@property (nonatomic,readonly) WLKBasicContentMetadata * content;                      //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) WLKBrowseItem * currentEpisode;                         //@synthesize currentEpisode=_currentEpisode - In the implementation block
@property (nonatomic,readonly) NSArray * playables;                                    //@synthesize playables=_playables - In the implementation block
@property (getter=isWatchlisted,nonatomic,readonly) BOOL watchlisted;                  //@synthesize watchlisted=_watchlisted - In the implementation block
@property (getter=isWatchlistable,nonatomic,readonly) BOOL watchlistable;              //@synthesize watchlistable=_watchlistable - In the implementation block
+(id)browseItemsWithDictionaries:(id)arg1 context:(id)arg2 ;
-(WLKBasicContentMetadata *)content;
-(BOOL)isWatchlistable;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(WLKBrowseItem *)currentEpisode;
-(NSArray *)playables;
-(BOOL)isWatchlisted;
-(id)preferredComingSoonInfo;
-(WLKComingSoonInfo *)contentComingSoonInfo;
-(void)setContentComingSoonInfo:(WLKComingSoonInfo *)arg1 ;
@end

