/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSMutableArray, MPSImage, VCPCNNMetalContext;

@interface VCPCNNData : NSObject {

	BOOL _isInputOutput;
	NSMutableArray* _size;
	float* _data;
	MPSImage* _mpsImg;
	VCPCNNMetalContext* _context;

}

@property (retain) NSMutableArray * size;                     //@synthesize size=_size - In the implementation block
@property (assign) float* data;                               //@synthesize data=_data - In the implementation block
@property (assign) BOOL isInputOutput;                        //@synthesize isInputOutput=_isInputOutput - In the implementation block
@property (retain) MPSImage * mpsImg;                         //@synthesize mpsImg=_mpsImg - In the implementation block
@property (__weak) VCPCNNMetalContext * context;              //@synthesize context=_context - In the implementation block
+(id)cnnDataWithGPUContext:(id)arg1 ;
+(id)cnnData;
+(Class)cnnDataClass;
+(id)cnnDataWithPlane:(int)arg1 height:(int)arg2 width:(int)arg3 context:(id)arg4 ;
-(id)init;
-(void)dealloc;
-(float*)data;
-(NSMutableArray *)size;
-(void)setData:(float*)arg1 ;
-(VCPCNNMetalContext *)context;
-(void)setContext:(VCPCNNMetalContext *)arg1 ;
-(void)setSize:(NSMutableArray *)arg1 ;
-(int)normalization;
-(int)allocBuffers:(BOOL)arg1 ;
-(int)reallocGPUTemporalBuffers;
-(MPSImage *)mpsImg;
-(int)readFromDisk:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(id)initWithGPUContext:(id)arg1 ;
-(id)initWithParameters:(int)arg1 height:(int)arg2 width:(int)arg3 context:(id)arg4 ;
-(int)bufferAllocCPU;
-(int)randInit;
-(int)convertCPUData2GPU;
-(int)convertGPUData2CPU;
-(int)copyImage:(CVBufferRef)arg1 withChunk:(int)arg2 ;
-(int)softmax;
-(BOOL)isInputOutput;
-(void)setIsInputOutput:(BOOL)arg1 ;
-(void)setMpsImg:(MPSImage *)arg1 ;
@end

