/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOPDAmenityValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _vendorId;
	int _amenityType;
	BOOL _amenityPresent;
	struct {
		unsigned has_amenityType : 1;
		unsigned has_amenityPresent : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasAmenityType; 
@property (assign,nonatomic) int amenityType; 
@property (assign,nonatomic) BOOL hasAmenityPresent; 
@property (assign,nonatomic) BOOL amenityPresent; 
@property (nonatomic,readonly) BOOL hasVendorId; 
@property (nonatomic,retain) NSString * vendorId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setAmenityType:(int)arg1 ;
-(void)setAmenityPresent:(BOOL)arg1 ;
-(void)setHasAmenityType:(BOOL)arg1 ;
-(BOOL)hasAmenityType;
-(id)amenityTypeAsString:(int)arg1 ;
-(int)StringAsAmenityType:(id)arg1 ;
-(void)setHasAmenityPresent:(BOOL)arg1 ;
-(BOOL)hasAmenityPresent;
-(void)setVendorId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)vendorId;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)amenityPresent;
-(int)amenityType;
-(BOOL)hasVendorId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

