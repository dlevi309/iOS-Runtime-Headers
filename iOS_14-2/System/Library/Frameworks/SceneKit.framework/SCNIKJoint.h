/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@class SCNNode;

@interface SCNIKJoint : NSObject {

	SCNNode* joint;
	double maxAllowedRotationAngle;

}

@property (assign,nonatomic) SCNNode * joint; 
@property (assign,nonatomic) double maxAllowedRotationAngle; 
-(SCNNode *)joint;
-(void)setJoint:(SCNNode *)arg1 ;
-(double)maxAllowedRotationAngle;
-(void)setMaxAllowedRotationAngle:(double)arg1 ;
@end

