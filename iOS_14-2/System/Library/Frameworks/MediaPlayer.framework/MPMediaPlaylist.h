/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPMediaItemCollection.h>

@class NSArray, MPMediaQuery, NSString;

@interface MPMediaPlaylist : MPMediaItemCollection {

	NSArray* _representativeArtists;
	MPMediaQuery* _seedTracksQuery;

}

@property (nonatomic,readonly) unsigned long long persistentID; 
@property (nonatomic,readonly) NSString * cloudGlobalID; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long playlistAttributes; 
@property (nonatomic,readonly) NSArray * seedItems; 
@property (nonatomic,readonly) NSString * descriptionText; 
@property (nonatomic,readonly) NSString * authorDisplayName; 
+(BOOL)supportsSecureCoding;
+(BOOL)_isValidPlaylistProperty:(id)arg1 ;
+(BOOL)canFilterByProperty:(id)arg1 ;
+(void)_createFilterableDictionary;
-(id)artworkCatalogsWithMaximumCount:(unsigned long long)arg1 ;
-(id)tiledArtworkCatalogWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 ;
-(NSArray *)seedItems;
-(BOOL)existsInLibrary;
-(BOOL)isCloudMix;
-(id)initWithPersistentID:(unsigned long long)arg1 ;
-(NSString *)authorDisplayName;
-(id)initWithPersistentID:(unsigned long long)arg1 mediaLibrary:(id)arg2 ;
-(id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2 ;
-(unsigned long long)playlistAttributes;
-(NSString *)descriptionText;
-(void)addMediaItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeFirstItem;
-(id)multiverseIdentifier;
-(id)representativeArtists;
-(id)seedTracksQuery;
-(NSString *)cloudGlobalID;
-(void)setUserSelectedArtworkImage:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(void)addItemWithProductID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)items;
-(NSString *)name;
-(id)representativeItem;
-(unsigned long long)mediaTypes;
-(unsigned long long)persistentID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)artworkCatalog;
-(BOOL)isEqual:(id)arg1 ;
@end

