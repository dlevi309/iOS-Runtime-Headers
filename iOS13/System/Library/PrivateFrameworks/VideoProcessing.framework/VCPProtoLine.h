/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(VCPProtoPoint *)start;
-(id)dictionaryRepresentation;
-(VCPProtoPoint *)end;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStart:(VCPProtoPoint *)arg1 ;
-(void)setEnd:(VCPProtoPoint *)arg1 ;
-(CGPoint)startPointValue;
-(CGPoint)endPointValue;
@end

