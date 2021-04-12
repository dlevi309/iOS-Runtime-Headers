/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, VCPProtoTimeRange;

@interface VCPProtoMovieMovingObjectResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	NSMutableArray* _bounds;
	VCPProtoTimeRange* _timeRange;

}

@property (nonatomic,retain) VCPProtoTimeRange * timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,retain) NSMutableArray * bounds;                    //@synthesize bounds=_bounds - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
+(Class)boundsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)bounds;
-(void)setBounds:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimeRange:(VCPProtoTimeRange *)arg1 ;
-(VCPProtoTimeRange *)timeRange;
-(id)exportToLegacyDictionary;
-(void)addBounds:(id)arg1 ;
-(unsigned long long)boundsCount;
-(void)clearBounds;
-(id)boundsAtIndex:(unsigned long long)arg1 ;
@end

