/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOLocation, NSMutableArray;

@interface GEOAddressCorrectionInitResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _addressID;
	GEOLocation* _addressLocation;
	NSMutableArray* _address;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _numberOfVisitsBucketSize;
	int _statusCode;
	struct {
		unsigned has_numberOfVisitsBucketSize : 1;
		unsigned has_statusCode : 1;
		unsigned read_addressID : 1;
		unsigned read_addressLocation : 1;
		unsigned read_address : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode; 
@property (nonatomic,readonly) BOOL hasAddressLocation; 
@property (nonatomic,retain) GEOLocation * addressLocation; 
@property (nonatomic,readonly) BOOL hasAddressID; 
@property (nonatomic,retain) NSString * addressID; 
@property (assign,nonatomic) BOOL hasNumberOfVisitsBucketSize; 
@property (assign,nonatomic) unsigned numberOfVisitsBucketSize; 
@property (nonatomic,retain) NSMutableArray * address; 
+(Class)addressType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)clearSensitiveFields;
-(int)StringAsStatusCode:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)statusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(id)description;
-(NSMutableArray *)address;
-(void)setAddress:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasStatusCode;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)addressID;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasAddressID;
-(void)addAddress:(id)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(GEOLocation *)addressLocation;
-(void)setAddressLocation:(GEOLocation *)arg1 ;
-(void)setAddressID:(NSString *)arg1 ;
-(BOOL)hasAddressLocation;
-(void)setNumberOfVisitsBucketSize:(unsigned)arg1 ;
-(unsigned long long)addressCount;
-(void)clearAddress;
-(id)addressAtIndex:(unsigned long long)arg1 ;
-(unsigned)numberOfVisitsBucketSize;
-(void)setHasNumberOfVisitsBucketSize:(BOOL)arg1 ;
-(BOOL)hasNumberOfVisitsBucketSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

