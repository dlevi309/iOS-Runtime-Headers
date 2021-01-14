/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3Collection.h>

@interface ML3AlbumArtist : ML3Collection
+(id)propertyForMPMediaEntityProperty:(id)arg1 ;
+(id)databaseTable;
+(void)initialize;
+(id)allProperties;
+(id)defaultOrderingTerms;
+(long long)revisionTrackingCode;
+(id)trackForeignPersistentID;
+(id)predisambiguatedProperties;
+(BOOL)propertyIsCountProperty:(id)arg1 ;
+(id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3 ;
+(BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4 usingConnection:(id)arg5 ;
+(id)sectionPropertyForProperty:(id)arg1 ;
+(id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2 ;
+(id)propertiesForGroupingKey;
+(id)propertiesForGroupingUniqueCollections;
+(id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2 ;
-(id)multiverseIdentifier;
-(void)updateTrackValues:(id)arg1 ;
-(id)protocolItem;
@end

