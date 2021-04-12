/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaItemCollection.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MPCacheableConcreteMediaEntity.h>

@class MPMediaQuery, MPMediaItem, MPConcreteMediaEntityPropertiesCache;

@interface MPConcreteMediaItemCollection : MPMediaItemCollection <NSCopying, MPCacheableConcreteMediaEntity> {

	long long _identifier;
	MPMediaQuery* _itemsQuery;
	long long _grouping;
	MPMediaItem* _representativeItem;
	MPConcreteMediaEntityPropertiesCache* _propertiesCache;

}

@property (nonatomic,retain,readonly) MPConcreteMediaEntityPropertiesCache * cachedPropertyValues; 
+(BOOL)supportsSecureCoding;
+(id)createUncachedMediaItemCollectionWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(long long)arg4 representativeItemIdentifier:(long long)arg5 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)items;
-(unsigned long long)persistentID;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)representativeItem;
-(id)mediaLibrary;
-(id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2 ;
-(long long)groupingType;
-(void)_enumerateItemPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(id)valuesForProperties:(id)arg1 ;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)itemsQuery;
-(void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(MPConcreteMediaEntityPropertiesCache *)cachedPropertyValues;
-(void)invalidateCachedProperties;
-(id)_initWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(long long)arg4 representativeItemIdentifier:(long long)arg5 propertiesCache:(id)arg6 ;
-(id)initWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(long long)arg4 representativeItemIdentifier:(long long)arg5 ;
-(id)initWithIdentifier:(long long)arg1 itemsQuery:(id)arg2 grouping:(long long)arg3 ;
@end

