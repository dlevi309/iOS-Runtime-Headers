/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDAirportEntityPlaceLookupParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _airportCode;
	NSString* _gateCode;
	NSString* _terminalCode;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_airportCode : 1;
		unsigned read_gateCode : 1;
		unsigned read_terminalCode : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAirportCode; 
@property (nonatomic,retain) NSString * airportCode; 
@property (nonatomic,readonly) BOOL hasTerminalCode; 
@property (nonatomic,retain) NSString * terminalCode; 
@property (nonatomic,readonly) BOOL hasGateCode; 
@property (nonatomic,retain) NSString * gateCode; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)gateCode;
-(NSString *)airportCode;
-(NSString *)terminalCode;
-(void)setAirportCode:(NSString *)arg1 ;
-(void)setTerminalCode:(NSString *)arg1 ;
-(void)setGateCode:(NSString *)arg1 ;
-(BOOL)hasAirportCode;
-(BOOL)hasGateCode;
-(BOOL)hasTerminalCode;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

