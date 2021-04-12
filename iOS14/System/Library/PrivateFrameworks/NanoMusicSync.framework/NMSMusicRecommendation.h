/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <NanoMusicSync/NanoMusicSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSOrderedSet, NSMapTable, NSString, NSDate, MPArtworkCatalog, NSObject, NSArray;

@interface NMSMusicRecommendation : NSObject <NSCopying> {

	NSOrderedSet* _items;
	NSMapTable* _itemSectionMap;
	NSString* _identifier;
	NSString* _title;
	NSDate* _lastModifiedDate;
	MPArtworkCatalog* _artworkCatalog;
	NSObject*<OS_dispatch_queue> _serializerQueue;
	BOOL _selected;

}

@property (nonatomic,readonly) NSOrderedSet * items;                                   //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) MPArtworkCatalog * artworkCatalog; 
@property (assign,getter=isSelected,nonatomic) BOOL selected;                          //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSArray * storeRecommendationModelObjects; 
+(void)_fillArtworkMutableArray:(id)arg1 toCount:(unsigned long long)arg2 ;
+(id)_missingArtImage;
-(NSDate *)lastModifiedDate;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(NSOrderedSet *)items;
-(id)description;
-(unsigned long long)type;
-(MPArtworkCatalog *)artworkCatalog;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 items:(id)arg3 itemSectionMap:(id)arg4 ;
-(id)sectionForItemWithIdentifiers:(id)arg1 ;
-(id)initRecentMusicRecommendationWithItems:(id)arg1 itemSectionMap:(id)arg2 ;
-(BOOL)nms_isRecentMusic;
-(unsigned long long)recommendationSectionTypeForModelObject:(id)arg1 ;
-(id)_tiledArtworkRequestForPlaylists:(id)arg1 albums:(id)arg2 ;
-(NSArray *)storeRecommendationModelObjects;
@end

