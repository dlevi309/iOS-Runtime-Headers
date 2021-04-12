/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSUUID;

@interface GEOMapItemRoutineAttributes : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	double _eventDate;
	NSString* _eventName;
	NSString* _loiIdentifierString;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _loiType;
	BOOL _isEventAllDay;
	struct {
		unsigned has_eventDate : 1;
		unsigned has_loiType : 1;
		unsigned has_isEventAllDay : 1;
		unsigned read_unknownFields : 1;
		unsigned read_eventName : 1;
		unsigned read_loiIdentifierString : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSUUID * loiIdentifier; 
@property (assign,nonatomic) BOOL hasLoiType; 
@property (assign,nonatomic) int loiType; 
@property (nonatomic,readonly) BOOL hasEventName; 
@property (nonatomic,retain) NSString * eventName; 
@property (assign,nonatomic) BOOL hasEventDate; 
@property (assign,nonatomic) double eventDate; 
@property (assign,nonatomic) BOOL hasIsEventAllDay; 
@property (assign,nonatomic) BOOL isEventAllDay; 
@property (nonatomic,readonly) BOOL hasLoiIdentifierString; 
@property (nonatomic,retain) NSString * loiIdentifierString; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEventAllDay;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)loiType;
-(id)init;
-(id)jsonRepresentation;
-(id)loiTypeAsString:(int)arg1 ;
-(NSString *)eventName;
-(void)mergeFrom:(id)arg1 ;
-(void)setEventDate:(double)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasLoiType;
-(void)setLoiType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasLoiType:(BOOL)arg1 ;
-(void)setEventName:(NSString *)arg1 ;
-(id)description;
-(double)eventDate;
-(void)setHasIsEventAllDay:(BOOL)arg1 ;
-(void)setLoiIdentifier:(NSUUID *)arg1 ;
-(void)setLoiIdentifierString:(NSString *)arg1 ;
-(NSString *)loiIdentifierString;
-(unsigned long long)hash;
-(BOOL)hasEventDate;
-(int)StringAsLoiType:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasIsEventAllDay;
-(BOOL)hasEventName;
-(void)setHasEventDate:(BOOL)arg1 ;
-(BOOL)hasLoiIdentifierString;
-(NSUUID *)loiIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIsEventAllDay:(BOOL)arg1 ;
@end

