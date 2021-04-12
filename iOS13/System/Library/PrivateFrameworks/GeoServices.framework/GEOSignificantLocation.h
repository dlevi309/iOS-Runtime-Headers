/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOLocation;

@interface GEOSignificantLocation : PBCodable <NSCopying> {

	PBDataReader* _reader;
	double _confidence;
	NSString* _identifier;
	GEOLocation* _location;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _locationIndex;
	unsigned _numberOfVisitsBucket;
	struct {
		unsigned has_confidence : 1;
		unsigned has_locationIndex : 1;
		unsigned has_numberOfVisitsBucket : 1;
		unsigned read_identifier : 1;
		unsigned read_location : 1;
		unsigned wrote_confidence : 1;
		unsigned wrote_identifier : 1;
		unsigned wrote_location : 1;
		unsigned wrote_locationIndex : 1;
		unsigned wrote_numberOfVisitsBucket : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (assign,nonatomic) BOOL hasLocationIndex; 
@property (assign,nonatomic) unsigned locationIndex; 
@property (assign,nonatomic) BOOL hasNumberOfVisitsBucket; 
@property (assign,nonatomic) unsigned numberOfVisitsBucket; 
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier; 
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) double confidence; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(double)confidence;
-(GEOLocation *)location;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfidence:(double)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasLocation;
-(void)clearSensitiveFields;
-(void)_readLocation;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(BOOL)hasIdentifier;
-(void)_readIdentifier;
-(unsigned)locationIndex;
-(void)setLocationIndex:(unsigned)arg1 ;
-(void)setHasLocationIndex:(BOOL)arg1 ;
-(BOOL)hasLocationIndex;
-(unsigned)numberOfVisitsBucket;
-(void)setNumberOfVisitsBucket:(unsigned)arg1 ;
-(void)setHasNumberOfVisitsBucket:(BOOL)arg1 ;
-(BOOL)hasNumberOfVisitsBucket;
@end

