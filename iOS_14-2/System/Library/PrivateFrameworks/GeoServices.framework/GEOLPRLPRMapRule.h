/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOLPRLicensePlateStructure, NSMutableArray;

@interface GEOLPRLPRMapRule : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE17* _plateTypeIndexes;
	GEOLPRLicensePlateStructure* _mrLicensePlateStructure;
	NSMutableArray* _targetChars;
	NSMutableArray* _valueMappings;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_plateTypeIndexes : 1;
		unsigned read_mrLicensePlateStructure : 1;
		unsigned read_targetChars : 1;
		unsigned read_valueMappings : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMrLicensePlateStructure; 
@property (nonatomic,retain) GEOLPRLicensePlateStructure * mrLicensePlateStructure; 
@property (nonatomic,readonly) unsigned long long plateTypeIndexesCount; 
@property (nonatomic,readonly) unsigned* plateTypeIndexes; 
@property (nonatomic,retain) NSMutableArray * targetChars; 
@property (nonatomic,retain) NSMutableArray * valueMappings; 
+(Class)targetCharType;
+(Class)valueMappingType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)addPlateTypeIndexes:(unsigned)arg1 ;
-(unsigned long long)plateTypeIndexesCount;
-(void)clearPlateTypeIndexes;
-(unsigned*)plateTypeIndexes;
-(unsigned)plateTypeIndexesAtIndex:(unsigned long long)arg1 ;
-(void)setPlateTypeIndexes:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(GEOLPRLicensePlateStructure *)mrLicensePlateStructure;
-(void)addTargetChar:(id)arg1 ;
-(void)addValueMapping:(id)arg1 ;
-(void)setMrLicensePlateStructure:(GEOLPRLicensePlateStructure *)arg1 ;
-(unsigned long long)targetCharsCount;
-(void)clearTargetChars;
-(id)targetCharAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)valueMappingsCount;
-(void)clearValueMappings;
-(id)valueMappingAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)targetChars;
-(void)setTargetChars:(NSMutableArray *)arg1 ;
-(NSMutableArray *)valueMappings;
-(void)setValueMappings:(NSMutableArray *)arg1 ;
-(BOOL)hasMrLicensePlateStructure;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

