/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOLatLng;

@interface GEORPCorrectedCoordinate : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOLatLng* _correctedCoordinate;
	GEOLatLng* _originalCoordinate;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_correctedCoordinate : 1;
		unsigned read_originalCoordinate : 1;
		unsigned wrote_correctedCoordinate : 1;
		unsigned wrote_originalCoordinate : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasOriginalCoordinate; 
@property (nonatomic,retain) GEOLatLng * originalCoordinate; 
@property (nonatomic,readonly) BOOL hasCorrectedCoordinate; 
@property (nonatomic,retain) GEOLatLng * correctedCoordinate; 
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
-(void)_readCorrectedCoordinate;
-(GEOLatLng *)correctedCoordinate;
-(void)setCorrectedCoordinate:(GEOLatLng *)arg1 ;
-(BOOL)hasCorrectedCoordinate;
-(GEOLatLng *)originalCoordinate;
-(void)_readOriginalCoordinate;
-(void)setOriginalCoordinate:(GEOLatLng *)arg1 ;
-(BOOL)hasOriginalCoordinate;
@end

