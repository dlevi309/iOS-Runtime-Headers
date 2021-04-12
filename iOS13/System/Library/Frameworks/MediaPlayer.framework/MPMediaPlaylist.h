/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPMediaItemCollection.h>

@class NSArray, MPMediaQuery, NSString;

@interface MPMediaPlaylist : MPMediaItemCollection {

	NSArray* _representativeArtists;
	MPMediaQuery* _seedTracksQuery;

}

@property (nonatomic,readonly) unsigned long long persistentID; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long playlistAttributes; 
@property (nonatomic,readonly) NSArray * seedItems; 
@property (nonatomic,readonly) NSString * descriptionText; 
@property (nonatomic,readonly) NSString * authorDisplayName; 
+(BOOL)supportsSecureCoding;
+(BOOL)_isValidPlaylistProperty:(id)arg1 ;
+(BOOL)canFilterByProperty:(id)arg1 ;
+(void)_createFilterableDictionary;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)items;
-(unsigned long long)persistentID;
-(id)valueForProperty:(id)arg1 ;
-(id)representativeItem;
-(unsigned long long)mediaTypes;
-(NSString *)descriptionText;
-(id)artworkCatalog;
-(id)initWithPersistentID:(unsigned long long)arg1 ;
-(id)initWithPersistentID:(unsigned long long)arg1 mediaLibrary:(id)arg2 ;
-(id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2 ;
-(void)addItemWithProductID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addMediaItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)existsInLibrary;
-(unsigned long long)playlistAttributes;
-(NSArray *)seedItems;
-(NSString *)authorDisplayName;
-(void)removeFirstItem;
-(id)multiverseIdentifier;
-(id)representativeArtists;
-(id)seedTracksQuery;
-(BOOL)isCloudMix;
-(void)setUserSelectedArtworkImage:(id)arg1 ;
-(id)artworkCatalogsWithMaximumCount:(unsigned long long)arg1 ;
-(id)tiledArtworkCatalogWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 ;
@end

