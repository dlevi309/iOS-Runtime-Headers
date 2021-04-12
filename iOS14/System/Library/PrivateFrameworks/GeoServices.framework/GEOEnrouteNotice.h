/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString, GEORouteAnnotation;

@interface GEOEnrouteNotice : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _guidances;
	NSString* _objectIdentifier;
	GEORouteAnnotation* _routeAnnotation;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _groupItemHorizontalDisplayOrder;
	unsigned _groupItemVerticalDisplayOrder;
	unsigned _highlightDistance;
	unsigned _objectGroupId;
	unsigned _priority;
	int _type;
	unsigned _zilchPathIndex;
	struct {
		unsigned has_groupItemHorizontalDisplayOrder : 1;
		unsigned has_groupItemVerticalDisplayOrder : 1;
		unsigned has_highlightDistance : 1;
		unsigned has_objectGroupId : 1;
		unsigned has_priority : 1;
		unsigned has_type : 1;
		unsigned has_zilchPathIndex : 1;
		unsigned read_unknownFields : 1;
		unsigned read_guidances : 1;
		unsigned read_objectIdentifier : 1;
		unsigned read_routeAnnotation : 1;
		unsigned wrote_anyField : 1;
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
@property (nonatomic,readonly) BOOL hasRouteAnnotation; 
@property (nonatomic,retain) GEORouteAnnotation * routeAnnotation; 
@property (assign,nonatomic) BOOL hasZilchPathIndex; 
@property (assign,nonatomic) unsigned zilchPathIndex; 
@property (assign,nonatomic) BOOL hasGroupItemHorizontalDisplayOrder; 
@property (assign,nonatomic) unsigned groupItemHorizontalDisplayOrder; 
@property (assign,nonatomic) BOOL hasGroupItemVerticalDisplayOrder; 
@property (assign,nonatomic) unsigned groupItemVerticalDisplayOrder; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)guidanceType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(id)init;
-(int)StringAsType:(id)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasType;
-(void)addGuidance:(id)arg1 ;
-(void)setObjectIdentifier:(NSString *)arg1 ;
-(void)setHighlightDistance:(unsigned)arg1 ;
-(void)setObjectGroupId:(unsigned)arg1 ;
-(void)setRouteAnnotation:(GEORouteAnnotation *)arg1 ;
-(void)setZilchPathIndex:(unsigned)arg1 ;
-(void)setGroupItemHorizontalDisplayOrder:(unsigned)arg1 ;
-(void)setGroupItemVerticalDisplayOrder:(unsigned)arg1 ;
-(unsigned long long)guidancesCount;
-(void)clearGuidances;
-(id)guidanceAtIndex:(unsigned long long)arg1 ;
-(void)setGuidances:(NSMutableArray *)arg1 ;
-(void)setHasPriority:(BOOL)arg1 ;
-(void)setHasHighlightDistance:(BOOL)arg1 ;
-(void)setHasObjectGroupId:(BOOL)arg1 ;
-(BOOL)hasRouteAnnotation;
-(unsigned)zilchPathIndex;
-(void)setHasZilchPathIndex:(BOOL)arg1 ;
-(BOOL)hasZilchPathIndex;
-(void)setHasGroupItemHorizontalDisplayOrder:(BOOL)arg1 ;
-(void)setHasGroupItemVerticalDisplayOrder:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)groupItemVerticalDisplayOrder;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned)groupItemHorizontalDisplayOrder;
-(int)type;
-(unsigned long long)hash;
-(NSMutableArray *)guidances;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)objectGroupId;
-(NSString *)objectIdentifier;
-(BOOL)hasPriority;
-(BOOL)hasObjectIdentifier;
-(BOOL)hasHighlightDistance;
-(unsigned)highlightDistance;
-(BOOL)hasObjectGroupId;
-(BOOL)hasGroupItemHorizontalDisplayOrder;
-(BOOL)hasGroupItemVerticalDisplayOrder;
-(GEORouteAnnotation *)routeAnnotation;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)priority;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(unsigned)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

