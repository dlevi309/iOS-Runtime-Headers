/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_abConfigKey : 1;
		unsigned wrote_abConfigValue : 1;
		unsigned wrote_abConfigValueType : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasAbConfigKey;
-(BOOL)hasAbConfigValue;
-(GEOABConfigValue *)abConfigValue;
-(int)abConfigValueType;
-(NSString *)abConfigKey;
-(void)_readAbConfigKey;
-(void)_readAbConfigValue;
-(void)setAbConfigKey:(NSString *)arg1 ;
-(void)setAbConfigValue:(GEOABConfigValue *)arg1 ;
-(void)setAbConfigValueType:(int)arg1 ;
-(void)setHasAbConfigValueType:(BOOL)arg1 ;
-(BOOL)hasAbConfigValueType;
-(id)abConfigValueTypeAsString:(int)arg1 ;
-(int)StringAsAbConfigValueType:(id)arg1 ;
@end

