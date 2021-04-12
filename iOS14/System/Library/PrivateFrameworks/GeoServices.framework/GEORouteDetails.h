/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORouteDetails : PBCodable <NSCopying> {

	double _timeSinceRouteResponse;
	int _resultIndex;
	unsigned _stepID;
	BOOL _isNearCurrentlyDisplayedStep;
	BOOL _isNearRoute;
	BOOL _isUserTrackingOn;
	struct {
		unsigned has_timeSinceRouteResponse : 1;
		unsigned has_resultIndex : 1;
		unsigned has_stepID : 1;
		unsigned has_isNearCurrentlyDisplayedStep : 1;
		unsigned has_isNearRoute : 1;
		unsigned has_isUserTrackingOn : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasResultIndex; 
@property (assign,nonatomic) int resultIndex; 
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID; 
@property (assign,nonatomic) BOOL hasIsNearRoute; 
@property (assign,nonatomic) BOOL isNearRoute; 
@property (assign,nonatomic) BOOL hasIsNearCurrentlyDisplayedStep; 
@property (assign,nonatomic) BOOL isNearCurrentlyDisplayedStep; 
@property (assign,nonatomic) BOOL hasIsUserTrackingOn; 
@property (assign,nonatomic) BOOL isUserTrackingOn; 
@property (assign,nonatomic) BOOL hasTimeSinceRouteResponse; 
@property (assign,nonatomic) double timeSinceRouteResponse; 
+(id)routeDetailsWithResultIndex:(int)arg1 stepID:(int)arg2 nearRoute:(BOOL)arg3 nearCurrentlyDisplayedStep:(BOOL)arg4 userTrackingOn:(BOOL)arg5 timeSinceResponse:(double)arg6 ;
+(BOOL)isValid:(id)arg1 ;
+(id)routeDetailsWithResultIndex:(int)arg1 ;
+(id)routeDetailsWithResultIndex:(int)arg1 stepID:(int)arg2 ;
-(id)dictionaryRepresentation;
-(int)resultIndex;
-(void)readAll:(BOOL)arg1 ;
-(unsigned)stepID;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasResultIndex:(BOOL)arg1 ;
-(id)description;
-(BOOL)isNearRoute;
-(void)setHasIsNearRoute:(BOOL)arg1 ;
-(BOOL)hasIsNearRoute;
-(BOOL)isNearCurrentlyDisplayedStep;
-(void)setHasIsNearCurrentlyDisplayedStep:(BOOL)arg1 ;
-(BOOL)isUserTrackingOn;
-(BOOL)hasIsNearCurrentlyDisplayedStep;
-(void)setHasIsUserTrackingOn:(BOOL)arg1 ;
-(BOOL)hasIsUserTrackingOn;
-(double)timeSinceRouteResponse;
-(void)setHasTimeSinceRouteResponse:(BOOL)arg1 ;
-(BOOL)hasTimeSinceRouteResponse;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasStepID;
-(void)setHasStepID:(BOOL)arg1 ;
-(id)initWithResultIndex:(int)arg1 ;
-(void)setIsNearRoute:(BOOL)arg1 ;
-(void)setIsNearCurrentlyDisplayedStep:(BOOL)arg1 ;
-(void)setIsUserTrackingOn:(BOOL)arg1 ;
-(void)setTimeSinceRouteResponse:(double)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setResultIndex:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasResultIndex;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

