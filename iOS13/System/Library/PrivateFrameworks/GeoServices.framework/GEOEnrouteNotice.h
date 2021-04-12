/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOEnrouteNotice : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _guidances;
	NSString* _objectIdentifier;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _highlightDistance;
	unsigned _objectGroupId;
	unsigned _priority;
	int _type;
	struct {
		unsigned has_highlightDistance : 1;
		unsigned has_objectGroupId : 1;
		unsigned has_priority : 1;
		unsigned has_type : 1;
		unsigned read_unknownFields : 1;
		unsigned read_guidances : 1;
		unsigned read_objectIdentifier : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_guidances : 1;
		unsigned wrote_objectIdentifier : 1;
		unsigned wrote_highlightDistance : 1;
		unsigned wrote_objectGroupId : 1;
		unsigned wrote_priority : 1;
		unsigned wrote_type : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasObjectIdentifier; 
@property (nonatomic,retain) NSString * objectIdentifier; 
@property (nonatomic,retain) NSMutableArray * guidances; 
@property (assign,nonatomic) BOOL hasHighlightDistance; 
@property (assign,nonatomic) unsigned highlightDistance; 
@property (assign,nonatomic) BOOL hasObjectGroupId; 
@property (assign,nonatomic) unsigned objectGroupId; 
@property (assign,nonatomic) BOOL hasPriority; 
@property (assign,nonatomic) unsigned priority; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)guidanceType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)priority;
-(void)setPriority:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)guidances;
-(BOOL)hasObjectIdentifier;
-(NSString *)objectIdentifier;
-(BOOL)hasHighlightDistance;
-(unsigned)highlightDistance;
-(BOOL)hasObjectGroupId;
-(unsigned)objectGroupId;
-(BOOL)hasPriority;
-(void)_readObjectIdentifier;
-(void)_readGuidances;
-(void)_addNoFlagsGuidance:(id)arg1 ;
-(void)setObjectIdentifier:(NSString *)arg1 ;
-(unsigned long long)guidancesCount;
-(void)clearGuidances;
-(id)guidanceAtIndex:(unsigned long long)arg1 ;
-(void)addGuidance:(id)arg1 ;
-(void)setGuidances:(NSMutableArray *)arg1 ;
-(void)setHighlightDistance:(unsigned)arg1 ;
-(void)setHasHighlightDistance:(BOOL)arg1 ;
-(void)setObjectGroupId:(unsigned)arg1 ;
-(void)setHasObjectGroupId:(BOOL)arg1 ;
-(void)setHasPriority:(BOOL)arg1 ;
@end

