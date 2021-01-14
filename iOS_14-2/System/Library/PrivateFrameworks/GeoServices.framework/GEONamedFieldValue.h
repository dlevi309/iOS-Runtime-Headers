/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEONamedField, NSString;

@interface GEONamedFieldValue : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	double _doubleValue;
	long long _intValue;
	GEONamedField* _mapValue;
	NSString* _stringValue;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _boolValue;
	struct {
		unsigned has_doubleValue : 1;
		unsigned has_intValue : 1;
		unsigned has_boolValue : 1;
		unsigned read_unknownFields : 1;
		unsigned read_mapValue : 1;
		unsigned read_stringValue : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue; 
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue; 
@property (assign,nonatomic) BOOL hasIntValue; 
@property (assign,nonatomic) long long intValue; 
@property (assign,nonatomic) BOOL hasBoolValue; 
@property (assign,nonatomic) BOOL boolValue; 
@property (nonatomic,readonly) BOOL hasMapValue; 
@property (nonatomic,retain) GEONamedField * mapValue; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(double)doubleValue;
-(BOOL)boolValue;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasStringValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEONamedField *)mapValue;
-(NSString *)stringValue;
-(id)initWithData:(id)arg1 ;
-(void)setIntValue:(long long)arg1 ;
-(void)setMapValue:(GEONamedField *)arg1 ;
-(void)setHasIntValue:(BOOL)arg1 ;
-(BOOL)hasIntValue;
-(void)setHasBoolValue:(BOOL)arg1 ;
-(BOOL)hasBoolValue;
-(BOOL)hasMapValue;
-(id)initWithDictionary:(id)arg1 ;
-(void)setBoolValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(long long)intValue;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

