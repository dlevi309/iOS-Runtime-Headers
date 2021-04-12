/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOLatLng, NSData;

@interface GEORPDirectionsEvent : PBCodable <NSCopying> {

	PBDataReader* _reader;
	long long _errorCode;
	NSString* _errorDomain;
	GEOLatLng* _occurrenceLatLng;
	NSData* _occurrenceRouteId;
	NSData* _switchedToRouteId;
	NSString* _synthesizedStepInstructions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _occurrenceResponseIndex;
	unsigned _occurrenceStepIndex;
	unsigned _switchedToResponseIndex;
	int _synthesizedStepManeuverType;
	int _type;
	struct {
		unsigned has_errorCode : 1;
		unsigned has_occurrenceResponseIndex : 1;
		unsigned has_occurrenceStepIndex : 1;
		unsigned has_switchedToResponseIndex : 1;
		unsigned has_synthesizedStepManeuverType : 1;
		unsigned has_type : 1;
		unsigned read_errorDomain : 1;
		unsigned read_occurrenceLatLng : 1;
		unsigned read_occurrenceRouteId : 1;
		unsigned read_switchedToRouteId : 1;
		unsigned read_synthesizedStepInstructions : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasOccurrenceResponseIndex; 
@property (assign,nonatomic) unsigned occurrenceResponseIndex; 
@property (nonatomic,readonly) BOOL hasOccurrenceRouteId; 
@property (nonatomic,retain) NSData * occurrenceRouteId; 
@property (assign,nonatomic) BOOL hasOccurrenceStepIndex; 
@property (assign,nonatomic) unsigned occurrenceStepIndex; 
@property (nonatomic,readonly) BOOL hasOccurrenceLatLng; 
@property (nonatomic,retain) GEOLatLng * occurrenceLatLng; 
@property (assign,nonatomic) BOOL hasSwitchedToResponseIndex; 
@property (assign,nonatomic) unsigned switchedToResponseIndex; 
@property (nonatomic,readonly) BOOL hasSwitchedToRouteId; 
@property (nonatomic,retain) NSData * switchedToRouteId; 
@property (assign,nonatomic) BOOL hasSynthesizedStepManeuverType; 
@property (assign,nonatomic) int synthesizedStepManeuverType; 
@property (nonatomic,readonly) BOOL hasSynthesizedStepInstructions; 
@property (nonatomic,retain) NSString * synthesizedStepInstructions; 
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain; 
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(id)init;
-(int)StringAsType:(id)arg1 ;
-(id)jsonRepresentation;
-(NSData *)occurrenceRouteId;
-(GEOLatLng *)occurrenceLatLng;
-(NSData *)switchedToRouteId;
-(NSString *)synthesizedStepInstructions;
-(NSString *)errorDomain;
-(void)setOccurrenceResponseIndex:(unsigned)arg1 ;
-(void)setOccurrenceRouteId:(NSData *)arg1 ;
-(void)setOccurrenceStepIndex:(unsigned)arg1 ;
-(void)setOccurrenceLatLng:(GEOLatLng *)arg1 ;
-(void)setSwitchedToResponseIndex:(unsigned)arg1 ;
-(void)setSwitchedToRouteId:(NSData *)arg1 ;
-(BOOL)hasOccurrenceRouteId;
-(void)setSynthesizedStepManeuverType:(int)arg1 ;
-(void)setSynthesizedStepInstructions:(NSString *)arg1 ;
-(unsigned)occurrenceResponseIndex;
-(void)setHasOccurrenceResponseIndex:(BOOL)arg1 ;
-(BOOL)hasOccurrenceResponseIndex;
-(unsigned)occurrenceStepIndex;
-(void)setHasOccurrenceStepIndex:(BOOL)arg1 ;
-(BOOL)hasOccurrenceStepIndex;
-(BOOL)hasOccurrenceLatLng;
-(BOOL)hasSwitchedToRouteId;
-(unsigned)switchedToResponseIndex;
-(void)setHasSwitchedToResponseIndex:(BOOL)arg1 ;
-(BOOL)hasSwitchedToResponseIndex;
-(int)synthesizedStepManeuverType;
-(void)setHasSynthesizedStepManeuverType:(BOOL)arg1 ;
-(BOOL)hasSynthesizedStepManeuverType;
-(id)synthesizedStepManeuverTypeAsString:(int)arg1 ;
-(BOOL)hasErrorDomain;
-(int)StringAsSynthesizedStepManeuverType:(id)arg1 ;
-(BOOL)hasSynthesizedStepInstructions;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(long long)errorCode;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasErrorCode;
-(id)description;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
@end

