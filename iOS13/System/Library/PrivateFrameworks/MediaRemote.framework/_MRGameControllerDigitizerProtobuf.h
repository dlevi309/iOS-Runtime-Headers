/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRGameControllerDigitizerProtobuf : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	double _x;
	double _y;
	BOOL _touchDown;
	SCD_Struct_MR15 _has;

}

@property (assign,nonatomic) BOOL hasX; 
@property (assign,x,nonatomic) double x;                                //@synthesize x=_x - In the implementation block
@property (assign,nonatomic) BOOL hasY; 
@property (assign,y,nonatomic) double y;                                //@synthesize y=_y - In the implementation block
@property (assign,nonatomic) BOOL hasTouchDown; 
@property (assign,nonatomic) BOOL touchDown;                            //@synthesize touchDown=_touchDown - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)x;
-(double)y;
-(void)setX:(double)arg1 ;
-(void)setY:(double)arg1 ;
-(BOOL)touchDown;
-(void)setTouchDown:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasX:(BOOL)arg1 ;
-(BOOL)hasX;
-(void)setHasY:(BOOL)arg1 ;
-(BOOL)hasY;
-(void)setHasTouchDown:(BOOL)arg1 ;
-(BOOL)hasTouchDown;
@end

