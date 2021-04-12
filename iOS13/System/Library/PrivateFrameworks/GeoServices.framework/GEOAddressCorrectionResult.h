/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOAddressCorrectionResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _addressID;
	NSMutableArray* _significantLocations;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_addressID : 1;
		unsigned read_significantLocations : 1;
		unsigned wrote_addressID : 1;
		unsigned wrote_significantLocations : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAddressID; 
@property (nonatomic,retain) NSString * addressID; 
@property (nonatomic,retain) NSMutableArray * significantLocations; 
+(BOOL)isValid:(id)arg1 ;
+(Class)significantLocationType;
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
-(void)_readSignificantLocations;
-(void)_addNoFlagsSignificantLocation:(id)arg1 ;
-(void)_readAddressID;
-(NSString *)addressID;
-(NSMutableArray *)significantLocations;
-(unsigned long long)significantLocationsCount;
-(void)clearSignificantLocations;
-(id)significantLocationAtIndex:(unsigned long long)arg1 ;
-(void)addSignificantLocation:(id)arg1 ;
-(void)setAddressID:(NSString *)arg1 ;
-(void)setSignificantLocations:(NSMutableArray *)arg1 ;
-(BOOL)hasAddressID;
@end

