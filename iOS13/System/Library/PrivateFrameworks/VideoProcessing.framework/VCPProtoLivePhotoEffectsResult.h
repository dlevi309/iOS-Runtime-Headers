/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)exportToLegacyDictionary;
-(void)setRecipeBlob:(NSData *)arg1 ;
-(BOOL)hasRecipeBlob;
-(unsigned long long)loopSuggestionState;
-(void)setLoopSuggestionState:(unsigned long long)arg1 ;
-(unsigned long long)longExposureSuggestionState;
-(void)setLongExposureSuggestionState:(unsigned long long)arg1 ;
-(NSData *)recipeBlob;
@end

