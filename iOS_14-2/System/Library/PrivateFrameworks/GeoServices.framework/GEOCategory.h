/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOCategory : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _alias;
	long long _geoOntologyId;
	NSMutableArray* _localizedNames;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _level;
	struct {
		unsigned has_geoOntologyId : 1;
		unsigned read_unknownFields : 1;
		unsigned read_alias : 1;
		unsigned read_localizedNames : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSString * alias; 
@property (assign,nonatomic) int level; 
@property (assign,nonatomic) BOOL hasGeoOntologyId; 
@property (assign,nonatomic) long long geoOntologyId; 
@property (nonatomic,retain) NSMutableArray * localizedNames; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)localizedNamesType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(NSMutableArray *)localizedNames;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)alias;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)clearLocalizedNames;
-(void)setLocalizedNames:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setGeoOntologyId:(long long)arg1 ;
-(id)localizedNamesAtIndex:(unsigned long long)arg1 ;
-(long long)geoOntologyId;
-(void)setHasGeoOntologyId:(BOOL)arg1 ;
-(BOOL)hasGeoOntologyId;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(int)level;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setAlias:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addLocalizedNames:(id)arg1 ;
-(id)initWithPlaceDataCategory:(id)arg1 ;
-(unsigned long long)localizedNamesCount;
-(void)setLevel:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

