/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_announcements : 1;
		unsigned wrote_timeGaps : 1;
		unsigned wrote_alignment : 1;
		unsigned wrote_endDesiredTime : 1;
		unsigned wrote_exclusiveSetIdentifier : 1;
		unsigned wrote_numChainedVariants : 1;
		unsigned wrote_priority : 1;
		unsigned wrote_repetitionInterval : 1;
		unsigned wrote_startDesiredTime : 1;
		unsigned wrote_tapBeforeAnnouncement : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(Class)announcementType;
+(Class)timeGapType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)priority;
-(void)setPriority:(unsigned)arg1 ;
-(int)alignment;
-(void)setAlignment:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readAnnouncements;
-(void)_addNoFlagsAnnouncement:(id)arg1 ;
-(unsigned long long)announcementsCount;
-(void)clearAnnouncements;
-(id)announcementAtIndex:(unsigned long long)arg1 ;
-(void)addAnnouncement:(id)arg1 ;
-(NSMutableArray *)announcements;
-(void)setAnnouncements:(NSMutableArray *)arg1 ;
-(BOOL)hasPriority;
-(void)setHasPriority:(BOOL)arg1 ;
-(unsigned)exclusiveSetIdentifier;
-(BOOL)hasExclusiveSetIdentifier;
-(unsigned)repetitionInterval;
-(BOOL)tapBeforeAnnouncement;
-(unsigned)numChainedVariants;
-(BOOL)hasStartDesiredTime;
-(unsigned)startDesiredTime;
-(BOOL)hasEndDesiredTime;
-(unsigned)endDesiredTime;
-(NSMutableArray *)timeGaps;
-(BOOL)hasAlignment;
-(void)_readTimeGaps;
-(void)_addNoFlagsTimeGap:(id)arg1 ;
-(unsigned long long)timeGapsCount;
-(void)clearTimeGaps;
-(id)timeGapAtIndex:(unsigned long long)arg1 ;
-(void)addTimeGap:(id)arg1 ;
-(void)setStartDesiredTime:(unsigned)arg1 ;
-(void)setHasStartDesiredTime:(BOOL)arg1 ;
-(void)setEndDesiredTime:(unsigned)arg1 ;
-(void)setHasEndDesiredTime:(BOOL)arg1 ;
-(void)setHasAlignment:(BOOL)arg1 ;
-(id)alignmentAsString:(int)arg1 ;
-(int)StringAsAlignment:(id)arg1 ;
-(void)setRepetitionInterval:(unsigned)arg1 ;
-(void)setHasRepetitionInterval:(BOOL)arg1 ;
-(BOOL)hasRepetitionInterval;
-(void)setNumChainedVariants:(unsigned)arg1 ;
-(void)setHasNumChainedVariants:(BOOL)arg1 ;
-(BOOL)hasNumChainedVariants;
-(void)setTapBeforeAnnouncement:(BOOL)arg1 ;
-(void)setHasTapBeforeAnnouncement:(BOOL)arg1 ;
-(BOOL)hasTapBeforeAnnouncement;
-(void)setTimeGaps:(NSMutableArray *)arg1 ;
-(void)setExclusiveSetIdentifier:(unsigned)arg1 ;
-(void)setHasExclusiveSetIdentifier:(BOOL)arg1 ;
@end

