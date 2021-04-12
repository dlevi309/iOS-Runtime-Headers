/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXVNEspressoDetectedObject.h>

@interface AXANFDDetectedObject : AXVNEspressoDetectedObject {

	float _rotationAngle;
	float _yawAngle;
	int _labelKey;

}

@property (assign) float rotationAngle;              //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (assign) float yawAngle;                   //@synthesize yawAngle=_yawAngle - In the implementation block
@property (assign) int labelKey;                     //@synthesize labelKey=_labelKey - In the implementation block
-(float)rotationAngle;
-(void)setRotationAngle:(float)arg1 ;
-(id)initWithObjectType:(long long)arg1 boundingBox:(CGRect)arg2 confidence:(float)arg3 rotationAngle:(float)arg4 yawAngle:(float)arg5 labelKey:(int)arg6 ;
-(void)setLabelKey:(int)arg1 ;
-(float)yawAngle;
-(int)labelKey;
-(void)setYawAngle:(float)arg1 ;
@end

