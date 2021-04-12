/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class SCNNode, SCNMorpher;

@interface AVTPhysicalizedMorpherDescriptor : NSObject {

	BOOL _mirrored;
	float _simulationFactor;
	SCNNode* _referenceNode;
	SCNNode* _drivingNode;
	SCNMorpher* _writeMorpher;
	unsigned long long _forwardMorphTargetIndex;
	unsigned long long _backwardMorphTargetIndex;
	unsigned long long _leftwardMorphTargetIndex;
	unsigned long long _rightwardMorphTargetIndex;
	unsigned long long _upwardMorphTargetIndex;
	unsigned long long _downwardMorphTargetIndex;
	SCNNode* _extraSimulationFactorReadMorpherNode;
	unsigned long long _extraSimulationFactorTargetIndex;

}
@end

