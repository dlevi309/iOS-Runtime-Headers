/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)use_cvpixelbuffer;
-(BOOL)useCVPixelBuffersForOutputs:(BOOL)arg1 ;
-(BOOL)useCVPixelBuffers;
-(int)bindInput:(id)arg1 fromImageAttachment:(id)arg2 toNetwork:(SCD_Struct_Es7*)arg3 ;
-(int)bindInput:(id)arg1 fromTensorAttachment:(id)arg2 toNetwork:(SCD_Struct_Es7*)arg3 ;
-(void)setOutputMatchingBuffers:(NSArray *)arg1 ;
-(NSArray *)outputMatchingBuffers;
-(int)bindOutputsFromFrame:(id)arg1 toNetwork:(SCD_Struct_Es7*)arg2 executionStatus:(int)arg3 ;
-(void)freeTemporaryResources;
-(int)bindInputsFromFrame:(id)arg1 toNetwork:(SCD_Struct_Es7*)arg2 ;
-(int)bindOutputsFromFrame:(id)arg1 toNetwork:(SCD_Struct_Es7*)arg2 referenceNetwork:(SCD_Struct_Es7*)arg3 ;
-(int)bindOutputsFromFrame:(id)arg1 toNetwork:(SCD_Struct_Es7*)arg2 ;
-(void)setUse_cvpixelbuffer:(int)arg1 ;
-(void)dealloc;
@end

