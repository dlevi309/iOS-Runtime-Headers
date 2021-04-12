/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoDetectedObject.h>

@interface ANFDDetectedObject : VNEspressoDetectedObject {

	float _rotationAngle;
	float _yawAngle;
	int _labelKey;

}

@property (assign) float rotationAngle;              //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (assign) float yawAngle;                   //@synthesize yawAngle=_yawAngle - In the implementation block
@property (assign) int labelKey;                     //@synthesize labelKey=_labelKey - In the implementation block
-(float)yawAngle;
-(void)setYawAngle:(float)arg1 ;
-(id)initWithObjectType:(long long)arg1 boundingBox:(CGRect)arg2 confidence:(float)arg3 rotationAngle:(float)arg4 yawAngle:(float)arg5 labelKey:(int)arg6 ;
-(float)rotationAngle;
-(void)setRotationAngle:(float)arg1 ;
-(int)labelKey;
-(void)setLabelKey:(int)arg1 ;
@end

