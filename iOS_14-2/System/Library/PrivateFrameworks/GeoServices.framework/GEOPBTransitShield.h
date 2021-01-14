/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitShieldDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitShield : PBCodable <GEOTransitShieldDataSource, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _shieldColor;
	NSString* _shieldText;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _shieldEnumValue;
	struct {
		unsigned has_shieldEnumValue : 1;
		unsigned read_unknownFields : 1;
		unsigned read_shieldColor : 1;
		unsigned read_shieldText : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) long long shieldType; 
@property (nonatomic,readonly) NSString * shieldText; 
@property (nonatomic,readonly) NSString * shieldColorString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasShieldText; 
@property (nonatomic,retain) NSString * shieldText; 
@property (assign,nonatomic) BOOL hasShieldEnumValue; 
@property (assign,nonatomic) unsigned shieldEnumValue; 
@property (nonatomic,readonly) BOOL hasShieldColor; 
@property (nonatomic,retain) NSString * shieldColor; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(NSString *)shieldColorString;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)shieldType;
-(NSString *)description;
-(void)setShieldText:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)shieldText;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)shieldColor;
-(void)setShieldEnumValue:(unsigned)arg1 ;
-(void)setShieldColor:(NSString *)arg1 ;
-(BOOL)hasShieldText;
-(unsigned)shieldEnumValue;
-(void)setHasShieldEnumValue:(BOOL)arg1 ;
-(BOOL)hasShieldEnumValue;
-(BOOL)hasShieldColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

