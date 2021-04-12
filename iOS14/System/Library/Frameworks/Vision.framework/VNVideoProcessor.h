/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@class VCPVideoProcessor;

@interface VNVideoProcessor : NSObject {

	VCPVideoProcessor* _videoProcessor;

}
-(BOOL)addRequest:(id)arg1 processingOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)addRequest:(id)arg1 withProcessingOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)analyzeWithTimeRange:(SCD_Struct_VN37)arg1 error:(id*)arg2 ;
-(BOOL)analyzeTimeRange:(SCD_Struct_VN37)arg1 error:(id*)arg2 ;
-(id)initWithURL:(id)arg1 ;
-(BOOL)removeRequest:(id)arg1 error:(id*)arg2 ;
-(void)cancel;
@end

