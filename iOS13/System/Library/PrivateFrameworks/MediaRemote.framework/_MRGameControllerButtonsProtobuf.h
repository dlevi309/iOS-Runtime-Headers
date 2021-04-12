/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRGameControllerButtonsProtobuf : PBCodable <NSCopying> {

	float _a;
	float _b;
	float _dPadX;
	float _dPadY;
	float _leftShoulder;
	float _leftThumbstickX;
	float _leftThumbstickY;
	float _leftTrigger;
	float _pause;
	float _rightShoulder;
	float _rightThumbstickX;
	float _rightThumbstickY;
	float _rightTrigger;
	float _x;
	float _y;
	SCD_Struct_MR24 _has;

}

@property (assign,nonatomic) BOOL hasDPadX; 
@property (assign,nonatomic) float dPadX;                           //@synthesize dPadX=_dPadX - In the implementation block
@property (assign,nonatomic) BOOL hasDPadY; 
@property (assign,nonatomic) float dPadY;                           //@synthesize dPadY=_dPadY - In the implementation block
@property (assign,nonatomic) BOOL hasA; 
@property (assign,a,nonatomic) float a;                             //@synthesize a=_a - In the implementation block
@property (assign,nonatomic) BOOL hasB; 
@property (assign,b,nonatomic) float b;                             //@synthesize b=_b - In the implementation block
@property (assign,nonatomic) BOOL hasX; 
@property (assign,x,nonatomic) float x;                             //@synthesize x=_x - In the implementation block
@property (assign,nonatomic) BOOL hasY; 
@property (assign,y,nonatomic) float y;                             //@synthesize y=_y - In the implementation block
@property (assign,nonatomic) BOOL hasLeftShoulder; 
@property (assign,nonatomic) float leftShoulder;                    //@synthesize leftShoulder=_leftShoulder - In the implementation block
@property (assign,nonatomic) BOOL hasRightShoulder; 
@property (assign,nonatomic) float rightShoulder;                   //@synthesize rightShoulder=_rightShoulder - In the implementation block
@property (assign,nonatomic) BOOL hasLeftThumbstickX; 
@property (assign,nonatomic) float leftThumbstickX;                 //@synthesize leftThumbstickX=_leftThumbstickX - In the implementation block
@property (assign,nonatomic) BOOL hasLeftThumbstickY; 
@property (assign,nonatomic) float leftThumbstickY;                 //@synthesize leftThumbstickY=_leftThumbstickY - In the implementation block
@property (assign,nonatomic) BOOL hasRightThumbstickX; 
@property (assign,nonatomic) float rightThumbstickX;                //@synthesize rightThumbstickX=_rightThumbstickX - In the implementation block
@property (assign,nonatomic) BOOL hasRightThumbstickY; 
@property (assign,nonatomic) float rightThumbstickY;                //@synthesize rightThumbstickY=_rightThumbstickY - In the implementation block
@property (assign,nonatomic) BOOL hasLeftTrigger; 
@property (assign,nonatomic) float leftTrigger;                     //@synthesize leftTrigger=_leftTrigger - In the implementation block
@property (assign,nonatomic) BOOL hasRightTrigger; 
@property (assign,nonatomic) float rightTrigger;                    //@synthesize rightTrigger=_rightTrigger - In the implementation block
@property (assign,nonatomic) BOOL hasPause; 
@property (assign,nonatomic) float pause;                           //@synthesize pause=_pause - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)pause;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)x;
-(float)y;
-(void)setX:(float)arg1 ;
-(void)setY:(float)arg1 ;
-(void)setHasX:(BOOL)arg1 ;
-(BOOL)hasX;
-(void)setHasY:(BOOL)arg1 ;
-(BOOL)hasY;
-(float)leftShoulder;
-(float)rightShoulder;
-(float)leftTrigger;
-(float)rightTrigger;
-(void)setPause:(float)arg1 ;
-(float)b;
-(float)a;
-(void)setDPadX:(float)arg1 ;
-(float)dPadX;
-(void)setDPadY:(float)arg1 ;
-(float)dPadY;
-(void)setA:(float)arg1 ;
-(void)setB:(float)arg1 ;
-(void)setLeftShoulder:(float)arg1 ;
-(void)setRightShoulder:(float)arg1 ;
-(void)setLeftThumbstickX:(float)arg1 ;
-(float)leftThumbstickX;
-(void)setLeftThumbstickY:(float)arg1 ;
-(float)leftThumbstickY;
-(void)setRightThumbstickX:(float)arg1 ;
-(float)rightThumbstickX;
-(void)setRightThumbstickY:(float)arg1 ;
-(float)rightThumbstickY;
-(void)setLeftTrigger:(float)arg1 ;
-(void)setRightTrigger:(float)arg1 ;
-(void)setHasDPadX:(BOOL)arg1 ;
-(BOOL)hasDPadX;
-(void)setHasDPadY:(BOOL)arg1 ;
-(BOOL)hasDPadY;
-(void)setHasA:(BOOL)arg1 ;
-(BOOL)hasA;
-(void)setHasB:(BOOL)arg1 ;
-(BOOL)hasB;
-(void)setHasLeftShoulder:(BOOL)arg1 ;
-(BOOL)hasLeftShoulder;
-(void)setHasRightShoulder:(BOOL)arg1 ;
-(BOOL)hasRightShoulder;
-(void)setHasLeftThumbstickX:(BOOL)arg1 ;
-(BOOL)hasLeftThumbstickX;
-(void)setHasLeftThumbstickY:(BOOL)arg1 ;
-(BOOL)hasLeftThumbstickY;
-(void)setHasRightThumbstickX:(BOOL)arg1 ;
-(BOOL)hasRightThumbstickX;
-(void)setHasRightThumbstickY:(BOOL)arg1 ;
-(BOOL)hasRightThumbstickY;
-(void)setHasLeftTrigger:(BOOL)arg1 ;
-(BOOL)hasLeftTrigger;
-(void)setHasRightTrigger:(BOOL)arg1 ;
-(BOOL)hasRightTrigger;
-(void)setHasPause:(BOOL)arg1 ;
-(BOOL)hasPause;
@end

