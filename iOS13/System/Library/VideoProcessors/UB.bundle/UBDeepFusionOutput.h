/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/

#import <UB/UB-Structs.h>
#import <UB/UBOutput.h>

@class NSMutableDictionary;

@interface UBDeepFusionOutput : UBOutput {

	BOOL _refFrameTransformIsValid;
	CVBufferRef _proxyPixelBuffer;
	NSMutableDictionary* _proxyMetadata;
	CVBufferRef _referencePixelBuffer;
	NSMutableDictionary* _referenceMetadata;
	CVBufferRef _referenceNoisePixelBuffer;
	CVBufferRef _longPixelBuffer;
	NSMutableDictionary* _longMetadata;
	CVBufferRef _longNoisePixelBuffer;
	CVBufferRef _realLongNoisePixelBuffer;
	CVBufferRef _inferenceInputPixelBuffer;
	SCD_Struct_Wa0 _refFrameTransform;

}

@property (nonatomic,retain) CVBufferRef proxyPixelBuffer;                         //@synthesize proxyPixelBuffer=_proxyPixelBuffer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * proxyMetadata;                  //@synthesize proxyMetadata=_proxyMetadata - In the implementation block
@property (nonatomic,retain) CVBufferRef referencePixelBuffer;                     //@synthesize referencePixelBuffer=_referencePixelBuffer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * referenceMetadata;              //@synthesize referenceMetadata=_referenceMetadata - In the implementation block
@property (nonatomic,retain) CVBufferRef referenceNoisePixelBuffer;                //@synthesize referenceNoisePixelBuffer=_referenceNoisePixelBuffer - In the implementation block
@property (nonatomic,retain) CVBufferRef longPixelBuffer;                          //@synthesize longPixelBuffer=_longPixelBuffer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * longMetadata;                   //@synthesize longMetadata=_longMetadata - In the implementation block
@property (nonatomic,retain) CVBufferRef longNoisePixelBuffer;                     //@synthesize longNoisePixelBuffer=_longNoisePixelBuffer - In the implementation block
@property (nonatomic,retain) CVBufferRef realLongNoisePixelBuffer;                 //@synthesize realLongNoisePixelBuffer=_realLongNoisePixelBuffer - In the implementation block
@property (nonatomic,retain) CVBufferRef inferenceInputPixelBuffer;                //@synthesize inferenceInputPixelBuffer=_inferenceInputPixelBuffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_Wa0 refFrameTransform;                     //@synthesize refFrameTransform=_refFrameTransform - In the implementation block
@property (assign,nonatomic) BOOL refFrameTransformIsValid;                        //@synthesize refFrameTransformIsValid=_refFrameTransformIsValid - In the implementation block
-(void)dealloc;
-(void)setProxyPixelBuffer:(CVBufferRef)arg1 ;
-(void)setProxyMetadata:(NSMutableDictionary *)arg1 ;
-(void)setReferencePixelBuffer:(CVBufferRef)arg1 ;
-(void)setReferenceNoisePixelBuffer:(CVBufferRef)arg1 ;
-(void)setReferenceMetadata:(NSMutableDictionary *)arg1 ;
-(void)setLongPixelBuffer:(CVBufferRef)arg1 ;
-(void)setLongNoisePixelBuffer:(CVBufferRef)arg1 ;
-(void)setLongMetadata:(NSMutableDictionary *)arg1 ;
-(void)setRealLongNoisePixelBuffer:(CVBufferRef)arg1 ;
-(void)setInferenceInputPixelBuffer:(CVBufferRef)arg1 ;
-(SCD_Struct_Wa0)refFrameTransform;
-(BOOL)refFrameTransformIsValid;
-(CVBufferRef)inferenceInputPixelBuffer;
-(void)setRefFrameTransform:(SCD_Struct_Wa0)arg1 ;
-(CVBufferRef)proxyPixelBuffer;
-(NSMutableDictionary *)proxyMetadata;
-(CVBufferRef)referencePixelBuffer;
-(NSMutableDictionary *)referenceMetadata;
-(CVBufferRef)referenceNoisePixelBuffer;
-(CVBufferRef)longPixelBuffer;
-(NSMutableDictionary *)longMetadata;
-(CVBufferRef)longNoisePixelBuffer;
-(CVBufferRef)realLongNoisePixelBuffer;
-(void)setRefFrameTransformIsValid:(BOOL)arg1 ;
@end

