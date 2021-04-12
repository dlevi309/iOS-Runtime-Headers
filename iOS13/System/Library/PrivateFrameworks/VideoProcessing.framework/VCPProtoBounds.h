/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoBounds : PBCodable <NSCopying> {

	double _height;
	double _width;
	double _x0;
	double _y0;

}

@property (assign,nonatomic) double x0;                  //@synthesize x0=_x0 - In the implementation block
@property (assign,nonatomic) double y0;                  //@synthesize y0=_y0 - In the implementation block
@property (assign,nonatomic) double width;               //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) double height;              //@synthesize height=_height - In the implementation block
+(id)boundsWithCGRect:(CGRect)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)rectValue;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(double)width;
-(double)height;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)x0;
-(void)setX0:(double)arg1 ;
-(double)y0;
-(void)setY0:(double)arg1 ;
@end

