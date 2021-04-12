/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (assign,nonatomic) float simulationFactor;                                           //@synthesize simulationFactor=_simulationFactor - In the implementation block
@property (nonatomic,retain) SCNNode * referenceNode;                                          //@synthesize referenceNode=_referenceNode - In the implementation block
@property (nonatomic,retain) SCNNode * drivingNode;                                            //@synthesize drivingNode=_drivingNode - In the implementation block
@property (nonatomic,retain) SCNMorpher * writeMorpher;                                        //@synthesize writeMorpher=_writeMorpher - In the implementation block
@property (assign,nonatomic) unsigned long long forwardMorphTargetIndex;                       //@synthesize forwardMorphTargetIndex=_forwardMorphTargetIndex - In the implementation block
@property (assign,nonatomic) unsigned long long backwardMorphTargetIndex;                      //@synthesize backwardMorphTargetIndex=_backwardMorphTargetIndex - In the implementation block
@property (assign,nonatomic) unsigned long long leftwardMorphTargetIndex;                      //@synthesize leftwardMorphTargetIndex=_leftwardMorphTargetIndex - In the implementation block
@property (assign,nonatomic) unsigned long long rightwardMorphTargetIndex;                     //@synthesize rightwardMorphTargetIndex=_rightwardMorphTargetIndex - In the implementation block
@property (assign,nonatomic) unsigned long long upwardMorphTargetIndex;                        //@synthesize upwardMorphTargetIndex=_upwardMorphTargetIndex - In the implementation block
@property (assign,nonatomic) unsigned long long downwardMorphTargetIndex;                      //@synthesize downwardMorphTargetIndex=_downwardMorphTargetIndex - In the implementation block
@property (nonatomic,retain) SCNNode * extraSimulationFactorReadMorpherNode;                   //@synthesize extraSimulationFactorReadMorpherNode=_extraSimulationFactorReadMorpherNode - In the implementation block
@property (assign,nonatomic) unsigned long long extraSimulationFactorTargetIndex;              //@synthesize extraSimulationFactorTargetIndex=_extraSimulationFactorTargetIndex - In the implementation block
@property (assign,nonatomic) BOOL mirrored;                                                    //@synthesize mirrored=_mirrored - In the implementation block
-(BOOL)mirrored;
-(void)setMirrored:(BOOL)arg1 ;
-(SCNNode *)referenceNode;
-(void)setReferenceNode:(SCNNode *)arg1 ;
-(float)simulationFactor;
-(void)setSimulationFactor:(float)arg1 ;
-(SCNNode *)drivingNode;
-(void)setDrivingNode:(SCNNode *)arg1 ;
-(SCNMorpher *)writeMorpher;
-(void)setWriteMorpher:(SCNMorpher *)arg1 ;
-(unsigned long long)forwardMorphTargetIndex;
-(void)setForwardMorphTargetIndex:(unsigned long long)arg1 ;
-(unsigned long long)backwardMorphTargetIndex;
-(void)setBackwardMorphTargetIndex:(unsigned long long)arg1 ;
-(unsigned long long)leftwardMorphTargetIndex;
-(void)setLeftwardMorphTargetIndex:(unsigned long long)arg1 ;
-(unsigned long long)rightwardMorphTargetIndex;
-(void)setRightwardMorphTargetIndex:(unsigned long long)arg1 ;
-(unsigned long long)upwardMorphTargetIndex;
-(void)setUpwardMorphTargetIndex:(unsigned long long)arg1 ;
-(unsigned long long)downwardMorphTargetIndex;
-(void)setDownwardMorphTargetIndex:(unsigned long long)arg1 ;
-(SCNNode *)extraSimulationFactorReadMorpherNode;
-(void)setExtraSimulationFactorReadMorpherNode:(SCNNode *)arg1 ;
-(unsigned long long)extraSimulationFactorTargetIndex;
-(void)setExtraSimulationFactorTargetIndex:(unsigned long long)arg1 ;
@end

