/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOAddressCorrectionUpdateRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	NSString* _addressID;
	NSMutableArray* _addressResults;
	NSMutableArray* _significantLocations;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _correctionStatus;
	struct {
		unsigned has_correctionStatus : 1;
		unsigned read_addressID : 1;
		unsigned read_addressResults : 1;
		unsigned read_significantLocations : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasCorrectionStatus; 
@property (assign,nonatomic) int correctionStatus; 
@property (nonatomic,retain) NSMutableArray * significantLocations; 
@property (nonatomic,readonly) BOOL hasAddressID; 
@property (nonatomic,retain) NSString * addressID; 
@property (nonatomic,retain) NSMutableArray * addressResults; 
+(BOOL)isValid:(id)arg1 ;
+(Class)significantLocationType;
+(Class)addressResultType;
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)clearSensitiveFields;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)addressID;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasAddressID;
-(void)setAddressID:(NSString *)arg1 ;
-(NSMutableArray *)significantLocations;
-(void)addSignificantLocation:(id)arg1 ;
-(unsigned long long)significantLocationsCount;
-(void)clearSignificantLocations;
-(id)significantLocationAtIndex:(unsigned long long)arg1 ;
-(void)setSignificantLocations:(NSMutableArray *)arg1 ;
-(void)setCorrectionStatus:(int)arg1 ;
-(void)addAddressResult:(id)arg1 ;
-(NSMutableArray *)addressResults;
-(unsigned long long)addressResultsCount;
-(void)clearAddressResults;
-(id)addressResultAtIndex:(unsigned long long)arg1 ;
-(int)correctionStatus;
-(void)setHasCorrectionStatus:(BOOL)arg1 ;
-(BOOL)hasCorrectionStatus;
-(id)correctionStatusAsString:(int)arg1 ;
-(int)StringAsCorrectionStatus:(id)arg1 ;
-(void)setAddressResults:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

