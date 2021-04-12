/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPVideoFacePoseFilter : NSObject {

	Matrix<float, 12, 1, false> _previousState;
	Matrix<float, 12, 12, false> _previousCovar;
	BOOL _previousStateIsValid;

}
-(void)reset;
-(int)rotationToEulerAngles:(float)arg1 angles:(float)arg2 ;
-(int)kalmanFiltering:(float)arg1 T:(float)arg2 ;
-(int)eulerAnglesToRotation:(float)arg1 R:(float)arg2 ;
-(int)filteringPose:(SCD_Struct_VC41*)arg1 ;
@end

