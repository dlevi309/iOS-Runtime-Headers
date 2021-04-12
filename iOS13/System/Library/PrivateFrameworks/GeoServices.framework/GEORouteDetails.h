/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)isValid:(id)arg1 ;
+(id)routeDetailsWithResultIndex:(int)arg1 ;
+(id)routeDetailsWithResultIndex:(int)arg1 stepID:(int)arg2 ;
+(id)routeDetailsWithResultIndex:(int)arg1 stepID:(int)arg2 nearRoute:(BOOL)arg3 nearCurrentlyDisplayedStep:(BOOL)arg4 userTrackingOn:(BOOL)arg5 timeSinceResponse:(double)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setResultIndex:(int)arg1 ;
-(id)initWithResultIndex:(int)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(void)setIsNearRoute:(BOOL)arg1 ;
-(void)setIsNearCurrentlyDisplayedStep:(BOOL)arg1 ;
-(void)setIsUserTrackingOn:(BOOL)arg1 ;
-(void)setTimeSinceRouteResponse:(double)arg1 ;
-(int)resultIndex;
-(BOOL)hasResultIndex;
-(unsigned)stepID;
-(void)setHasStepID:(BOOL)arg1 ;
-(BOOL)hasStepID;
-(void)setHasResultIndex:(BOOL)arg1 ;
-(BOOL)isNearRoute;
-(void)setHasIsNearRoute:(BOOL)arg1 ;
-(BOOL)hasIsNearRoute;
-(BOOL)isNearCurrentlyDisplayedStep;
-(void)setHasIsNearCurrentlyDisplayedStep:(BOOL)arg1 ;
-(BOOL)hasIsNearCurrentlyDisplayedStep;
-(BOOL)isUserTrackingOn;
-(void)setHasIsUserTrackingOn:(BOOL)arg1 ;
-(BOOL)hasIsUserTrackingOn;
-(double)timeSinceRouteResponse;
-(void)setHasTimeSinceRouteResponse:(BOOL)arg1 ;
-(BOOL)hasTimeSinceRouteResponse;
@end

