/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


#import <Espresso/Espresso-Structs.h>
@class NSArray;

@interface EspressoDataFrameExecutor : NSObject {

	vector<void *, std::__1::allocator<void *> >* pointers_to_free;
	vector<__CVBuffer *, std::__1::allocator<__CVBuffer *> >* pixelbuffers_to_release;
	int _use_cvpixelbuffer;
	NSArray* _outputMatchingBuffers;

}

@property (retain) NSArray * outputMatchingBuffers;              //@synthesize outputMatchingBuffers=_outputMatchingBuffers - In the implementation block
@property (assign,nonatomic) int use_cvpixelbuffer;              //@synthesize use_cvpixelbuffer=_use_cvpixelbuffer - In the implementation block
-(void)dealloc;
-(BOOL)useCVPixelBuffersForOutputs:(BOOL)arg1 ;
-(BOOL)useCVPixelBuffers;
-(int)bindInputsFromFrame:(id)arg1 toNetwork:(SCD_Struct_Es7*)arg2 ;
-(int)bindOutputsFromFrame:(id)arg1 toNetwork:(SCD_Struct_Es7*)arg2 referenceNetwork:(SCD_Struct_Es7*)arg3 ;
-(int)bindOutputsFromFrame:(id)arg1 toNetwork:(SCD_Struct_Es7*)arg2 ;
-(int)bindOutputsFromFrame:(id)arg1 toNetwork:(SCD_Struct_Es7*)arg2 executionStatus:(int)arg3 ;
-(void)freeTemporaryResources;
-(NSArray *)outputMatchingBuffers;
-(void)setOutputMatchingBuffers:(NSArray *)arg1 ;
-(int)use_cvpixelbuffer;
-(void)setUse_cvpixelbuffer:(int)arg1 ;
@end

