/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray;

@interface GEOCompanionGenericStep : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOJunctionElement* _junctionElements;
	unsigned long long _junctionElementsCount;
	unsigned long long _junctionElementsSpace;
	NSMutableArray* _maneuverNames;
	NSMutableArray* _signposts;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _junctionType;
	int _maneuverType;
	int _transportType;
	struct {
		unsigned has_junctionType : 1;
		unsigned has_maneuverType : 1;
		unsigned has_transportType : 1;
		unsigned read_junctionElements : 1;
		unsigned read_maneuverNames : 1;
		unsigned read_signposts : 1;
		unsigned wrote_junctionElements : 1;
		unsigned wrote_maneuverNames : 1;
		unsigned wrote_signposts : 1;
		unsigned wrote_junctionType : 1;
		unsigned wrote_maneuverType : 1;
		unsigned wrote_transportType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasManeuverType; 
@property (assign,nonatomic) int maneuverType; 
@property (nonatomic,retain) NSMutableArray * maneuverNames; 
@property (nonatomic,retain) NSMutableArray * signposts; 
@property (assign,nonatomic) BOOL hasJunctionType; 
@property (assign,nonatomic) int junctionType; 
@property (nonatomic,readonly) unsigned long long junctionElementsCount; 
@property (nonatomic,readonly) GEOJunctionElement* junctionElements; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
+(BOOL)isValid:(id)arg1 ;
+(Class)maneuverNameType;
+(Class)signpostType;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)transportType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)maneuverType;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(void)clearJunctionElements;
-(void)_readManeuverNames;
-(void)_addNoFlagsManeuverName:(id)arg1 ;
-(void)_readJunctionElements;
-(void)_addNoFlagsJunctionElement:(GEOJunctionElement)arg1 ;
-(void)_readSignposts;
-(void)_addNoFlagsSignpost:(id)arg1 ;
-(unsigned long long)maneuverNamesCount;
-(void)clearManeuverNames;
-(id)maneuverNameAtIndex:(unsigned long long)arg1 ;
-(void)addManeuverName:(id)arg1 ;
-(unsigned long long)junctionElementsCount;
-(GEOJunctionElement)junctionElementAtIndex:(unsigned long long)arg1 ;
-(void)addJunctionElement:(GEOJunctionElement)arg1 ;
-(unsigned long long)signpostsCount;
-(void)clearSignposts;
-(id)signpostAtIndex:(unsigned long long)arg1 ;
-(void)addSignpost:(id)arg1 ;
-(NSMutableArray *)maneuverNames;
-(NSMutableArray *)signposts;
-(void)setManeuverType:(int)arg1 ;
-(void)setHasManeuverType:(BOOL)arg1 ;
-(BOOL)hasManeuverType;
-(id)maneuverTypeAsString:(int)arg1 ;
-(int)StringAsManeuverType:(id)arg1 ;
-(void)setManeuverNames:(NSMutableArray *)arg1 ;
-(int)junctionType;
-(void)setJunctionType:(int)arg1 ;
-(void)setHasJunctionType:(BOOL)arg1 ;
-(BOOL)hasJunctionType;
-(id)junctionTypeAsString:(int)arg1 ;
-(int)StringAsJunctionType:(id)arg1 ;
-(GEOJunctionElement*)junctionElements;
-(void)setJunctionElements:(GEOJunctionElement*)arg1 count:(unsigned long long)arg2 ;
-(void)setSignposts:(NSMutableArray *)arg1 ;
@end

