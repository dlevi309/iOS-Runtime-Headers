/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSMutableArray, VCPCNNData, VCPCNNMetalContext;

@interface VCPCNNBlock : NSObject {

	NSMutableArray* _inputSize;
	NSMutableArray* _outputSize;
	VCPCNNData* _input;
	VCPCNNData* _output;
	VCPCNNMetalContext* _context;
	BOOL _generateOutput;
	BOOL _executedOnGPU;

}

@property (__weak) NSMutableArray * inputSize;                  //@synthesize inputSize=_inputSize - In the implementation block
@property (retain) NSMutableArray * outputSize;                 //@synthesize outputSize=_outputSize - In the implementation block
@property (__weak) VCPCNNData * input;                          //@synthesize input=_input - In the implementation block
@property (retain) VCPCNNData * output;                         //@synthesize output=_output - In the implementation block
@property (readonly) VCPCNNMetalContext * context;              //@synthesize context=_context - In the implementation block
@property (assign) BOOL generateOutput;                         //@synthesize generateOutput=_generateOutput - In the implementation block
-(VCPCNNData *)input;
-(NSMutableArray *)inputSize;
-(VCPCNNData *)output;
-(void)setInput:(VCPCNNData *)arg1 ;
-(VCPCNNMetalContext *)context;
-(BOOL)generateOutput;
-(void)setGenerateOutput:(BOOL)arg1 ;
-(int)forward;
-(BOOL)supportGPU;
-(BOOL)useGPU;
-(int)constructBlock:(id)arg1 context:(id)arg2 ;
-(int)readFromDisk:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(void)setOutput:(VCPCNNData *)arg1 ;
-(void)setInputSize:(NSMutableArray *)arg1 ;
-(void)setOutputSize:(NSMutableArray *)arg1 ;
-(NSMutableArray *)outputSize;
@end

