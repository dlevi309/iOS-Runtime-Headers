/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPPnPSolver : NSObject {

	float _fu;
	float _fv;
	float _uc;
	float _vc;
	const float* _points2D;
	const float* _points3D;
	int _numPoints;
	float _controlPointsWorld[4][3];
	float _controlPointsCamera[4][3];
	const float* _pointsWorld;
	const float* _pointsImage;
	float* _alphas;
	float* _points3DCamera;
	float _cameraOrientation;
	SCD_Struct_VC41 _pose;

}

@property (assign) SCD_Struct_VC41 pose;              //@synthesize pose=_pose - In the implementation block
-(void)dealloc;
-(SCD_Struct_VC41)pose;
-(void)setPose:(SCD_Struct_VC41)arg1 ;
-(void)computeControlPointsCamera:(const float*)arg1 Vt:(Matrix<float, 0, 0, false>*)arg2 ;
-(void)computePoints3DCamera;
-(int)correctSigns;
-(int)computeRT:(float)arg1 T:(float)arg2 ;
-(float)computeProjectionError:(float)arg1 T:(float)arg2 ;
-(int)configureGaussNewton:(Matrix<float, 0, 0, false>*)arg1 R6x1:(Matrix<float, 0, 0, false>*)arg2 betas:(float)arg3 jacobian:(Matrix<float, 0, 0, false>*)arg4 residual:(Matrix<float, 0, 0, false>*)arg5 ;
-(int)getControlPoints;
-(int)computeBarycentricCoordinates;
-(int)computeSVDVt:(Matrix<float, 0, 0, false>*)arg1 Vt:(Matrix<float, 0, 0, false>*)arg2 ;
-(int)computeL6x10:(Matrix<float, 0, 0, false>*)arg1 L6x10:(Matrix<float, 0, 0, false>*)arg2 ;
-(void)computeR6x1:(Matrix<float, 0, 0, false>*)arg1 ;
-(int)estimateBetasN1:(Matrix<float, 0, 0, false>*)arg1 R6x1:(Matrix<float, 0, 0, false>*)arg2 betas:(float*)arg3 ;
-(int)estimateBetasN2:(Matrix<float, 0, 0, false>*)arg1 R6x1:(Matrix<float, 0, 0, false>*)arg2 betas:(float*)arg3 ;
-(int)estimateBetasN3:(Matrix<float, 0, 0, false>*)arg1 R6x1:(Matrix<float, 0, 0, false>*)arg2 betas:(float*)arg3 ;
-(int)optimizeBetas:(Matrix<float, 0, 0, false>*)arg1 R6x1:(Matrix<float, 0, 0, false>*)arg2 betas:(float)arg3 ;
-(int)estimateRT:(Matrix<float, 0, 0, false>*)arg1 betas:(const float*)arg2 R:(float)arg3 T:(float)arg4 projectionError:(float*)arg5 ;
-(int)estimatePose:(float*)arg1 ;
-(id)initWithFocalLengthInPixels:(float)arg1 principalPoint:(CGPoint)arg2 cameraTowardsPositiveZ:(BOOL)arg3 ;
-(void)updateIntrinsic:(float)arg1 vc:(float)arg2 ;
-(void)updateFocalLengthInPixels:(float)arg1 ;
-(int)estimateExtrinsicsWith:(const float*)arg1 andPoints3D:(const float*)arg2 andNumPoints:(int)arg3 ;
@end

