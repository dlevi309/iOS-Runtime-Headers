/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_addressID : 1;
		unsigned wrote_addressLocation : 1;
		unsigned wrote_address : 1;
		unsigned wrote_numberOfVisitsBucketSize : 1;
		unsigned wrote_statusCode : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(Class)addressType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)statusCode;
-(id)dictionaryRepresentation;
-(NSMutableArray *)address;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAddress:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(void)_readAddress;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(BOOL)hasStatusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(int)StringAsStatusCode:(id)arg1 ;
-(void)_readAddressID;
-(NSString *)addressID;
-(void)setAddressID:(NSString *)arg1 ;
-(BOOL)hasAddressID;
-(void)_readAddressLocation;
-(void)_addNoFlagsAddress:(id)arg1 ;
-(GEOLocation *)addressLocation;
-(BOOL)hasAddressLocation;
-(void)setAddressLocation:(GEOLocation *)arg1 ;
-(unsigned long long)addressCount;
-(void)clearAddress;
-(id)addressAtIndex:(unsigned long long)arg1 ;
-(void)addAddress:(id)arg1 ;
-(unsigned)numberOfVisitsBucketSize;
-(void)setNumberOfVisitsBucketSize:(unsigned)arg1 ;
-(void)setHasNumberOfVisitsBucketSize:(BOOL)arg1 ;
-(BOOL)hasNumberOfVisitsBucketSize;
@end

