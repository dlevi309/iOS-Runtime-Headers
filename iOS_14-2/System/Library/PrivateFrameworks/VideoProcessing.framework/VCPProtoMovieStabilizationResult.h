/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface VCPProtoMovieStabilizationResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	float _analysisConfidence;
	NSData* _recipeBlob;
	BOOL _gyroStabilization;

}

@property (assign,nonatomic) float analysisConfidence;              //@synthesize analysisConfidence=_analysisConfidence - In the implementation block
@property (assign,nonatomic) BOOL gyroStabilization;                //@synthesize gyroStabilization=_gyroStabilization - In the implementation block
@property (nonatomic,readonly) BOOL hasRecipeBlob; 
@property (nonatomic,retain) NSData * recipeBlob;                   //@synthesize recipeBlob=_recipeBlob - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRecipeBlob:(NSData *)arg1 ;
-(BOOL)hasRecipeBlob;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)recipeBlob;
-(id)description;
-(id)exportToLegacyDictionary;
-(void)setGyroStabilization:(BOOL)arg1 ;
-(void)setAnalysisConfidence:(float)arg1 ;
-(float)analysisConfidence;
-(BOOL)gyroStabilization;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

