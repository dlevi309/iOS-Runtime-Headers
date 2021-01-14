/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(Class)boundsType;
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)bounds;
-(void)setTimeRange:(VCPProtoTimeRange *)arg1 ;
-(VCPProtoTimeRange *)timeRange;
-(void)mergeFrom:(id)arg1 ;
-(void)setBounds:(NSMutableArray *)arg1 ;
-(id)description;
-(id)exportToLegacyDictionary;
-(unsigned long long)hash;
-(void)addBounds:(id)arg1 ;
-(unsigned long long)boundsCount;
-(void)clearBounds;
-(id)boundsAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

