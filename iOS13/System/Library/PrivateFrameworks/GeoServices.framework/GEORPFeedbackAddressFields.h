/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_addressBasic : 1;
		unsigned wrote_addressBuilding : 1;
		unsigned wrote_addressFloor : 1;
		unsigned wrote_addressUnit : 1;
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
-(void)_readAddressBasic;
-(void)_readAddressUnit;
-(void)_readAddressFloor;
-(void)_readAddressBuilding;
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
@end

