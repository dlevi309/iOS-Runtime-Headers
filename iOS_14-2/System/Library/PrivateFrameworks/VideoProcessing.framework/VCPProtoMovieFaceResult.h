/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoBounds, VCPProtoTimeRange;

@interface VCPProtoMovieFaceResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	VCPProtoBounds* _bounds;
	int _faceID;
	int _mouthExpression;
	int _position;
	VCPProtoTimeRange* _timeRange;
	BOOL _isCloseup;

}

@property (nonatomic,retain) VCPProtoTimeRange * timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) int mouthExpression;                        //@synthesize mouthExpression=_mouthExpression - In the implementation block
@property (assign,nonatomic) int position;                               //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) VCPProtoBounds * bounds;                    //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) BOOL isCloseup;                             //@synthesize isCloseup=_isCloseup - In the implementation block
@property (assign,nonatomic) int faceID;                                 //@synthesize faceID=_faceID - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(VCPProtoBounds *)bounds;
-(int)position;
-(void)setTimeRange:(VCPProtoTimeRange *)arg1 ;
-(VCPProtoTimeRange *)timeRange;
-(int)faceID;
-(void)mergeFrom:(id)arg1 ;
-(void)setBounds:(VCPProtoBounds *)arg1 ;
-(id)description;
-(id)exportToLegacyDictionary;
-(int)mouthExpression;
-(void)setMouthExpression:(int)arg1 ;
-(BOOL)isCloseup;
-(void)setIsCloseup:(BOOL)arg1 ;
-(void)setPosition:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setFaceID:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

