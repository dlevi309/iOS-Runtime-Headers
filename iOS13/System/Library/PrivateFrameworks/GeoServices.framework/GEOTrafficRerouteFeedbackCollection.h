/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE92 _flags;

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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readOldRouteIncidents;
-(void)_addNoFlagsOldRouteIncidents:(id)arg1 ;
-(void)_readOldRouteID;
-(void)_readReroutedRouteID;
-(NSData *)oldRouteID;
-(NSData *)reroutedRouteID;
-(unsigned long long)oldRouteIncidentsCount;
-(void)clearOldRouteIncidents;
-(id)oldRouteIncidentsAtIndex:(unsigned long long)arg1 ;
-(void)addOldRouteIncidents:(id)arg1 ;
-(void)setOldRouteID:(NSData *)arg1 ;
-(void)setReroutedRouteID:(NSData *)arg1 ;
-(unsigned)oldRouteTravelTime;
-(void)setOldRouteTravelTime:(unsigned)arg1 ;
-(void)setHasOldRouteTravelTime:(BOOL)arg1 ;
-(BOOL)hasOldRouteTravelTime;
-(unsigned)reroutedRouteTravelTime;
-(void)setReroutedRouteTravelTime:(unsigned)arg1 ;
-(void)setHasReroutedRouteTravelTime:(BOOL)arg1 ;
-(BOOL)hasReroutedRouteTravelTime;
-(unsigned)oldRouteHistoricTravelTime;
-(void)setOldRouteHistoricTravelTime:(unsigned)arg1 ;
-(void)setHasOldRouteHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasOldRouteHistoricTravelTime;
-(unsigned)reroutedRouteHistoricTravelTime;
-(void)setReroutedRouteHistoricTravelTime:(unsigned)arg1 ;
-(void)setHasReroutedRouteHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasReroutedRouteHistoricTravelTime;
-(NSMutableArray *)oldRouteIncidents;
-(void)setOldRouteIncidents:(NSMutableArray *)arg1 ;
-(BOOL)hasOldRouteID;
-(BOOL)hasReroutedRouteID;
-(void)setDirectionResponseID:(NSData *)arg1 ;
-(void)_readDirectionResponseID;
-(NSData *)directionResponseID;
-(BOOL)oldRouteBlocked;
-(void)setOldRouteBlocked:(BOOL)arg1 ;
-(void)setHasOldRouteBlocked:(BOOL)arg1 ;
-(BOOL)hasOldRouteBlocked;
-(BOOL)hasDirectionResponseID;
@end

