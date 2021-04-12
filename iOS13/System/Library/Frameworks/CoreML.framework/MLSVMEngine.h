/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class NSArray, NSString;

@interface MLSVMEngine : NSObject <MLModelSpecificationLoader> {

	BOOL _freeModelOnDealloc;
	BOOL _isInputSizeLowerBoundOnly;
	svm_model* _model;
	unsigned long long _inputSize;
	NSArray* _classLabels;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) svm_model* model;                                            //@synthesize model=_model - In the implementation block
@property (assign) BOOL freeModelOnDealloc;                                     //@synthesize freeModelOnDealloc=_freeModelOnDealloc - In the implementation block
@property (assign) BOOL isInputSizeLowerBoundOnly;                              //@synthesize isInputSizeLowerBoundOnly=_isInputSizeLowerBoundOnly - In the implementation block
@property (assign) unsigned long long inputSize;                                //@synthesize inputSize=_inputSize - In the implementation block
@property (nonatomic,retain) NSArray * classLabels;                             //@synthesize classLabels=_classLabels - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfClasses; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(svm_model*)model;
-(void)setModel:(svm_model*)arg1 ;
-(unsigned long long)inputSize;
-(void)setInputSize:(unsigned long long)arg1 ;
-(NSArray *)classLabels;
-(svm_node*)allocSVMNodeVector:(unsigned long long)arg1 ;
-(void)fillSVMNodeVector:(svm_node*)arg1 values:(double*)arg2 count:(unsigned long long)arg3 ;
-(void)deallocSVMNodeVector:(svm_node*)arg1 ;
-(id)predict:(id)arg1 ;
-(BOOL)isInputSizeLowerBoundOnly;
-(BOOL)freeModelOnDealloc;
-(void)setFreeModelOnDealloc:(BOOL)arg1 ;
-(void)setClassLabels:(NSArray *)arg1 ;
-(id)initWithLibSVMFile:(id)arg1 classLabels:(id)arg2 ;
-(id)initWithSVMModel:(svm_model*)arg1 freeOnDealloc:(BOOL)arg2 isInputSizeLowerBoundOnly:(BOOL)arg3 inputSize:(unsigned long long)arg4 classLabels:(id)arg5 ;
-(unsigned long long)numberOfClasses;
-(BOOL)hasProbabilityPredictionEnabled;
-(void)predictProbabilities:(id)arg1 probabilities:(double*)arg2 ;
-(void)setIsInputSizeLowerBoundOnly:(BOOL)arg1 ;
@end

