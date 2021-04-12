/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaPlaylist.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, MPMediaQuery;

@interface MPConcreteMediaPlaylist : MPMediaPlaylist <NSCopying> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _properties;
	MPMediaQuery* _itemsQuery;
	void* _clusterPlaylist;

}
+(BOOL)supportsSecureCoding;
-(void)removeAllItems;
-(BOOL)existsInLibrary;
-(void)addMediaItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeFirstItem;
-(id)multiverseIdentifier;
-(id)itemsQuery;
-(void)_enumerateItemPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valuesForProperties:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(unsigned long long)count;
-(void)addItemWithProductID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)items;
-(void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(BOOL)_allowsEditing;
-(id)initWithProperties:(id)arg1 itemsQuery:(id)arg2 ;
-(void)_updateLibraryForPlaylistEdit:(id)arg1 ;
-(void)replaceItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)replaceItemsWithPersistentIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)appendItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)appendItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeItems:(id)arg1 atFilteredIndexes:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)populateWithSeedItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)populateWithSeedItem:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)beginGeneratingGeniusClusterItemsWithSeedItems:(id)arg1 error:(id*)arg2 ;
-(id)geniusClusterItemsWithCount:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)endGeneratingGeniusClusterItems;
-(id)representativeItem;
-(unsigned long long)mediaTypes;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)mediaLibrary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

