/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEONavCameraState;

@interface GEOLogMsgStateNavigation : PBCodable <NSCopying> {

	double _distanceToDestination;
	GEONavCameraState* _navCameraState;
	int _lineType;
	int _navState;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasLineType; 
@property (assign,nonatomic) int lineType; 
@property (assign,nonatomic) BOOL hasNavState; 
@property (assign,nonatomic) int navState; 
@property (assign,nonatomic) BOOL hasDistanceToDestination; 
@property (assign,nonatomic) double distanceToDestination; 
@property (nonatomic,readonly) BOOL hasNavCameraState; 
@property (nonatomic,retain) GEONavCameraState * navCameraState; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(int)navState;
-(void)mergeFrom:(id)arg1 ;
-(GEONavCameraState *)navCameraState;
-(void)setNavState:(int)arg1 ;
-(void)setNavCameraState:(GEONavCameraState *)arg1 ;
-(void)setHasLineType:(BOOL)arg1 ;
-(BOOL)hasLineType;
-(id)lineTypeAsString:(int)arg1 ;
-(int)StringAsLineType:(id)arg1 ;
-(void)setHasNavState:(BOOL)arg1 ;
-(BOOL)hasNavState;
-(id)navStateAsString:(int)arg1 ;
-(int)StringAsNavState:(id)arg1 ;
-(double)distanceToDestination;
-(void)setHasDistanceToDestination:(BOOL)arg1 ;
-(BOOL)hasDistanceToDestination;
-(BOOL)hasNavCameraState;
-(void)setDistanceToDestination:(double)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(int)lineType;
-(unsigned long long)hash;
-(void)setLineType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

