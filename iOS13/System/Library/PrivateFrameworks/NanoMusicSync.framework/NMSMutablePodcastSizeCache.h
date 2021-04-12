/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <NanoMusicSync/NMSPodcastSizeCache.h>

@class NSMutableDictionary;

@interface NMSMutablePodcastSizeCache : NMSPodcastSizeCache {

	NSMutableDictionary* _mutableRelationshipDict;
	NSMutableDictionary* _mutableEpisodeSizeInfoDict;

}

@property (retain) NSMutableDictionary * mutableRelationshipDict;                 //@synthesize mutableRelationshipDict=_mutableRelationshipDict - In the implementation block
@property (retain) NSMutableDictionary * mutableEpisodeSizeInfoDict;              //@synthesize mutableEpisodeSizeInfoDict=_mutableEpisodeSizeInfoDict - In the implementation block
-(id)init;
-(void)synchronize;
-(id)itemsForFeedURL:(id)arg1 ;
-(id)episodeSizeInfoDict;
-(id)relationshipDict;
-(NSMutableDictionary *)mutableRelationshipDict;
-(NSMutableDictionary *)mutableEpisodeSizeInfoDict;
-(id)_currentPodcastSizeDictionary;
-(void)setEpisodes:(id)arg1 forFeedURL:(id)arg2 ;
-(void)setEpisodeSizeInfo:(id)arg1 forEpisode:(id)arg2 ;
-(void)setMutableRelationshipDict:(NSMutableDictionary *)arg1 ;
-(void)setMutableEpisodeSizeInfoDict:(NSMutableDictionary *)arg1 ;
@end

