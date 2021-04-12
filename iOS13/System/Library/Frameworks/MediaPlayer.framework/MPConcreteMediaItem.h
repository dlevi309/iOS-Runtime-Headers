/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaItem.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MPCacheableConcreteMediaEntity.h>

@protocol OS_dispatch_queue;
@class MPConcreteMediaEntityPropertiesCache, MPMediaLibrary, NSObject;

@interface MPConcreteMediaItem : MPMediaItem <NSCopying, MPCacheableConcreteMediaEntity> {

	MPMediaLibrary* _library;
	unsigned long long _persistentID;
	MPConcreteMediaEntityPropertiesCache* _propertiesCache;
	NSObject*<OS_dispatch_queue> _utilitySerialQueue;

}

@property (nonatomic,retain,readonly) MPConcreteMediaEntityPropertiesCache * cachedPropertyValues; 
+(BOOL)supportsSecureCoding;
+(id)concreteMediaItemWithPersistentID:(unsigned long long)arg1 library:(id)arg2 ;
+(id)concreteMediaItemWithPersistentID:(unsigned long long)arg1 ;
+(id)createUncachedConcreteMediaItemWithPersistentID:(unsigned long long)arg1 library:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(unsigned long long)persistentID;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)incrementPlayCount;
-(id)mediaLibrary;
-(id)initWithPersistentID:(unsigned long long)arg1 ;
-(BOOL)existsInLibrary;
-(id)valuesForProperties:(id)arg1 ;
-(BOOL)didSkipWithPlayedToTime:(double)arg1 ;
-(void)markNominalAmountHasBeenPlayed;
-(void)noteWasPlayedToTime:(double)arg1 skipped:(BOOL)arg2 ;
-(void)incrementSkipCount;
-(void)incrementPlayCountForPlayingToEnd;
-(BOOL)incrementPlayCountForStopTime:(double)arg1 ;
-(void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(/*^block*/id)arg1 ;
-(double)nominalHasBeenPlayedThreshold;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(MPConcreteMediaEntityPropertiesCache *)cachedPropertyValues;
-(id)initWithPersistentID:(unsigned long long)arg1 library:(id)arg2 ;
-(id)_initWithPersistentID:(unsigned long long)arg1 library:(id)arg2 propertiesCache:(id)arg3 ;
-(void)invalidateCachedProperties;
-(id)_nonBatchableOrCachedValueForProperty:(id)arg1 needsFetch:(BOOL*)arg2 ;
-(id)cachedValueForProperty:(id)arg1 isCached:(BOOL*)arg2 ;
@end

