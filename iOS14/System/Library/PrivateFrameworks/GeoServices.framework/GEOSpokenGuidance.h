/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOSpokenGuidance : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _announcements;
	NSMutableArray* _timeGaps;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _alignment;
	unsigned _endDesiredTime;
	unsigned _exclusiveSetIdentifier;
	unsigned _numChainedVariants;
	unsigned _priority;
	unsigned _repetitionInterval;
	unsigned _startDesiredTime;
	BOOL _tapBeforeAnnouncement;
	struct {
		unsigned has_alignment : 1;
		unsigned has_endDesiredTime : 1;
		unsigned has_exclusiveSetIdentifier : 1;
		unsigned has_numChainedVariants : 1;
		unsigned has_priority : 1;
		unsigned has_repetitionInterval : 1;
		unsigned has_startDesiredTime : 1;
		unsigned has_tapBeforeAnnouncement : 1;
		unsigned read_unknownFields : 1;
		unsigned read_announcements : 1;
		unsigned read_timeGaps : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * announcements; 
@property (assign,nonatomic) BOOL hasStartDesiredTime; 
@property (assign,nonatomic) unsigned startDesiredTime; 
@property (assign,nonatomic) BOOL hasEndDesiredTime; 
@property (assign,nonatomic) unsigned endDesiredTime; 
@property (assign,nonatomic) BOOL hasAlignment; 
@property (assign,nonatomic) int alignment; 
@property (assign,nonatomic) BOOL hasRepetitionInterval; 
@property (assign,nonatomic) unsigned repetitionInterval; 
@property (assign,nonatomic) BOOL hasPriority; 
@property (assign,nonatomic) unsigned priority; 
@property (assign,nonatomic) BOOL hasNumChainedVariants; 
@property (assign,nonatomic) unsigned numChainedVariants; 
@property (assign,nonatomic) BOOL hasTapBeforeAnnouncement; 
@property (assign,nonatomic) BOOL tapBeforeAnnouncement; 
@property (nonatomic,retain) NSMutableArray * timeGaps; 
@property (assign,nonatomic) BOOL hasExclusiveSetIdentifier; 
@property (assign,nonatomic) unsigned exclusiveSetIdentifier; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)timeGapType;
+(BOOL)isValid:(id)arg1 ;
+(Class)announcementType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(int)alignment;
-(void)setHasPriority:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setAlignment:(int)arg1 ;
-(NSMutableArray *)timeGaps;
-(id)description;
-(void)setStartDesiredTime:(unsigned)arg1 ;
-(void)setEndDesiredTime:(unsigned)arg1 ;
-(void)setRepetitionInterval:(unsigned)arg1 ;
-(void)setNumChainedVariants:(unsigned)arg1 ;
-(void)setTapBeforeAnnouncement:(BOOL)arg1 ;
-(void)addTimeGap:(id)arg1 ;
-(void)setExclusiveSetIdentifier:(unsigned)arg1 ;
-(unsigned long long)timeGapsCount;
-(void)clearTimeGaps;
-(id)timeGapAtIndex:(unsigned long long)arg1 ;
-(unsigned)startDesiredTime;
-(unsigned)endDesiredTime;
-(void)setHasStartDesiredTime:(BOOL)arg1 ;
-(BOOL)hasStartDesiredTime;
-(void)setHasEndDesiredTime:(BOOL)arg1 ;
-(BOOL)hasEndDesiredTime;
-(void)setHasAlignment:(BOOL)arg1 ;
-(BOOL)hasAlignment;
-(id)alignmentAsString:(int)arg1 ;
-(int)StringAsAlignment:(id)arg1 ;
-(unsigned)repetitionInterval;
-(void)setHasRepetitionInterval:(BOOL)arg1 ;
-(BOOL)hasRepetitionInterval;
-(unsigned)numChainedVariants;
-(BOOL)hasNumChainedVariants;
-(void)setHasNumChainedVariants:(BOOL)arg1 ;
-(BOOL)tapBeforeAnnouncement;
-(void)setHasTapBeforeAnnouncement:(BOOL)arg1 ;
-(void)setTimeGaps:(NSMutableArray *)arg1 ;
-(BOOL)hasTapBeforeAnnouncement;
-(unsigned)exclusiveSetIdentifier;
-(void)setHasExclusiveSetIdentifier:(BOOL)arg1 ;
-(BOOL)hasExclusiveSetIdentifier;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPriority;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)priority;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(unsigned)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addAnnouncement:(id)arg1 ;
-(unsigned long long)announcementsCount;
-(void)clearAnnouncements;
-(NSMutableArray *)announcements;
-(id)announcementAtIndex:(unsigned long long)arg1 ;
-(void)setAnnouncements:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

