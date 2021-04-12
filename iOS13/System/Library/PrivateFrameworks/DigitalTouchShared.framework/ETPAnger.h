/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ETPAnger : PBCodable <NSCopying> {

	NSData* _delays;
	float _duration;
	float _normalizedCenterX;
	float _normalizedCenterY;
	NSData* _points;
	SCD_Struct_ET17 _has;

}

@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) float duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasNormalizedCenterX; 
@property (assign,nonatomic) float normalizedCenterX;                //@synthesize normalizedCenterX=_normalizedCenterX - In the implementation block
@property (assign,nonatomic) BOOL hasNormalizedCenterY; 
@property (assign,nonatomic) float normalizedCenterY;                //@synthesize normalizedCenterY=_normalizedCenterY - In the implementation block
@property (nonatomic,readonly) BOOL hasDelays; 
@property (nonatomic,retain) NSData * delays;                        //@synthesize delays=_delays - In the implementation block
@property (nonatomic,readonly) BOOL hasPoints; 
@property (nonatomic,retain) NSData * points;                        //@synthesize points=_points - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(float)duration;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDuration:(float)arg1 ;
-(NSData *)points;
-(void)setPoints:(NSData *)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setNormalizedCenterX:(float)arg1 ;
-(void)setHasNormalizedCenterX:(BOOL)arg1 ;
-(BOOL)hasNormalizedCenterX;
-(void)setNormalizedCenterY:(float)arg1 ;
-(void)setHasNormalizedCenterY:(BOOL)arg1 ;
-(BOOL)hasNormalizedCenterY;
-(float)normalizedCenterX;
-(float)normalizedCenterY;
-(BOOL)hasPoints;
-(void)setDelays:(NSData *)arg1 ;
-(BOOL)hasDelays;
-(NSData *)delays;
@end

