/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/

#import <CVNLP/CVNLP-Structs.h>
#import <CVNLP/CVNLPCaptionModelBase.h>

@interface CVNLPCaptionEncoder : CVNLPCaptionModelBase {

	unsigned long long data_dim[4];

}
-(void)computeCaptionForImage:(vImage_Buffer*)arg1 outputs:(id*)arg2 ;
-(unsigned long long)_blob_size:(SCD_Struct_CV2*)arg1 ;
-(void)computeCaptionForPixelBuffer:(CVBufferRef)arg1 outputs:(id*)arg2 ;
-(void)_fill_blob_data:(SCD_Struct_CV2*)arg1 with:(float)arg2 ;
@end

