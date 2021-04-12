/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_identifier : 1;
		unsigned wrote_infoCard : 1;
		unsigned wrote_position : 1;
		unsigned wrote_speedLimitText : 1;
		unsigned wrote_speedThreshold : 1;
		unsigned wrote_speedingCard : 1;
		unsigned wrote_cameraPriority : 1;
		unsigned wrote_highlightDistance : 1;
		unsigned wrote_type : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLatLng *)position;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setPosition:(GEOLatLng *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasHighlightDistance;
-(unsigned)highlightDistance;
-(BOOL)hasIdentifier;
-(BOOL)hasPosition;
-(double)speedThreshold;
-(GEOMiniCard *)infoCard;
-(GEOMiniCard *)speedingCard;
-(BOOL)hasSpeedLimitText;
-(NSString *)speedLimitText;
-(BOOL)hasSpeedThreshold;
-(BOOL)hasCameraPriority;
-(unsigned)cameraPriority;
-(void)setHighlightDistance:(unsigned)arg1 ;
-(void)setHasHighlightDistance:(BOOL)arg1 ;
-(void)_readIdentifier;
-(void)_readPosition;
-(void)_readInfoCard;
-(void)_readSpeedLimitText;
-(void)_readSpeedingCard;
-(void)setInfoCard:(GEOMiniCard *)arg1 ;
-(void)setSpeedLimitText:(NSString *)arg1 ;
-(void)setSpeedingCard:(GEOMiniCard *)arg1 ;
-(BOOL)hasInfoCard;
-(void)setSpeedThreshold:(double)arg1 ;
-(void)setHasSpeedThreshold:(BOOL)arg1 ;
-(BOOL)hasSpeedingCard;
-(void)setCameraPriority:(unsigned)arg1 ;
-(void)setHasCameraPriority:(BOOL)arg1 ;
@end

