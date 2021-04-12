/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class NSArray, NSData;

@interface ML3StoreItemPlaylistData : NSObject {

	NSArray* _lookupItems;
	NSData* _playlistData;
	NSArray* _parsedPlaylistsImportProperties;

}

@property (nonatomic,readonly) NSData * playlistsData; 
@property (nonatomic,readonly) NSArray * parsedStorePlaylistsImportProperties; 
@property (nonatomic,readonly) unsigned long long playlistCount; 
-(NSData *)playlistsData;
-(id)initWithLookupItems:(id)arg1 ;
-(NSArray *)parsedStorePlaylistsImportProperties;
-(id)_playlistPropertiesForLookupItems:(id)arg1 ;
-(id)_playlistPropertiesFromPlaylistData:(id)arg1 ;
-(id)_bestPlaylistArtworkImageURLFromStoreArtworkVariants:(id)arg1 ;
-(id)_bestArtworkImageURLFromStoreArtworkVariants:(id)arg1 cropStyle:(id)arg2 ;
-(id)initWithPlaylistsData:(id)arg1 ;
-(unsigned long long)playlistCount;
@end

