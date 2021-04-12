/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOABConfigValue;

@interface GEOABConfigKeyValuePair : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _abConfigKey;
	GEOABConfigValue* _abConfigValue;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _abConfigValueType;
	struct {
		unsigned has_abConfigValueType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_abConfigKey : 1;
		unsigned read_abConfigValue : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAbConfigKey; 
@property (nonatomic,retain) NSString * abConfigKey; 
@property (assign,nonatomic) BOOL hasAbConfigValueType; 
@property (assign,nonatomic) int abConfigValueType; 
@property (nonatomic,readonly) BOOL hasAbConfigValue; 
@property (nonatomic,retain) GEOABConfigValue * abConfigValue; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setAbConfigKey:(NSString *)arg1 ;
-(void)setAbConfigValueType:(int)arg1 ;
-(void)setAbConfigValue:(GEOABConfigValue *)arg1 ;
-(void)setHasAbConfigValueType:(BOOL)arg1 ;
-(BOOL)hasAbConfigValueType;
-(id)abConfigValueTypeAsString:(int)arg1 ;
-(int)StringAsAbConfigValueType:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasAbConfigKey;
-(BOOL)hasAbConfigValue;
-(GEOABConfigValue *)abConfigValue;
-(int)abConfigValueType;
-(NSString *)abConfigKey;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

