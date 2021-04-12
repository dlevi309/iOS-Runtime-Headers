/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSURL, NSArray, VCPCNNEspressoContext, NSString;

@interface VCPCNNModelEspresso : NSObject {

	SCD_Struct_VC10* _net;
	void* _plan;
	NSURL* _netFileUrl;
	NSArray* _inputNames;
	NSArray* _outputNames;
	VCPCNNEspressoContext* _context;
	NSString* _resConfig;
	vector<espresso_buffer_t, std::__1::allocator<espresso_buffer_t> >* _inputBlobs;
	vector<espresso_buffer_t, std::__1::allocator<espresso_buffer_t> >* _outputBlobs;
	SCD_Struct_VC13* _inputBlob;
	SCD_Struct_VC13* _outputBlob;

}

@property (assign,nonatomic) vector<espresso_buffer_t inputBlobs;               //@synthesize inputBlobs=_inputBlobs - In the implementation block
@property (assign,nonatomic) vector<espresso_buffer_t outputBlobs;              //@synthesize outputBlobs=_outputBlobs - In the implementation block
@property (assign,nonatomic) SCD_Struct_VC13* inputBlob;                        //@synthesize inputBlob=_inputBlob - In the implementation block
@property (assign,nonatomic) SCD_Struct_VC13* outputBlob;                       //@synthesize outputBlob=_outputBlob - In the implementation block
@property (nonatomic,readonly) NSString * resConfig;                            //@synthesize resConfig=_resConfig - In the implementation block
-(void)dealloc;
-(id)initWithParameters:(id)arg1 inputNames:(id)arg2 outputNames:(id)arg3 ;
-(SCD_Struct_VC13*)outputBlob;
-(int)espressoForward:(float*)arg1 ;
-(int)prepareModelWithConfig:(id)arg1 ;
-(SCD_Struct_VC13*)inputBlob;
-(int)softmax;
-(void)normalization:(float*)arg1 ;
-(int)getPlanPhase;
-(int)prepareModelInput:(float*)arg1 ;
-(int)prepareModelInputs:(vector<float *, std::__1::allocator<float *> >*)arg1 ;
-(int)espressoForwardInputs:(vector<float *, std::__1::allocator<float *> >*)arg1 ;
-(void*)getEspressoContext;
-(vector<espresso_buffer_t)inputBlobs;
-(void)setInputBlobs:(vector<espresso_buffer_t)arg1 ;
-(vector<espresso_buffer_t)outputBlobs;
-(void)setOutputBlobs:(vector<espresso_buffer_t)arg1 ;
-(void)setInputBlob:(SCD_Struct_VC13*)arg1 ;
-(void)setOutputBlob:(SCD_Struct_VC13*)arg1 ;
-(NSString *)resConfig;
@end

