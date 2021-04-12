/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOAddress, GEOLatLng;

@interface GEOMapItemCorrectedLocationAttributes : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _correctedAddressSecondaryStreetLine;
	GEOAddress* _correctedAddress;
	GEOLatLng* _correctedCoordinate;
	NSString* _customLabel;
	double _lastUpdateDate;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _hasSubmittedRAP;
	struct {
		unsigned has_lastUpdateDate : 1;
		unsigned has_hasSubmittedRAP : 1;
		unsigned read_unknownFields : 1;
		unsigned read_correctedAddressSecondaryStreetLine : 1;
		unsigned read_correctedAddress : 1;
		unsigned read_correctedCoordinate : 1;
		unsigned read_customLabel : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_correctedAddressSecondaryStreetLine : 1;
		unsigned wrote_correctedAddress : 1;
		unsigned wrote_correctedCoordinate : 1;
		unsigned wrote_customLabel : 1;
		unsigned wrote_lastUpdateDate : 1;
		unsigned wrote_hasSubmittedRAP : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCorrectedCoordinate; 
@property (nonatomic,retain) GEOLatLng * correctedCoordinate; 
@property (nonatomic,readonly) BOOL hasCorrectedAddress; 
@property (nonatomic,retain) GEOAddress * correctedAddress; 
@property (nonatomic,readonly) BOOL hasCorrectedAddressSecondaryStreetLine; 
@property (nonatomic,retain) NSString * correctedAddressSecondaryStreetLine; 
@property (nonatomic,readonly) BOOL hasCustomLabel; 
@property (nonatomic,retain) NSString * customLabel; 
@property (assign,nonatomic) BOOL hasLastUpdateDate; 
@property (assign,nonatomic) double lastUpdateDate; 
@property (assign,nonatomic) BOOL hasHasSubmittedRAP; 
@property (assign,nonatomic) BOOL hasSubmittedRAP; 
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
-(void)_readCorrectedCoordinate;
-(GEOLatLng *)correctedCoordinate;
-(void)setCorrectedCoordinate:(GEOLatLng *)arg1 ;
-(BOOL)hasCorrectedCoordinate;
-(BOOL)hasCorrectedAddress;
-(GEOAddress *)correctedAddress;
-(void)_readCorrectedAddress;
-(void)_readCorrectedAddressSecondaryStreetLine;
-(void)_readCustomLabel;
-(NSString *)correctedAddressSecondaryStreetLine;
-(NSString *)customLabel;
-(void)setCorrectedAddress:(GEOAddress *)arg1 ;
-(void)setCorrectedAddressSecondaryStreetLine:(NSString *)arg1 ;
-(void)setCustomLabel:(NSString *)arg1 ;
-(BOOL)hasCorrectedAddressSecondaryStreetLine;
-(BOOL)hasCustomLabel;
-(double)lastUpdateDate;
-(void)setLastUpdateDate:(double)arg1 ;
-(void)setHasLastUpdateDate:(BOOL)arg1 ;
-(BOOL)hasLastUpdateDate;
-(BOOL)hasSubmittedRAP;
-(void)setHasSubmittedRAP:(BOOL)arg1 ;
-(void)setHasHasSubmittedRAP:(BOOL)arg1 ;
-(BOOL)hasHasSubmittedRAP;
@end

