/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _MRGameControllerAccelerationProtobuf : PBCodable <NSCopying> {

	NSData* _data;
	float _w;
	float _x;
	float _y;
	float _z;
	SCD_Struct_MR15 _has;

}

@property (nonatomic,readonly) BOOL hasData; 
@property (nonatomic,retain) NSData * data;               //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) BOOL hasX; 
@property (assign,x,nonatomic) float x;                   //@synthesize x=_x - In the implementation block
@property (assign,nonatomic) BOOL hasY; 
@property (assign,y,nonatomic) float y;                   //@synthesize y=_y - In the implementation block
@property (assign,nonatomic) BOOL hasZ; 
@property (assign,z,nonatomic) float z;                   //@synthesize z=_z - In the implementation block
@property (assign,nonatomic) BOOL hasW; 
@property (assign,w,nonatomic) float w;                   //@synthesize w=_w - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)x;
-(float)y;
-(float)z;
-(void)setX:(float)arg1 ;
-(void)setY:(float)arg1 ;
-(void)setZ:(float)arg1 ;
-(void)setW:(float)arg1 ;
-(float)w;
-(BOOL)hasData;
-(void)setHasX:(BOOL)arg1 ;
-(BOOL)hasX;
-(void)setHasY:(BOOL)arg1 ;
-(BOOL)hasY;
-(void)setHasZ:(BOOL)arg1 ;
-(BOOL)hasZ;
-(void)setHasW:(BOOL)arg1 ;
-(BOOL)hasW;
@end

