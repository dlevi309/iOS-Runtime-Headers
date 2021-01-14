/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/


#import <CVNLP/CVNLP-Structs.h>
@class CVNLPCaptionPerformance, CVNLPCaptionRuntimeParameters;

@interface CVNLPCaptionModelBase : NSObject {

	CVNLPCaptionPerformance* _perfResults;
	CVNLPCaptionRuntimeParameters* _runTimeParams;

}

@property (nonatomic,readonly) CVNLPCaptionPerformance * perfResults;                      //@synthesize perfResults=_perfResults - In the implementation block
@property (nonatomic,readonly) CVNLPCaptionRuntimeParameters * runTimeParams;              //@synthesize runTimeParams=_runTimeParams - In the implementation block
-(id)initWithOptions:(id)arg1 runTimeParams:(id)arg2 ;
-(void)_copy_data_from_blob:(SCD_Struct_CV2*)arg1 to:(vector<float, std::__1::allocator<float> >*)arg2 ;
-(unsigned long long)_blob_size:(SCD_Struct_CV2*)arg1 ;
-(CVNLPCaptionPerformance *)perfResults;
-(void)_copy_data_from_blob:(SCD_Struct_CV2*)arg1 toPtr:(float*)arg2 ;
-(void)_copy_data_to_blob:(float*)arg1 to:(SCD_Struct_CV2*)arg2 ;
-(void)_copy_data_to_blob_repeated:(id)arg1 to:(SCD_Struct_CV2*)arg2 ;
-(id)performanceResults;
-(CVNLPCaptionRuntimeParameters *)runTimeParams;
@end

