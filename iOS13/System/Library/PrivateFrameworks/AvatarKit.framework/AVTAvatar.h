/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <libobjc.A.dylib/AVTPhysicsControllerDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCNNode, SCNPhysicsWorld, AVTPhysicsController, NSMutableArray, AVTPupilReflectionCorrectionDescriptor, AVTEyeSkinningDescriptor, NSMutableDictionary, CAAnimation, SCNAnimationPlayer, NSString;

@interface AVTAvatar : NSObject <AVTPhysicsControllerDelegate, NSCopying> {

	SCNNode* _avatarNode;
	SCNNode* _skeleton;
	SCNNode* _headNode;
	SCNNode* _leftEye;
	SCNNode* _rightEye;
	SCNNode* _neckNode;
	SCNNode* _neckPivotNode;
	SCD_Struct_AV13* _morphInfoFromARKitBlendShapeIndex;
	SCD_Struct_AV13* _friendlyPoseMorphInfos;
	unsigned long long _friendlyPoseMorphInfoCount;
	int _transitionCount;
	BOOL _arMode;
	BOOL _optimizedForSnapshot;
	SCNPhysicsWorld* _physicsWorld;
	AVTPhysicsController* _physicsController;
	NSMutableArray* _clipsPlaying;
	SCNVector3 _lookAt;
	NSMutableArray* _correctiveMorpherDescriptors;
	NSMutableArray* _physicalizedMorpherDescriptors;
	NSMutableArray* _physicalizedSkeletonDescriptors;
	NSMutableArray* _morpherDrivenMaterialDescriptors;
	AVTPupilReflectionCorrectionDescriptor* _pupilReflectionCorrectionDescriptor;
	AVTEyeSkinningDescriptor* _eyeSkinningDescriptor;
	NSMutableDictionary* _morpherWeightRemappingDescriptors;
	NSMutableDictionary* _morpherWeightThresholdDescriptors;
	NSMutableDictionary* _morpherWeightThresholdStates;
	 _arOffset;
	float _arScale;
	double _physicsScaleFactor;
	double _lastRenderTime;
	CAAnimation* _bakedAnimation;
	SCNAnimationPlayer* _bakedAnimationPlayer_lazy;

}

@property (readonly) SCNNode * avatarNode; 
@property (readonly) SCNNode * headNode; 
@property (readonly) SCNNode * neckNode; 
@property (assign,nonatomic) BOOL arMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned char)classIdentifier;
+(id)avatarWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
+(void)preloadAvatar:(id)arg1 ;
+(BOOL)canLoadDataRepresentation:(id)arg1 ;
+(SCNVector4)applyGazeCorrectionWithInputAngle:translation:;
+(BOOL)canLoadDataRepresentationWithVersion:(unsigned short)arg1 minimumCompatibleVersion:(unsigned short)arg2 error:(id*)arg3 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dataRepresentation;
-(id)pose;
-(void)update;
-(BOOL)isTransitioning;
-(id)snapshotWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 ;
-(void)transitionFromPose:(id)arg1 toPose:(id)arg2 duration:(double)arg3 delay:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setPose:(id)arg1 ;
-(void)stopTransitionAnimation;
-(void)lookAt:(SCNVector3)arg1 ;
-(void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2 ;
-(void)setPhysicsScaleFactor:(double)arg1 ;
-(void)animatePhysicsScaleFactor:(double)arg1 duration:(double)arg2 ;
-(id)physicsWorldForPhysicsController:(id)arg1 ;
-(id)avatarNodeForPhysicsController:(id)arg1 ;
-(double)physicsController:(id)arg1 downforceForNodeNamed:(id)arg2 ;
-(void)setupPhysicsIfNeeded;
-(id)physicsState;
-(void)resetToPhysicsState:(id)arg1 ;
-(SCNNode *)avatarNode;
-(void)willRemoveFromScene:(id)arg1 ;
-(void)setOptimizeForSnapshot:(BOOL)arg1 ;
-(void)pauseBakedAnimation;
-(void)didAddToScene:(id)arg1 ;
-(void)updateAfterAnimationsEvaluatedAtTime:(double)arg1 renderer:(id)arg2 ;
-(void)_encode:(id)arg1 ;
-(long long)blendShapeIndexForBlendShapeName:(id)arg1 ;
-(SCD_Struct_AV13)morphInfoForARKitBlendShapeIndex:(unsigned long long)arg1 ;
-(id)stickerPhysicsStateIdentifier;
-(void)setAvatarNode:(SCNNode *)arg1 ;
-(void)updateBindings;
-(void)resetCustomBehaviours;
-(id)arTechniqueName;
-(id)lightingNode;
-(id)cameraNode;
-(BOOL)_decode:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasCustomARTechnique;
-(SCNNode *)neckNode;
-(void)avatarCommonInit;
-(void)setHeadNode:(SCNNode *)arg1 ;
-(float)arScale;
-(1)arOffset;
-(void)setupFaceTracking;
-(void)setupMorphInfo;
-(void)setupEyeOrientationAndReflections;
-(void)resetARModeBehaviours;
-(void)_updateShaderModifier:(id)arg1 forARMode:(BOOL)arg2 withOnTopMask:(BOOL)arg3 ;
-(void)lookAt:(SCNVector3)arg1 withDuration:(double)arg2 ;
-(SCNNode *)headNode;
-(void)updateBindingsOfNode:(id)arg1 ;
-(id)effectiveMorphedNodeForTargetName:(id)arg1 candidateNode:(id)arg2 ;
-(void)resetMorphingSkinningControllers;
-(void)setupMorphInfoForChangeInSubHierarchy;
-(void)addMorphingSkinningControllersInHierarchy:(id)arg1 ;
-(void)removeMorphingSkinningControllersInHierarchy:(id)arg1 ;
-(void)resetPhysicalizedDescriptors;
-(void)resetCorrectiveDescriptors;
-(void)resetMorpherDrivenMaterials;
-(void)resetMorpherWeightRemappings;
-(void)resetMorpherWeightThresholdings;
-(void)addPhysicalizedDescriptorsInHierarchy:(id)arg1 ignoreUpperNodes:(BOOL)arg2 ;
-(void)addCorrectiveDescriptorsInHierarchy:(id)arg1 ;
-(void)addMorpherDrivenMaterialsInHierarchy:(id)arg1 ;
-(void)addMorpherWeightRemappings;
-(void)addMorpherWeightThresholdings;
-(void)removePhysicalizedDescriptorsInHierarchy:(id)arg1 ;
-(void)removeCorrectiveDescriptorsInHierarchy:(id)arg1 ;
-(void)removeMorpherDrivenMaterialsInHierarchy:(id)arg1 ;
-(BOOL)optimizeForSnapshot;
-(id)descriptorsByRemovingDescriptors:(id)arg1 inHierarchy:(id)arg2 passingTest:(/*^block*/id)arg3 ;
-(BOOL)usesSkinningForEyeOrientation;
-(void)evaluatePhysicalizedDescriptors;
-(void)applyCorrectiveDescriptors;
-(void)updateEyeOrientationAndReflections;
-(void)updateMorpherDrivenMaterialsWithDeltaTime:(double)arg1 ;
-(float)applyWeightRemapForLocation:(id)arg1 weight:(float)arg2 ;
-(void)applyWeightWithThresholdingForLocation:(id)arg1 weight:(float)arg2 morphInfo:(SCD_Struct_AV13)arg3 ;
-(void)applyHeadPoseWithTrackingInfo:(id)arg1 gazeCorrection:(BOOL)arg2 pointOfView:(id)arg3 ;
-(id)blendShapeNameForBlendShapeIndex:(unsigned long long)arg1 ;
-(id)bakedAnimationPlayer;
-(double)physicsDownforceForNodeNamed:(id)arg1 ;
-(void)physicsSpecializationSettingsDidChange;
-(void)setBakedAnimationReferenceTime:(double)arg1 ;
-(void)resumeBakedAnimation;
-(id)bakedAnimationCopy;
-(BOOL)arMode;
-(void)setArMode:(BOOL)arg1 ;
-(void)rotateHead:(double)arg1 ;
-(SCNVector3)currentLookAt;
-(void)addCustomBehavioursInHierarchy:(id)arg1 ;
-(void)removeCustomBehavioursInHierarchy:(id)arg1 ;
-(void)resetThresholdingStates;
-(float)thresholdedWeightAtLocation:(id)arg1 sourceWeight:(float)arg2 time:(double)arg3 ;
-(void)applyBlendShapesWithTrackingInfo:(id)arg1 ;
-(void)applyHeadPoseWithTrackingInfo:(id)arg1 ;
-(void)applyHeadPoseWithTrackingInfo:(id)arg1 gazeCorrection:(BOOL)arg2 ;
-(void)_resetFaceToRandomPosition;
-(id)debugPoseJSONRepresentation;
@end

