/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHeight:(double)arg1 ;
-(double)x0;
-(double)y0;
-(id)dictionaryRepresentation;
-(double)width;
-(CGRect)rectValue;
-(void)setWidth:(double)arg1 ;
-(void)setX0:(double)arg1 ;
-(void)setY0:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(double)height;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

