/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_alias : 1;
		unsigned wrote_geoOntologyId : 1;
		unsigned wrote_localizedNames : 1;
		unsigned wrote_level : 1;
	}  _flags;

}

@property (nonatomic,retain) NSString * alias; 
@property (assign,nonatomic) int level; 
@property (assign,nonatomic) BOOL hasGeoOntologyId; 
@property (assign,nonatomic) long long geoOntologyId; 
@property (nonatomic,retain) NSMutableArray * localizedNames; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)localizedNamesType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)level;
-(id)dictionaryRepresentation;
-(NSMutableArray *)localizedNames;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLevel:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setAlias:(NSString *)arg1 ;
-(void)addLocalizedNames:(id)arg1 ;
-(id)initWithPlaceDataCategory:(id)arg1 ;
-(unsigned long long)localizedNamesCount;
-(void)_readAlias;
-(void)_readLocalizedNames;
-(void)_addNoFlagsLocalizedNames:(id)arg1 ;
-(NSString *)alias;
-(void)clearLocalizedNames;
-(id)localizedNamesAtIndex:(unsigned long long)arg1 ;
-(long long)geoOntologyId;
-(void)setGeoOntologyId:(long long)arg1 ;
-(void)setHasGeoOntologyId:(BOOL)arg1 ;
-(BOOL)hasGeoOntologyId;
-(void)setLocalizedNames:(NSMutableArray *)arg1 ;
@end

