/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface VCPProtoLivePhotoEffectsResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	unsigned long long _longExposureSuggestionState;
	unsigned long long _loopSuggestionState;
	NSData* _recipeBlob;

}

@property (assign,nonatomic) unsigned long long loopSuggestionState;                      //@synthesize loopSuggestionState=_loopSuggestionState - In the implementation block
@property (assign,nonatomic) unsigned long long longExposureSuggestionState;              //@synthesize longExposureSuggestionState=_longExposureSuggestionState - In the implementation block
@property (nonatomic,readonly) BOOL hasRecipeBlob; 
@property (nonatomic,retain) NSData * recipeBlob;                                         //@synthesize recipeBlob=_recipeBlob - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRecipeBlob:(NSData *)arg1 ;
-(BOOL)hasRecipeBlob;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)loopSuggestionState;
-(void)setLoopSuggestionState:(unsigned long long)arg1 ;
-(unsigned long long)longExposureSuggestionState;
-(void)setLongExposureSuggestionState:(unsigned long long)arg1 ;
-(NSData *)recipeBlob;
-(id)description;
-(id)exportToLegacyDictionary;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

