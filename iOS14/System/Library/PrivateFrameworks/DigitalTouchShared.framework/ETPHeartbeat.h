/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ETPHeartbeat : PBCodable <NSCopying> {

	float _beatsPerMinute;
	unsigned _duration;
	float _heartbreakTime;
	float _normalizedCenterX;
	float _normalizedCenterY;
	float _rotation;
	SCD_Struct_ET5 _has;

}

@property (assign,nonatomic) BOOL hasBeatsPerMinute; 
@property (assign,nonatomic) float beatsPerMinute;                   //@synthesize beatsPerMinute=_beatsPerMinute - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasNormalizedCenterX; 
@property (assign,nonatomic) float normalizedCenterX;                //@synthesize normalizedCenterX=_normalizedCenterX - In the implementation block
@property (assign,nonatomic) BOOL hasNormalizedCenterY; 
@property (assign,nonatomic) float normalizedCenterY;                //@synthesize normalizedCenterY=_normalizedCenterY - In the implementation block
@property (assign,nonatomic) BOOL hasRotation; 
@property (assign,nonatomic) float rotation;                         //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) BOOL hasHeartbreakTime; 
@property (assign,nonatomic) float heartbreakTime;                   //@synthesize heartbreakTime=_heartbreakTime - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(float)beatsPerMinute;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasBeatsPerMinute;
-(void)setBeatsPerMinute:(float)arg1 ;
-(void)setHasBeatsPerMinute:(BOOL)arg1 ;
-(void)setNormalizedCenterX:(float)arg1 ;
-(void)setHasNormalizedCenterX:(BOOL)arg1 ;
-(BOOL)hasNormalizedCenterX;
-(void)setNormalizedCenterY:(float)arg1 ;
-(void)setHasNormalizedCenterY:(BOOL)arg1 ;
-(BOOL)hasNormalizedCenterY;
-(void)setHasRotation:(BOOL)arg1 ;
-(BOOL)hasRotation;
-(void)setHeartbreakTime:(float)arg1 ;
-(void)setHasHeartbreakTime:(BOOL)arg1 ;
-(BOOL)hasHeartbreakTime;
-(float)normalizedCenterX;
-(float)normalizedCenterY;
-(float)heartbreakTime;
@end

