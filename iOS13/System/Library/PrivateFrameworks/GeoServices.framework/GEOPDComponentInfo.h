/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDComponentFilter;

@interface GEOPDComponentInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDComponentFilter* _filter;
	unsigned _count;
	unsigned _startIndex;
	int _type;
	int _urgency;
	BOOL _includeSource;
	struct {
		unsigned has_count : 1;
		unsigned has_startIndex : 1;
		unsigned has_type : 1;
		unsigned has_urgency : 1;
		unsigned has_includeSource : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasStartIndex; 
@property (assign,nonatomic) unsigned startIndex; 
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count; 
@property (nonatomic,readonly) BOOL hasFilter; 
@property (nonatomic,retain) GEOPDComponentFilter * filter; 
@property (assign,nonatomic) BOOL hasIncludeSource; 
@property (assign,nonatomic) BOOL includeSource; 
@property (assign,nonatomic) BOOL hasUrgency; 
@property (assign,nonatomic) int urgency; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)count;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setCount:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)urgency;
-(void)setUrgency:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setFilter:(GEOPDComponentFilter *)arg1 ;
-(GEOPDComponentFilter *)filter;
-(unsigned)startIndex;
-(void)setStartIndex:(unsigned)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(BOOL)hasStartIndex;
-(BOOL)hasFilter;
-(void)setHasStartIndex:(BOOL)arg1 ;
-(BOOL)includeSource;
-(void)setIncludeSource:(BOOL)arg1 ;
-(void)setHasIncludeSource:(BOOL)arg1 ;
-(BOOL)hasIncludeSource;
-(void)setHasUrgency:(BOOL)arg1 ;
-(BOOL)hasUrgency;
-(id)urgencyAsString:(int)arg1 ;
-(int)StringAsUrgency:(id)arg1 ;
-(id)initWithType:(int)arg1 count:(unsigned)arg2 ;
@end

