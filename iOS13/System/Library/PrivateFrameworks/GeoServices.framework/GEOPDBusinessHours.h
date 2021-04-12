/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDHoursThreshold, GEOLocalizedString, NSMutableArray;

@interface GEOPDBusinessHours : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	unsigned long long _end;
	GEOPDHoursThreshold* _hoursThreshold;
	GEOLocalizedString* _message;
	GEOLocalizedString* _shortMessage;
	unsigned long long _start;
	NSMutableArray* _weeklyHours;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _hoursType;
	struct {
		unsigned has_end : 1;
		unsigned has_start : 1;
		unsigned has_hoursType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_hoursThreshold : 1;
		unsigned read_message : 1;
		unsigned read_shortMessage : 1;
		unsigned read_weeklyHours : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_end : 1;
		unsigned wrote_hoursThreshold : 1;
		unsigned wrote_message : 1;
		unsigned wrote_shortMessage : 1;
		unsigned wrote_start : 1;
		unsigned wrote_weeklyHours : 1;
		unsigned wrote_hoursType : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * weeklyHours; 
@property (assign,nonatomic) BOOL hasStart; 
@property (assign,nonatomic) unsigned long long start; 
@property (assign,nonatomic) BOOL hasEnd; 
@property (assign,nonatomic) unsigned long long end; 
@property (nonatomic,readonly) BOOL hasMessage; 
@property (nonatomic,retain) GEOLocalizedString * message; 
@property (nonatomic,readonly) BOOL hasShortMessage; 
@property (nonatomic,retain) GEOLocalizedString * shortMessage; 
@property (assign,nonatomic) BOOL hasHoursType; 
@property (assign,nonatomic) int hoursType; 
@property (nonatomic,readonly) BOOL hasHoursThreshold; 
@property (nonatomic,retain) GEOPDHoursThreshold * hoursThreshold; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)weeklyHoursType;
+(id)businessHoursForPlaceData:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)start;
-(id)dictionaryRepresentation;
-(unsigned long long)end;
-(void)writeTo:(id)arg1 ;
-(GEOLocalizedString *)message;
-(void)setMessage:(GEOLocalizedString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasMessage;
-(void)setStart:(unsigned long long)arg1 ;
-(void)setEnd:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readWeeklyHours;
-(void)_addNoFlagsWeeklyHours:(id)arg1 ;
-(void)_readMessage;
-(void)_readShortMessage;
-(void)_readHoursThreshold;
-(GEOLocalizedString *)shortMessage;
-(GEOPDHoursThreshold *)hoursThreshold;
-(unsigned long long)weeklyHoursCount;
-(void)clearWeeklyHours;
-(id)weeklyHoursAtIndex:(unsigned long long)arg1 ;
-(void)addWeeklyHours:(id)arg1 ;
-(void)setShortMessage:(GEOLocalizedString *)arg1 ;
-(void)setHoursThreshold:(GEOPDHoursThreshold *)arg1 ;
-(NSMutableArray *)weeklyHours;
-(void)setWeeklyHours:(NSMutableArray *)arg1 ;
-(void)setHasStart:(BOOL)arg1 ;
-(BOOL)hasStart;
-(void)setHasEnd:(BOOL)arg1 ;
-(BOOL)hasEnd;
-(BOOL)hasShortMessage;
-(int)hoursType;
-(void)setHoursType:(int)arg1 ;
-(void)setHasHoursType:(BOOL)arg1 ;
-(BOOL)hasHoursType;
-(id)hoursTypeAsString:(int)arg1 ;
-(int)StringAsHoursType:(id)arg1 ;
-(BOOL)hasHoursThreshold;
@end

