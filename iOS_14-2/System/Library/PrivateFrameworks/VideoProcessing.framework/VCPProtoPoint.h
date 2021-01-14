/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoPoint : PBCodable <NSCopying> {

	double _x;
	double _y;

}

@property (assign,x,nonatomic) double x;              //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) double y;              //@synthesize y=_y - In the implementation block
+(id)pointWithPoint:(CGPoint)arg1 ;
-(id)dictionaryRepresentation;
-(double)x;
-(void)setX:(double)arg1 ;
-(void)setY:(double)arg1 ;
-(double)y;
-(CGPoint)pointValue;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

