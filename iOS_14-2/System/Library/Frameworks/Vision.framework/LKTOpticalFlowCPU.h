/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/LKTOpticalFlow.h>

@interface LKTOpticalFlowCPU : LKTOpticalFlow {

	unique_ptr<apple::vision::OpticalFlow::LKTCPU, std::__1::default_delete<apple::vision::OpticalFlow::LKTCPU> >* _opticalFlow;
	CVBufferRef _uv_user_ref;

}
-(id)initWithWidth:(int)arg1 height:(int)arg2 numScales:(int)arg3 ;
-(BOOL)setOutputUV:(CVBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)estimateFlowFromReference:(CVBufferRef)arg1 target:(CVBufferRef)arg2 error:(id*)arg3 ;
-(BOOL)estimateFlowStream:(CVBufferRef)arg1 error:(id*)arg2 ;
@end

