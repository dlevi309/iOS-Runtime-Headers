/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOLocation;

@interface GEOAddressCorrectionAddress : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _addressID;
	GEOLocation* _addressLocation;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_addressID : 1;
		unsigned read_addressLocation : 1;
		unsigned wrote_addressID : 1;
		unsigned wrote_addressLocation : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAddressLocation; 
@property (nonatomic,retain) GEOLocation * addressLocation; 
@property (nonatomic,readonly) BOOL hasAddressID; 
@property (nonatomic,retain) NSString * addressID; 
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
-(void)clearSensitiveFields;
-(void)_readAddressID;
-(NSString *)addressID;
-(void)setAddressID:(NSString *)arg1 ;
-(BOOL)hasAddressID;
-(void)_readAddressLocation;
-(GEOLocation *)addressLocation;
-(BOOL)hasAddressLocation;
-(void)setAddressLocation:(GEOLocation *)arg1 ;
@end

