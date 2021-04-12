/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_addressID : 1;
		unsigned wrote_addressResults : 1;
		unsigned wrote_significantLocations : 1;
		unsigned wrote_correctionStatus : 1;
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
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)readAll:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(void)_readSignificantLocations;
-(void)_addNoFlagsSignificantLocation:(id)arg1 ;
-(void)_readAddressID;
-(void)_readAddressResults;
-(void)_addNoFlagsAddressResult:(id)arg1 ;
-(NSString *)addressID;
-(NSMutableArray *)significantLocations;
-(NSMutableArray *)addressResults;
-(unsigned long long)significantLocationsCount;
-(void)clearSignificantLocations;
-(id)significantLocationAtIndex:(unsigned long long)arg1 ;
-(void)addSignificantLocation:(id)arg1 ;
-(void)setAddressID:(NSString *)arg1 ;
-(unsigned long long)addressResultsCount;
-(void)clearAddressResults;
-(id)addressResultAtIndex:(unsigned long long)arg1 ;
-(void)addAddressResult:(id)arg1 ;
-(int)correctionStatus;
-(void)setCorrectionStatus:(int)arg1 ;
-(void)setHasCorrectionStatus:(BOOL)arg1 ;
-(BOOL)hasCorrectionStatus;
-(id)correctionStatusAsString:(int)arg1 ;
-(int)StringAsCorrectionStatus:(id)arg1 ;
-(void)setSignificantLocations:(NSMutableArray *)arg1 ;
-(BOOL)hasAddressID;
-(void)setAddressResults:(NSMutableArray *)arg1 ;
@end

