/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoPoint;

@interface VCPProtoLine : PBCodable <NSCopying> {

	VCPProtoPoint* _end;
	VCPProtoPoint* _start;

}

@property (nonatomic,retain) VCPProtoPoint * start;              //@synthesize start=_start - In the implementation block
@property (nonatomic,retain) VCPProtoPoint * end;                //@synthesize end=_end - In the implementation block
+(id)lineFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(id)dictionaryRepresentation;
-(VCPProtoPoint *)end;
-(VCPProtoPoint *)start;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setEnd:(VCPProtoPoint *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)endPointValue;
-(void)setStart:(VCPProtoPoint *)arg1 ;
-(CGPoint)startPointValue;
-(BOOL)isEqual:(id)arg1 ;
@end

