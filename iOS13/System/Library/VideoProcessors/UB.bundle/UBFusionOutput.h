/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/

#import <UB/UB-Structs.h>
#import <UB/UBOutput.h>

@class NSMutableDictionary;

@interface UBFusionOutput : UBOutput {

	int _fusionMode;
	CVBufferRef _pixelBuffer;
	NSMutableDictionary* _metadata;
	CVBufferRef _inferenceInputPixelBuffer;
	SCD_Struct_Wa0 _refFrameTransform;

}

@property (nonatomic,retain) CVBufferRef pixelBuffer;                            //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metadata;                     //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) int fusionMode;                                     //@synthesize fusionMode=_fusionMode - In the implementation block
@property (nonatomic,retain) CVBufferRef inferenceInputPixelBuffer;              //@synthesize inferenceInputPixelBuffer=_inferenceInputPixelBuffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_Wa0 refFrameTransform;                   //@synthesize refFrameTransform=_refFrameTransform - In the implementation block
-(void)dealloc;
-(CVBufferRef)pixelBuffer;
-(void)setMetadata:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)metadata;
-(void)setFusionMode:(int)arg1 ;
-(int)fusionMode;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
-(void)setInferenceInputPixelBuffer:(CVBufferRef)arg1 ;
-(SCD_Struct_Wa0)refFrameTransform;
-(CVBufferRef)inferenceInputPixelBuffer;
-(void)setRefFrameTransform:(SCD_Struct_Wa0)arg1 ;
@end

