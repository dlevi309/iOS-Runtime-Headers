/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPBTransitArtwork, NSString;

@interface GEOPBTransitIncident : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _affectedEntitys;
	unsigned long long _incidentMuid;
	GEOPBTransitArtwork* _incidentTypeArtwork;
	NSString* _longDescriptionString;
	NSString* _messageForAllBlocking;
	NSString* _messageForIncidentType;
	NSString* _messageString;
	NSString* _shortDescriptionString;
	NSString* _titleString;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _creationDatetime;
	unsigned _endDatetime;
	int _iconEnum;
	unsigned _incidentIndex;
	unsigned _startDatetime;
	unsigned _updatedDatetime;
	BOOL _blocking;
	struct {
		unsigned has_incidentMuid : 1;
		unsigned has_creationDatetime : 1;
		unsigned has_endDatetime : 1;
		unsigned has_iconEnum : 1;
		unsigned has_incidentIndex : 1;
		unsigned has_startDatetime : 1;
		unsigned has_updatedDatetime : 1;
		unsigned has_blocking : 1;
		unsigned read_unknownFields : 1;
		unsigned read_affectedEntitys : 1;
		unsigned read_incidentTypeArtwork : 1;
		unsigned read_longDescriptionString : 1;
		unsigned read_messageForAllBlocking : 1;
		unsigned read_messageForIncidentType : 1;
		unsigned read_messageString : 1;
		unsigned read_shortDescriptionString : 1;
		unsigned read_titleString : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_affectedEntitys : 1;
		unsigned wrote_incidentMuid : 1;
		unsigned wrote_incidentTypeArtwork : 1;
		unsigned wrote_longDescriptionString : 1;
		unsigned wrote_messageForAllBlocking : 1;
		unsigned wrote_messageForIncidentType : 1;
		unsigned wrote_messageString : 1;
		unsigned wrote_shortDescriptionString : 1;
		unsigned wrote_titleString : 1;
		unsigned wrote_creationDatetime : 1;
		unsigned wrote_endDatetime : 1;
		unsigned wrote_iconEnum : 1;
		unsigned wrote_incidentIndex : 1;
		unsigned wrote_startDatetime : 1;
		unsigned wrote_updatedDatetime : 1;
		unsigned wrote_blocking : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIncidentIndex; 
@property (assign,nonatomic) unsigned incidentIndex; 
@property (assign,nonatomic) BOOL hasIncidentMuid; 
@property (assign,nonatomic) unsigned long long incidentMuid; 
@property (assign,nonatomic) BOOL hasIconEnum; 
@property (assign,nonatomic) int iconEnum; 
@property (assign,nonatomic) BOOL hasStartDatetime; 
@property (assign,nonatomic) unsigned startDatetime; 
@property (assign,nonatomic) BOOL hasEndDatetime; 
@property (assign,nonatomic) unsigned endDatetime; 
@property (assign,nonatomic) BOOL hasCreationDatetime; 
@property (assign,nonatomic) unsigned creationDatetime; 
@property (assign,nonatomic) BOOL hasUpdatedDatetime; 
@property (assign,nonatomic) unsigned updatedDatetime; 
@property (nonatomic,retain) NSMutableArray * affectedEntitys; 
@property (assign,nonatomic) BOOL hasBlocking; 
@property (assign,nonatomic) BOOL blocking; 
@property (nonatomic,readonly) BOOL hasLongDescriptionString; 
@property (nonatomic,retain) NSString * longDescriptionString; 
@property (nonatomic,readonly) BOOL hasShortDescriptionString; 
@property (nonatomic,retain) NSString * shortDescriptionString; 
@property (nonatomic,readonly) BOOL hasTitleString; 
@property (nonatomic,retain) NSString * titleString; 
@property (nonatomic,readonly) BOOL hasMessageString; 
@property (nonatomic,retain) NSString * messageString; 
@property (nonatomic,readonly) BOOL hasMessageForAllBlocking; 
@property (nonatomic,retain) NSString * messageForAllBlocking; 
@property (nonatomic,readonly) BOOL hasMessageForIncidentType; 
@property (nonatomic,retain) NSString * messageForIncidentType; 
@property (nonatomic,readonly) BOOL hasIncidentTypeArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * incidentTypeArtwork; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)affectedEntityType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)messageString;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned)incidentIndex;
-(void)setIncidentIndex:(unsigned)arg1 ;
-(void)setHasIncidentIndex:(BOOL)arg1 ;
-(BOOL)hasIncidentIndex;
-(unsigned long long)incidentMuid;
-(NSString *)titleString;
-(NSString *)shortDescriptionString;
-(NSString *)longDescriptionString;
-(NSString *)messageForIncidentType;
-(NSString *)messageForAllBlocking;
-(BOOL)hasStartDatetime;
-(unsigned)startDatetime;
-(BOOL)hasEndDatetime;
-(unsigned)endDatetime;
-(BOOL)hasIconEnum;
-(int)iconEnum;
-(BOOL)hasCreationDatetime;
-(unsigned)creationDatetime;
-(BOOL)hasUpdatedDatetime;
-(unsigned)updatedDatetime;
-(BOOL)blocking;
-(NSMutableArray *)affectedEntitys;
-(void)setTitleString:(NSString *)arg1 ;
-(void)setShortDescriptionString:(NSString *)arg1 ;
-(void)setLongDescriptionString:(NSString *)arg1 ;
-(void)setBlocking:(BOOL)arg1 ;
-(void)setIconEnum:(int)arg1 ;
-(void)setStartDatetime:(unsigned)arg1 ;
-(void)setCreationDatetime:(unsigned)arg1 ;
-(void)setUpdatedDatetime:(unsigned)arg1 ;
-(void)setEndDatetime:(unsigned)arg1 ;
-(void)setAffectedEntitys:(NSMutableArray *)arg1 ;
-(void)_readAffectedEntitys;
-(void)_addNoFlagsAffectedEntity:(id)arg1 ;
-(void)_readLongDescriptionString;
-(void)_readShortDescriptionString;
-(void)_readTitleString;
-(void)_readMessageString;
-(void)_readMessageForAllBlocking;
-(void)_readMessageForIncidentType;
-(void)_readIncidentTypeArtwork;
-(GEOPBTransitArtwork *)incidentTypeArtwork;
-(unsigned long long)affectedEntitysCount;
-(void)clearAffectedEntitys;
-(id)affectedEntityAtIndex:(unsigned long long)arg1 ;
-(void)addAffectedEntity:(id)arg1 ;
-(void)setMessageString:(NSString *)arg1 ;
-(void)setMessageForAllBlocking:(NSString *)arg1 ;
-(void)setMessageForIncidentType:(NSString *)arg1 ;
-(void)setIncidentTypeArtwork:(GEOPBTransitArtwork *)arg1 ;
-(void)setIncidentMuid:(unsigned long long)arg1 ;
-(void)setHasIncidentMuid:(BOOL)arg1 ;
-(BOOL)hasIncidentMuid;
-(void)setHasIconEnum:(BOOL)arg1 ;
-(id)iconEnumAsString:(int)arg1 ;
-(int)StringAsIconEnum:(id)arg1 ;
-(void)setHasStartDatetime:(BOOL)arg1 ;
-(void)setHasEndDatetime:(BOOL)arg1 ;
-(void)setHasCreationDatetime:(BOOL)arg1 ;
-(void)setHasUpdatedDatetime:(BOOL)arg1 ;
-(void)setHasBlocking:(BOOL)arg1 ;
-(BOOL)hasBlocking;
-(BOOL)hasLongDescriptionString;
-(BOOL)hasShortDescriptionString;
-(BOOL)hasTitleString;
-(BOOL)hasMessageString;
-(BOOL)hasMessageForAllBlocking;
-(BOOL)hasMessageForIncidentType;
-(BOOL)hasIncidentTypeArtwork;
@end

