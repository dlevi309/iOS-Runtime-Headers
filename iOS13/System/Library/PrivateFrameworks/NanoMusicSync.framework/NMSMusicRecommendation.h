/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <NanoMusicSync/NanoMusicSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSOrderedSet, NSMapTable, NSString, NSDate, MPArtworkCatalog, NSObject, NSArray;

@interface NMSMusicRecommendation : NSObject <NSCopying> {

	NSOrderedSet* _items;
	NSMapTable* _itemSectionMap;
	NSString* _subtitle;
	NSDate* _lastModifiedDate;
	MPArtworkCatalog* _artworkCatalog;
	NSObject*<OS_dispatch_queue> _serializerQueue;
	BOOL _selected;
	NSString* _identifier;
	unsigned long long _type;

}

@property (nonatomic,readonly) NSOrderedSet * items;                                   //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL isHeavyRotation; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) MPArtworkCatalog * artworkCatalog; 
@property (assign,getter=isSelected,nonatomic) BOOL selected;                          //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * storeRecommendationModelObjects; 
+(id)_missingArtImage;
+(void)_fillArtworkMutableArray:(id)arg1 toCount:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(NSString *)identifier;
-(NSString *)title;
-(NSString *)subtitle;
-(NSOrderedSet *)items;
-(BOOL)isSelected;
-(void)_commonInit;
-(void)setSelected:(BOOL)arg1 ;
-(NSDate *)lastModifiedDate;
-(MPArtworkCatalog *)artworkCatalog;
-(id)_stringForDayOfWeek:(long long)arg1 ;
-(id)initWithItems:(id)arg1 itemSectionMap:(id)arg2 ;
-(id)initWithLibraryRecommendation;
-(id)initWithPlaylist:(id)arg1 section:(id)arg2 ;
-(BOOL)isHeavyRotation;
-(id)_tiledArtworkRequestForPlaylists:(id)arg1 albums:(id)arg2 ;
-(id)_artworkCatalogsForLibraryRecommendationAlbumsWithCount:(unsigned long long)arg1 ;
-(id)_artworkCatalogsForLibraryRecommendationPlaylistsWithCount:(unsigned long long)arg1 ;
-(id)sectionForItemWithIdentifiers:(id)arg1 ;
-(NSArray *)storeRecommendationModelObjects;
@end

