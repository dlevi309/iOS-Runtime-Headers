/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSData, NSMutableArray;

@interface GEOTrafficRerouteFeedbackCollection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSData* _directionResponseID;
	NSData* _oldRouteID;
	NSMutableArray* _oldRouteIncidents;
	NSData* _reroutedRouteID;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _oldRouteHistoricTravelTime;
	unsigned _oldRouteTravelTime;
	unsigned _reroutedRouteHistoricTravelTime;
	unsigned _reroutedRouteTravelTime;
	BOOL _oldRouteBlocked;
	struct {
		unsigned has_oldRouteHistoricTravelTime : 1;
		unsigned has_oldRouteTravelTime : 1;
		unsigned has_reroutedRouteHistoricTravelTime : 1;
		unsigned has_reroutedRouteTravelTime : 1;
		unsigned has_oldRouteBlocked : 1;
		unsigned read_directionResponseID : 1;
		unsigned read_oldRouteID : 1;
		unsigned read_oldRouteIncidents : 1;
		unsigned read_reroutedRouteID : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasOldRouteTravelTime; 
@property (assign,nonatomic) unsigned oldRouteTravelTime; 
@property (assign,nonatomic) BOOL hasReroutedRouteTravelTime; 
@property (assign,nonatomic) unsigned reroutedRouteTravelTime; 
@property (assign,nonatomic) BOOL hasOldRouteHistoricTravelTime; 
@property (assign,nonatomic) unsigned oldRouteHistoricTravelTime; 
@property (assign,nonatomic) BOOL hasReroutedRouteHistoricTravelTime; 
@property (assign,nonatomic) unsigned reroutedRouteHistoricTravelTime; 
@property (assign,nonatomic) BOOL hasOldRouteBlocked; 
@property (assign,nonatomic) BOOL oldRouteBlocked; 
@property (nonatomic,retain) NSMutableArray * oldRouteIncidents; 
@property (nonatomic,readonly) BOOL hasDirectionResponseID; 
@property (nonatomic,retain) NSData * directionResponseID; 
@property (nonatomic,readonly) BOOL hasOldRouteID; 
@property (nonatomic,retain) NSData * oldRouteID; 
@property (nonatomic,readonly) BOOL hasReroutedRouteID; 
@property (nonatomic,retain) NSData * reroutedRouteID; 
+(BOOL)isValid:(id)arg1 ;
+(Class)oldRouteIncidentsType;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setOldRouteID:(NSData *)arg1 ;
-(NSData *)oldRouteID;
-(NSData *)directionResponseID;
-(NSData *)reroutedRouteID;
-(void)setOldRouteTravelTime:(unsigned)arg1 ;
-(void)setReroutedRouteTravelTime:(unsigned)arg1 ;
-(void)setOldRouteHistoricTravelTime:(unsigned)arg1 ;
-(void)setReroutedRouteHistoricTravelTime:(unsigned)arg1 ;
-(void)setOldRouteBlocked:(BOOL)arg1 ;
-(void)addOldRouteIncidents:(id)arg1 ;
-(void)setDirectionResponseID:(NSData *)arg1 ;
-(void)setReroutedRouteID:(NSData *)arg1 ;
-(unsigned)oldRouteTravelTime;
-(unsigned long long)oldRouteIncidentsCount;
-(void)clearOldRouteIncidents;
-(id)oldRouteIncidentsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasOldRouteID;
-(void)setHasOldRouteTravelTime:(BOOL)arg1 ;
-(BOOL)hasOldRouteTravelTime;
-(BOOL)oldRouteBlocked;
-(unsigned)reroutedRouteTravelTime;
-(void)setHasReroutedRouteTravelTime:(BOOL)arg1 ;
-(BOOL)hasReroutedRouteTravelTime;
-(unsigned)oldRouteHistoricTravelTime;
-(void)setHasOldRouteHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasOldRouteBlocked;
-(BOOL)hasOldRouteHistoricTravelTime;
-(unsigned)reroutedRouteHistoricTravelTime;
-(void)setHasOldRouteBlocked:(BOOL)arg1 ;
-(void)setHasReroutedRouteHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasReroutedRouteHistoricTravelTime;
-(NSMutableArray *)oldRouteIncidents;
-(void)setOldRouteIncidents:(NSMutableArray *)arg1 ;
-(BOOL)hasDirectionResponseID;
-(BOOL)hasReroutedRouteID;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

