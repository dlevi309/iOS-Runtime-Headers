/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOPDPrototype : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _componentType;
	NSMutableArray* _values;
	NSString* _version;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_componentType : 1;
		unsigned read_values : 1;
		unsigned read_version : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasComponentType; 
@property (nonatomic,retain) NSString * componentType; 
@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version; 
@property (nonatomic,retain) NSMutableArray * values; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)valueType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearValues;
-(void)addValue:(id)arg1 ;
-(BOOL)hasVersion;
-(unsigned long long)valuesCount;
-(PBUnknownFields *)unknownFields;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSMutableArray *)values;
-(void)mergeFrom:(id)arg1 ;
-(void)setComponentType:(NSString *)arg1 ;
-(BOOL)hasComponentType;
-(id)initWithData:(id)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)componentType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

