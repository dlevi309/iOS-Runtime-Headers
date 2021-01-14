/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOCollectionDetails : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE92* _collectionIds;
	NSString* _collectionCategory;
	unsigned long long _targetId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _currentlySaved;
	struct {
		unsigned has_targetId : 1;
		unsigned has_currentlySaved : 1;
		unsigned read_collectionIds : 1;
		unsigned read_collectionCategory : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long collectionIdsCount; 
@property (nonatomic,readonly) unsigned long long* collectionIds; 
@property (nonatomic,readonly) BOOL hasCollectionCategory; 
@property (nonatomic,retain) NSString * collectionCategory; 
@property (assign,nonatomic) BOOL hasTargetId; 
@property (assign,nonatomic) unsigned long long targetId; 
@property (assign,nonatomic) BOOL hasCurrentlySaved; 
@property (assign,nonatomic) BOOL currentlySaved; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long*)collectionIds;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setCollectionCategory:(NSString *)arg1 ;
-(void)setCurrentlySaved:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)collectionIdsCount;
-(id)initWithDictionary:(id)arg1 ;
-(void)addCollectionId:(unsigned long long)arg1 ;
-(void)clearCollectionIds;
-(unsigned long long)collectionIdAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)targetId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTargetId:(unsigned long long)arg1 ;
-(void)dealloc;
-(NSString *)collectionCategory;
-(BOOL)hasCollectionCategory;
-(void)setCollectionIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasTargetId:(BOOL)arg1 ;
-(BOOL)hasTargetId;
-(BOOL)currentlySaved;
-(void)setHasCurrentlySaved:(BOOL)arg1 ;
-(BOOL)hasCurrentlySaved;
@end

