/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRVirtualTouchEventProtobuf : PBCodable <NSCopying> {

	double _x;
	double _y;
	int _finger;
	int _phase;
	SCD_Struct_MR15 _has;

}

@property (assign,nonatomic) BOOL hasX; 
@property (assign,x,nonatomic) double x;                  //@synthesize x=_x - In the implementation block
@property (assign,nonatomic) BOOL hasY; 
@property (assign,y,nonatomic) double y;                  //@synthesize y=_y - In the implementation block
@property (assign,nonatomic) BOOL hasPhase; 
@property (assign,nonatomic) int phase;                   //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) BOOL hasFinger; 
@property (assign,nonatomic) int finger;                  //@synthesize finger=_finger - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)x;
-(double)y;
-(int)phase;
-(void)setPhase:(int)arg1 ;
-(void)setX:(double)arg1 ;
-(void)setY:(double)arg1 ;
-(void)setHasX:(BOOL)arg1 ;
-(BOOL)hasX;
-(void)setHasY:(BOOL)arg1 ;
-(BOOL)hasY;
-(id)phaseAsString:(int)arg1 ;
-(int)StringAsPhase:(id)arg1 ;
-(BOOL)hasPhase;
-(void)setHasPhase:(BOOL)arg1 ;
-(void)setFinger:(int)arg1 ;
-(int)finger;
-(void)setHasFinger:(BOOL)arg1 ;
-(BOOL)hasFinger;
@end

