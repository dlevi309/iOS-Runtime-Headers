/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOMiniCard, GEOLatLng;

@interface GEOTrafficCamera : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _identifier;
	GEOMiniCard* _infoCard;
	GEOLatLng* _position;
	NSString* _speedLimitText;
	double _speedThreshold;
	GEOMiniCard* _speedingCard;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _cameraPriority;
	unsigned _highlightDistance;
	int _type;
	struct {
		unsigned has_speedThreshold : 1;
		unsigned has_cameraPriority : 1;
		unsigned has_highlightDistance : 1;
		unsigned has_type : 1;
		unsigned read_unknownFields : 1;
		unsigned read_identifier : 1;
		unsigned read_infoCard : 1;
		unsigned read_position : 1;
		unsigned read_speedLimitText : 1;
		unsigned read_speedingCard : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasPosition; 
@property (nonatomic,retain) GEOLatLng * position; 
@property (assign,nonatomic) BOOL hasHighlightDistance; 
@property (assign,nonatomic) unsigned highlightDistance; 
@property (nonatomic,readonly) BOOL hasInfoCard; 
@property (nonatomic,retain) GEOMiniCard * infoCard; 
@property (nonatomic,readonly) BOOL hasSpeedLimitText; 
@property (nonatomic,retain) NSString * speedLimitText; 
@property (assign,nonatomic) BOOL hasSpeedThreshold; 
@property (assign,nonatomic) double speedThreshold; 
@property (nonatomic,readonly) BOOL hasSpeedingCard; 
@property (nonatomic,retain) GEOMiniCard * speedingCard; 
@property (assign,nonatomic) BOOL hasCameraPriority; 
@property (assign,nonatomic) unsigned cameraPriority; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasPosition;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(GEOLatLng *)position;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(GEOMiniCard *)speedingCard;
-(BOOL)hasSpeedLimitText;
-(BOOL)hasSpeedThreshold;
-(BOOL)hasCameraPriority;
-(unsigned)cameraPriority;
-(id)init;
-(int)StringAsType:(id)arg1 ;
-(id)jsonRepresentation;
-(double)speedThreshold;
-(BOOL)hasIdentifier;
-(BOOL)hasType;
-(NSString *)speedLimitText;
-(void)setHighlightDistance:(unsigned)arg1 ;
-(void)setHasHighlightDistance:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setInfoCard:(GEOMiniCard *)arg1 ;
-(BOOL)hasInfoCard;
-(void)setSpeedLimitText:(NSString *)arg1 ;
-(void)setSpeedThreshold:(double)arg1 ;
-(void)setSpeedingCard:(GEOMiniCard *)arg1 ;
-(void)setCameraPriority:(unsigned)arg1 ;
-(BOOL)hasSpeedingCard;
-(void)setHasSpeedThreshold:(BOOL)arg1 ;
-(void)setHasCameraPriority:(BOOL)arg1 ;
-(int)type;
-(void)setPosition:(GEOLatLng *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(GEOMiniCard *)infoCard;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)hasHighlightDistance;
-(unsigned)highlightDistance;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

