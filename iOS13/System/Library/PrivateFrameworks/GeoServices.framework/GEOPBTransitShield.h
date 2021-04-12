/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_shieldColor : 1;
		unsigned wrote_shieldText : 1;
		unsigned wrote_shieldEnumValue : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long shieldType; 
@property (nonatomic,readonly) NSString * shieldText; 
@property (nonatomic,readonly) NSString * shieldColorString; 
@property (nonatomic,readonly) BOOL hasShieldText; 
@property (nonatomic,retain) NSString * shieldText; 
@property (assign,nonatomic) BOOL hasShieldEnumValue; 
@property (assign,nonatomic) unsigned shieldEnumValue; 
@property (nonatomic,readonly) BOOL hasShieldColor; 
@property (nonatomic,retain) NSString * shieldColor; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
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
-(void)_readShieldText;
-(void)_readShieldColor;
-(NSString *)shieldText;
-(NSString *)shieldColor;
-(void)setShieldText:(NSString *)arg1 ;
-(void)setShieldColor:(NSString *)arg1 ;
-(BOOL)hasShieldText;
-(unsigned)shieldEnumValue;
-(void)setShieldEnumValue:(unsigned)arg1 ;
-(void)setHasShieldEnumValue:(BOOL)arg1 ;
-(BOOL)hasShieldEnumValue;
-(BOOL)hasShieldColor;
-(long long)shieldType;
-(NSString *)shieldColorString;
@end

