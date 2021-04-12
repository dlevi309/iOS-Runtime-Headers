/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoLivePhotoVariationParams, NSMutableArray;

@interface VCPProtoLivePhotoEffectsRecipe : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	long long _epoch;
	long long _outputFrameDurValue;
	VCPProtoLivePhotoVariationParams* _autoloop;
	VCPProtoLivePhotoVariationParams* _bounce;
	int _cropRectHeight;
	int _cropRectWidth;
	int _cropRectX;
	int _cropRectY;
	int _flags;
	NSMutableArray* _frameInstructions;
	VCPProtoLivePhotoVariationParams* _longexposure;
	int _minVersion;
	VCPProtoLivePhotoVariationParams* _stabilize;
	int _stabilizeResult;
	int _timeScale;
	int _version;
	SCD_Struct_VC9 _has;

}

@property (assign,nonatomic) int stabilizeResult;                                          //@synthesize stabilizeResult=_stabilizeResult - In the implementation block
@property (assign,nonatomic) long long outputFrameDurValue;                                //@synthesize outputFrameDurValue=_outputFrameDurValue - In the implementation block
@property (assign,nonatomic) int cropRectX;                                                //@synthesize cropRectX=_cropRectX - In the implementation block
@property (assign,nonatomic) int cropRectY;                                                //@synthesize cropRectY=_cropRectY - In the implementation block
@property (assign,nonatomic) int cropRectHeight;                                           //@synthesize cropRectHeight=_cropRectHeight - In the implementation block
@property (assign,nonatomic) int cropRectWidth;                                            //@synthesize cropRectWidth=_cropRectWidth - In the implementation block
@property (assign,nonatomic) int timeScale;                                                //@synthesize timeScale=_timeScale - In the implementation block
@property (assign,nonatomic) BOOL hasEpoch; 
@property (assign,nonatomic) long long epoch;                                              //@synthesize epoch=_epoch - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) int flags;                                                    //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSMutableArray * frameInstructions;                           //@synthesize frameInstructions=_frameInstructions - In the implementation block
@property (nonatomic,retain) VCPProtoLivePhotoVariationParams * autoloop;                  //@synthesize autoloop=_autoloop - In the implementation block
@property (nonatomic,retain) VCPProtoLivePhotoVariationParams * bounce;                    //@synthesize bounce=_bounce - In the implementation block
@property (nonatomic,retain) VCPProtoLivePhotoVariationParams * longexposure;              //@synthesize longexposure=_longexposure - In the implementation block
@property (nonatomic,retain) VCPProtoLivePhotoVariationParams * stabilize;                 //@synthesize stabilize=_stabilize - In the implementation block
@property (assign,nonatomic) int minVersion;                                               //@synthesize minVersion=_minVersion - In the implementation block
@property (assign,nonatomic) int version;                                                  //@synthesize version=_version - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
+(Class)frameInstructionsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)flags;
-(int)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(int)arg1 ;
-(long long)epoch;
-(void)setEpoch:(long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFlags:(int)arg1 ;
-(VCPProtoLivePhotoVariationParams *)bounce;
-(int)timeScale;
-(void)setHasFlags:(BOOL)arg1 ;
-(BOOL)hasFlags;
-(int)minVersion;
-(void)setMinVersion:(int)arg1 ;
-(BOOL)hasEpoch;
-(void)setHasEpoch:(BOOL)arg1 ;
-(id)exportToLegacyDictionary;
-(void)addFrameInstructions:(id)arg1 ;
-(unsigned long long)frameInstructionsCount;
-(void)clearFrameInstructions;
-(id)frameInstructionsAtIndex:(unsigned long long)arg1 ;
-(void)setAutoloop:(VCPProtoLivePhotoVariationParams *)arg1 ;
-(void)setBounce:(VCPProtoLivePhotoVariationParams *)arg1 ;
-(void)setLongexposure:(VCPProtoLivePhotoVariationParams *)arg1 ;
-(void)setStabilize:(VCPProtoLivePhotoVariationParams *)arg1 ;
-(int)stabilizeResult;
-(void)setStabilizeResult:(int)arg1 ;
-(long long)outputFrameDurValue;
-(void)setOutputFrameDurValue:(long long)arg1 ;
-(int)cropRectX;
-(void)setCropRectX:(int)arg1 ;
-(int)cropRectY;
-(void)setCropRectY:(int)arg1 ;
-(int)cropRectHeight;
-(void)setCropRectHeight:(int)arg1 ;
-(int)cropRectWidth;
-(void)setCropRectWidth:(int)arg1 ;
-(void)setTimeScale:(int)arg1 ;
-(NSMutableArray *)frameInstructions;
-(void)setFrameInstructions:(NSMutableArray *)arg1 ;
-(VCPProtoLivePhotoVariationParams *)autoloop;
-(VCPProtoLivePhotoVariationParams *)longexposure;
-(VCPProtoLivePhotoVariationParams *)stabilize;
-(id)exportToLegacyDictionaryFromFrameInstruction:(id)arg1 ;
-(id)exportToLegacyDictionaryFromParam:(id)arg1 withLoopFlavor:(id)arg2 ;
@end

