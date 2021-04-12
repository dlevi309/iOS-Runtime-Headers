/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class SCNNode;

@interface AVTPhysicalizedSkeletonDescriptor : NSObject {

	float _simulationFactor;
	SCNNode* _referenceNode;
	SCNNode* _drivingNode;
	SCNNode* _rootJoint;
	 _upDownRotation;
	 _leftRightRotation;
	 _forwardBackRotation;

}

@property (assign,nonatomic) float simulationFactor;               //@synthesize simulationFactor=_simulationFactor - In the implementation block
@property (nonatomic,retain) SCNNode * referenceNode;              //@synthesize referenceNode=_referenceNode - In the implementation block
@property (nonatomic,retain) SCNNode * drivingNode;                //@synthesize drivingNode=_drivingNode - In the implementation block
@property (nonatomic,retain) SCNNode * rootJoint;                  //@synthesize rootJoint=_rootJoint - In the implementation block
@property (assign,nonatomic)  upDownRotation;                      //@synthesize upDownRotation=_upDownRotation - In the implementation block
@property (assign,nonatomic)  leftRightRotation;                   //@synthesize leftRightRotation=_leftRightRotation - In the implementation block
@property (assign,nonatomic)  forwardBackRotation;                 //@synthesize forwardBackRotation=_forwardBackRotation - In the implementation block
-(SCNNode *)referenceNode;
-(void)setReferenceNode:(SCNNode *)arg1 ;
-(float)simulationFactor;
-(void)setSimulationFactor:(float)arg1 ;
-(SCNNode *)drivingNode;
-(void)setDrivingNode:(SCNNode *)arg1 ;
-(SCNNode *)rootJoint;
-(void)setRootJoint:(SCNNode *)arg1 ;
-()upDownRotation;
-(void)setUpDownRotation:;
-()leftRightRotation;
-(void)setLeftRightRotation:;
-()forwardBackRotation;
-(void)setForwardBackRotation:;
@end

