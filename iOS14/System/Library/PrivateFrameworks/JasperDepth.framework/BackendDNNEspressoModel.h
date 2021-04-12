/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/

#import <JasperDepth/JasperDepth-Structs.h>
#import <JasperDepth/DNNEspressoModel.h>

@class NSMutableArray;

@interface BackendDNNEspressoModel : DNNEspressoModel {

	NSMutableArray* _outputFeatureVectorDim;
	SCD_Struct_Fr26* _depthInputBlob;
	SCD_Struct_Fr26* _imageInputBlob;
	SCD_Struct_Fr26* _depthMaskIinputBlob;
	SCD_Struct_Fr26* _resultsOutputBlob;

}

@property (assign,nonatomic) SCD_Struct_Fr26* depthInputBlob;                      //@synthesize depthInputBlob=_depthInputBlob - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fr26* imageInputBlob;                      //@synthesize imageInputBlob=_imageInputBlob - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fr26* depthMaskIinputBlob;                 //@synthesize depthMaskIinputBlob=_depthMaskIinputBlob - In the implementation block
@property (assign) SCD_Struct_Fr26* resultsOutputBlob;                             //@synthesize resultsOutputBlob=_resultsOutputBlob - In the implementation block
@property (nonatomic,retain) NSMutableArray * outputFeatureVectorDim;              //@synthesize outputFeatureVectorDim=_outputFeatureVectorDim - In the implementation block
-(BOOL)initializeInputOutputBlobs;
-(SCD_Struct_Fr26*)resultsOutputBlob;
-(void)setResultsOutputBlob:(SCD_Struct_Fr26*)arg1 ;
-(int)processImage:(CVBufferRef)arg1 depthImage:(CVBufferRef)arg2 depthMaskImage:(float*)arg3 result:(float*)arg4 ;
-(int)feedNetwork:(float*)arg1 inputDepthBuffer:(float*)arg2 inputDepthMaskBuffer:(float*)arg3 width:(int)arg4 height:(int)arg5 ;
-(NSMutableArray *)outputFeatureVectorDim;
-(void)setOutputFeatureVectorDim:(NSMutableArray *)arg1 ;
-(SCD_Struct_Fr26*)depthInputBlob;
-(void)setDepthInputBlob:(SCD_Struct_Fr26*)arg1 ;
-(SCD_Struct_Fr26*)imageInputBlob;
-(void)setImageInputBlob:(SCD_Struct_Fr26*)arg1 ;
-(SCD_Struct_Fr26*)depthMaskIinputBlob;
-(void)setDepthMaskIinputBlob:(SCD_Struct_Fr26*)arg1 ;
@end

