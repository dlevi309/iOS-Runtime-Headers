/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOPDHours;

@interface GEORPFeedbackBusinessHours : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _comments;
	unsigned long long _end;
	unsigned long long _start;
	GEOPDHours* _weeklyHours;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _hoursType;
	struct {
		unsigned has_end : 1;
		unsigned has_start : 1;
		unsigned has_hoursType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_comments : 1;
		unsigned read_weeklyHours : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasWeeklyHours; 
@property (nonatomic,retain) GEOPDHours * weeklyHours; 
@property (assign,nonatomic) BOOL hasStart; 
@property (assign,nonatomic) unsigned long long start; 
@property (assign,nonatomic) BOOL hasEnd; 
@property (assign,nonatomic) unsigned long long end; 
@property (nonatomic,readonly) BOOL hasComments; 
@property (nonatomic,retain) NSString * comments; 
@property (assign,nonatomic) BOOL hasHoursType; 
@property (assign,nonatomic) int hoursType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)end;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(BOOL)hasEnd;
-(id)jsonRepresentation;
-(unsigned long long)start;
-(NSString *)comments;
-(BOOL)hasStart;
-(int)hoursType;
-(void)setHasEnd:(BOOL)arg1 ;
-(GEOPDHours *)weeklyHours;
-(void)setWeeklyHours:(GEOPDHours *)arg1 ;
-(void)setComments:(NSString *)arg1 ;
-(void)setHoursType:(int)arg1 ;
-(BOOL)hasWeeklyHours;
-(void)setHasStart:(BOOL)arg1 ;
-(BOOL)hasComments;
-(void)setHasHoursType:(BOOL)arg1 ;
-(BOOL)hasHoursType;
-(id)hoursTypeAsString:(int)arg1 ;
-(int)StringAsHoursType:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setEnd:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStart:(unsigned long long)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

