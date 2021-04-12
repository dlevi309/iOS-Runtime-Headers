/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class MLModel, NSArray, NSString;

@interface CRMLModel : NSObject {

	MLModel* model;
	int _modelHeight;
	int _modelWidth;
	int _classCount;
	const int* _codeMap;
	NSArray* _modelShape;
	long long _gpuBatchSize;
	long long _cpuBatchSize;

}

@property (readonly) NSString * modelName; 
@property (readonly) const int* codeMap;                //@synthesize codeMap=_codeMap - In the implementation block
@property (readonly) int classCount;                    //@synthesize classCount=_classCount - In the implementation block
@property (retain) NSArray * modelShape;                //@synthesize modelShape=_modelShape - In the implementation block
@property (readonly) int inputWidth; 
@property (readonly) int inputHeight; 
@property (assign) long long gpuBatchSize;              //@synthesize gpuBatchSize=_gpuBatchSize - In the implementation block
@property (assign) long long cpuBatchSize;              //@synthesize cpuBatchSize=_cpuBatchSize - In the implementation block
-(id)init;
-(int)inputWidth;
-(int)inputHeight;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(NSString *)modelName;
-(vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*)activationsFromImage:(id)arg1 ;
-(id)decodeActivations:(vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*)arg1 ;
-(const int*)codeMap;
-(int)classCount;
-(id)predict:(id)arg1 error:(id*)arg2 ;
-(long long)gpuBatchSize;
-(NSArray *)modelShape;
-(id)decodeActivations:(vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*)arg1 blank:(unsigned short)arg2 ctcAllowGarbage:(BOOL)arg3 numResultNeeded:(long long)arg4 ;
-(id)initWithURL:(id)arg1 restrictToCPU:(BOOL)arg2 error:(id*)arg3 ;
-(void)setModelShape:(NSArray *)arg1 ;
-(void)setGpuBatchSize:(long long)arg1 ;
-(void)setCpuBatchSize:(long long)arg1 ;
-(long long)cpuBatchSize;
-(id)initRestrictingToCPU:(BOOL)arg1 ;
@end

