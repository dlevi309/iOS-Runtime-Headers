/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSData, NSMutableArray;

@interface GEOTrafficRerouteFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSData* _oldRouteID;
	NSMutableArray* _oldRouteIncidents;
	NSData* _reroutedRouteID;
	NSData* _responseId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _actionType;
	int _alertType;
	unsigned _oldRouteHistoricTravelTime;
	unsigned _oldRouteTravelTime;
	int _rerouteType;
	unsigned _reroutedRouteHistoricTravelTime;
	unsigned _reroutedRouteTravelTime;
	BOOL _backgrounded;
	struct {
		unsigned has_actionType : 1;
		unsigned has_alertType : 1;
		unsigned has_oldRouteHistoricTravelTime : 1;
		unsigned has_oldRouteTravelTime : 1;
		unsigned has_rerouteType : 1;
		unsigned has_reroutedRouteHistoricTravelTime : 1;
		unsigned has_reroutedRouteTravelTime : 1;
		unsigned has_backgrounded : 1;
		unsigned read_oldRouteID : 1;
		unsigned read_oldRouteIncidents : 1;
		unsigned read_reroutedRouteID : 1;
		unsigned read_responseId : 1;
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
@property (nonatomic,retain) NSMutableArray * oldRouteIncidents; 
@property (nonatomic,readonly) BOOL hasOldRouteID; 
@property (nonatomic,retain) NSData * oldRouteID; 
@property (nonatomic,readonly) BOOL hasReroutedRouteID; 
@property (nonatomic,retain) NSData * reroutedRouteID; 
@property (assign,nonatomic) BOOL hasActionType; 
@property (assign,nonatomic) int actionType; 
@property (assign,nonatomic) BOOL hasAlertType; 
@property (assign,nonatomic) int alertType; 
@property (assign,nonatomic) BOOL hasBackgrounded; 
@property (assign,nonatomic) BOOL backgrounded; 
@property (assign,nonatomic) BOOL hasRerouteType; 
@property (assign,nonatomic) int rerouteType; 
@property (nonatomic,readonly) BOOL hasResponseId; 
@property (nonatomic,retain) NSData * responseId; 
+(BOOL)isValid:(id)arg1 ;
+(Class)oldRouteIncidentsType;
-(id)dictionaryRepresentation;
-(int)alertType;
-(void)setActionType:(int)arg1 ;
-(int)actionType;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setAlertType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)responseId;
-(void)setResponseId:(NSData *)arg1 ;
-(BOOL)hasResponseId;
-(id)description;
-(BOOL)hasAlertType;
-(void)setHasActionType:(BOOL)arg1 ;
-(BOOL)hasActionType;
-(id)actionTypeAsString:(int)arg1 ;
-(int)StringAsActionType:(id)arg1 ;
-(void)setHasAlertType:(BOOL)arg1 ;
-(id)alertTypeAsString:(int)arg1 ;
-(int)StringAsAlertType:(id)arg1 ;
-(unsigned long long)hash;
-(void)setBackgrounded:(BOOL)arg1 ;
-(void)setRerouteType:(int)arg1 ;
-(BOOL)backgrounded;
-(void)setHasBackgrounded:(BOOL)arg1 ;
-(BOOL)hasBackgrounded;
-(int)rerouteType;
-(void)setHasRerouteType:(BOOL)arg1 ;
-(BOOL)hasRerouteType;
-(id)rerouteTypeAsString:(int)arg1 ;
-(int)StringAsRerouteType:(id)arg1 ;
-(void)setOldRouteID:(NSData *)arg1 ;
-(NSData *)oldRouteID;
-(NSData *)reroutedRouteID;
-(void)setOldRouteTravelTime:(unsigned)arg1 ;
-(void)setReroutedRouteTravelTime:(unsigned)arg1 ;
-(void)setOldRouteHistoricTravelTime:(unsigned)arg1 ;
-(void)setReroutedRouteHistoricTravelTime:(unsigned)arg1 ;
-(void)addOldRouteIncidents:(id)arg1 ;
-(void)setReroutedRouteID:(NSData *)arg1 ;
-(unsigned)oldRouteTravelTime;
-(unsigned long long)oldRouteIncidentsCount;
-(void)clearOldRouteIncidents;
-(id)oldRouteIncidentsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasOldRouteID;
-(void)setHasOldRouteTravelTime:(BOOL)arg1 ;
-(BOOL)hasOldRouteTravelTime;
-(unsigned)reroutedRouteTravelTime;
-(void)setHasReroutedRouteTravelTime:(BOOL)arg1 ;
-(BOOL)hasReroutedRouteTravelTime;
-(unsigned)oldRouteHistoricTravelTime;
-(void)setHasOldRouteHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasOldRouteHistoricTravelTime;
-(unsigned)reroutedRouteHistoricTravelTime;
-(void)setHasReroutedRouteHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasReroutedRouteHistoricTravelTime;
-(NSMutableArray *)oldRouteIncidents;
-(void)setOldRouteIncidents:(NSMutableArray *)arg1 ;
-(BOOL)hasReroutedRouteID;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

