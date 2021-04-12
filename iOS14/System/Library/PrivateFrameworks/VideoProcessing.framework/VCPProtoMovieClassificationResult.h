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

@interface VCPProtoMovieClassificationResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	NSMutableArray* _classifications;
	VCPProtoTimeRange* _timeRange;

}

@property (nonatomic,retain) VCPProtoTimeRange * timeRange;                 //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,retain) NSMutableArray * classifications;              //@synthesize classifications=_classifications - In the implementation block
+(Class)classificationType;
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTimeRange:(VCPProtoTimeRange *)arg1 ;
-(VCPProtoTimeRange *)timeRange;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(id)exportToLegacyDictionary;
-(unsigned long long)classificationsCount;
-(void)clearClassifications;
-(void)addClassification:(id)arg1 ;
-(id)classificationAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)classifications;
-(void)setClassifications:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

