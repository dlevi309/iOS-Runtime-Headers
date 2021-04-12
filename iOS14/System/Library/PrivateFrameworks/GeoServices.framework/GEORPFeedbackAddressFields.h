/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEORPFeedbackAddressFields : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _addressBasic;
	NSString* _addressBuilding;
	NSString* _addressFloor;
	NSString* _addressUnit;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_addressBasic : 1;
		unsigned read_addressBuilding : 1;
		unsigned read_addressFloor : 1;
		unsigned read_addressUnit : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAddressBasic; 
@property (nonatomic,retain) NSString * addressBasic; 
@property (nonatomic,readonly) BOOL hasAddressUnit; 
@property (nonatomic,retain) NSString * addressUnit; 
@property (nonatomic,readonly) BOOL hasAddressFloor; 
@property (nonatomic,retain) NSString * addressFloor; 
@property (nonatomic,readonly) BOOL hasAddressBuilding; 
@property (nonatomic,retain) NSString * addressBuilding; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)addressBasic;
-(NSString *)addressUnit;
-(NSString *)addressFloor;
-(NSString *)addressBuilding;
-(void)setAddressBasic:(NSString *)arg1 ;
-(void)setAddressUnit:(NSString *)arg1 ;
-(void)setAddressFloor:(NSString *)arg1 ;
-(void)setAddressBuilding:(NSString *)arg1 ;
-(BOOL)hasAddressBasic;
-(BOOL)hasAddressUnit;
-(BOOL)hasAddressFloor;
-(BOOL)hasAddressBuilding;
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
@end

