/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3Entity.h>

@interface ML3Collection : ML3Entity
+(id)propertyForMPMediaEntityProperty:(id)arg1 ;
+(void)initialize;
+(id)trackForeignPersistentID;
+(BOOL)libraryContentsChangeForProperty:(id)arg1 ;
+(BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4 usingConnection:(id)arg5 ;
+(BOOL)canonicalizeCollectionRepresentativeItemsInLibrary:(id)arg1 usingConnection:(id)arg2 ;
+(id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2 ;
+(id)propertiesForGroupingKey;
+(id)propertiesForGroupingUniqueCollections;
+(BOOL)removeOrphanedCollectionsInLibrary:(id)arg1 usingConnection:(id)arg2 ;
+(id)collectionEntityClasses;
+(BOOL)_updateRepresentativeItemsForPersistentIDs:(id)arg1 usingConnection:(id)arg2 ;
+(id)artworkCacheIDProperty;
+(BOOL)updateRepresentativeItemPersistentIDsInLibrary:(id)arg1 persistentIDs:(id)arg2 usingConnection:(id)arg3 ;
-(id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4 ;
-(void)updateCloudStatus;
-(void)updateRepresentativeCollectionValues:(id)arg1 existingRepresentativePersistentID:(unsigned long long)arg2 forUpdateTrackValues:(id)arg3 ;
-(void)updateTrackValues:(id)arg1 ;
@end

