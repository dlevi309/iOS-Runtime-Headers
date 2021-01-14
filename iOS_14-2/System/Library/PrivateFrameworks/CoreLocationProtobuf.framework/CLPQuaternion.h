/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPQuaternion : PBCodable <NSCopying> {

	float _w;
	float _x;
	float _y;
	float _z;
	SCD_Struct_CL3 _has;

}

@property (assign,nonatomic) BOOL hasW; 
@property (assign,w,nonatomic) float w;              //@synthesize w=_w - In the implementation block
@property (assign,x,nonatomic) float x;              //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) float y;              //@synthesize y=_y - In the implementation block
@property (assign,z,nonatomic) float z;              //@synthesize z=_z - In the implementation block
-(id)dictionaryRepresentation;
-(float)x;
-(float)w;
-(float)z;
-(void)setX:(float)arg1 ;
-(void)setY:(float)arg1 ;
-(float)y;
-(void)setZ:(float)arg1 ;
-(void)setHasW:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasW;
-(void)setW:(float)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

