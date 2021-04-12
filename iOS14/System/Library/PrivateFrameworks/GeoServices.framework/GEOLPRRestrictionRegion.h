/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString, GEOMapRegionE7;

@interface GEOLPRRestrictionRegion : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _convertRules;
	NSMutableArray* _definedPlateTypes;
	NSString* _identifier;
	GEOMapRegionE7* _mapRegion;
	NSString* _name;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_convertRules : 1;
		unsigned read_definedPlateTypes : 1;
		unsigned read_identifier : 1;
		unsigned read_mapRegion : 1;
		unsigned read_name : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegionE7 * mapRegion; 
@property (nonatomic,retain) NSMutableArray * definedPlateTypes; 
@property (nonatomic,retain) NSMutableArray * convertRules; 
+(Class)definedPlateTypesType;
+(Class)convertRuleType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasName;
-(id)init;
-(id)jsonRepresentation;
-(void)addDefinedPlateTypes:(id)arg1 ;
-(void)addConvertRule:(id)arg1 ;
-(unsigned long long)definedPlateTypesCount;
-(void)clearDefinedPlateTypes;
-(id)definedPlateTypesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)convertRulesCount;
-(void)clearConvertRules;
-(id)convertRuleAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)definedPlateTypes;
-(void)setDefinedPlateTypes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)convertRules;
-(void)setConvertRules:(NSMutableArray *)arg1 ;
-(GEOMapRegionE7 *)mapRegion;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasMapRegion;
-(NSString *)name;
-(id)description;
-(void)setMapRegion:(GEOMapRegionE7 *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

