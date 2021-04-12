/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MIPArtist : PBCodable <NSCopying> {

	long long _persistentId;
	long long _storeId;
	NSString* _artworkId;
	NSString* _cloudUniversalLibraryId;
	NSString* _name;
	NSString* _sortName;
	SCD_Struct_MI1 _has;

}

@property (assign,nonatomic) BOOL hasStoreId; 
@property (assign,nonatomic) long long storeId;                               //@synthesize storeId=_storeId - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasSortName; 
@property (nonatomic,retain) NSString * sortName;                             //@synthesize sortName=_sortName - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkId; 
@property (nonatomic,retain) NSString * artworkId;                            //@synthesize artworkId=_artworkId - In the implementation block
@property (assign,nonatomic) BOOL hasPersistentId; 
@property (assign,nonatomic) long long persistentId;                          //@synthesize persistentId=_persistentId - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudUniversalLibraryId; 
@property (nonatomic,retain) NSString * cloudUniversalLibraryId;              //@synthesize cloudUniversalLibraryId=_cloudUniversalLibraryId - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasName;
-(NSString *)sortName;
-(long long)storeId;
-(BOOL)hasStoreId;
-(NSString *)cloudUniversalLibraryId;
-(BOOL)hasCloudUniversalLibraryId;
-(void)mergeFrom:(id)arg1 ;
-(void)setStoreId:(long long)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)persistentId;
-(BOOL)hasSortName;
-(BOOL)hasPersistentId;
-(BOOL)hasArtworkId;
-(NSString *)artworkId;
-(void)setHasStoreId:(BOOL)arg1 ;
-(void)setPersistentId:(long long)arg1 ;
-(void)setHasPersistentId:(BOOL)arg1 ;
-(void)setSortName:(NSString *)arg1 ;
-(void)setArtworkId:(NSString *)arg1 ;
-(void)setCloudUniversalLibraryId:(NSString *)arg1 ;
@end

