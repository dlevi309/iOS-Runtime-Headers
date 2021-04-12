/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


@interface JDCloudColorCalibrationResultOutcome : NSObject {

	float _rotationX;
	float _rotationY;
	float _rotationZ;
	float _stdX;
	float _stdY;
	float _stdZ;

}

@property (nonatomic,readonly) float rotationX;              //@synthesize rotationX=_rotationX - In the implementation block
@property (nonatomic,readonly) float rotationY;              //@synthesize rotationY=_rotationY - In the implementation block
@property (nonatomic,readonly) float rotationZ;              //@synthesize rotationZ=_rotationZ - In the implementation block
@property (nonatomic,readonly) float stdX;                   //@synthesize stdX=_stdX - In the implementation block
@property (nonatomic,readonly) float stdY;                   //@synthesize stdY=_stdY - In the implementation block
@property (nonatomic,readonly) float stdZ;                   //@synthesize stdZ=_stdZ - In the implementation block
-(float)stdX;
-(float)stdY;
-(float)stdZ;
-(id)initWithRotX:(float)arg1 rotY:(float)arg2 rotZ:(float)arg3 stdX:(float)arg4 stdY:(float)arg5 stdZ:(float)arg6 ;
-(void)applyFactorToResults:(float)arg1 ;
-(float)rotationX;
-(float)rotationY;
-(float)rotationZ;
@end

