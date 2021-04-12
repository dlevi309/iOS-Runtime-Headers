/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNAuthoringEnvironment, NSOrderedSet, SCNNode, NSMutableIndexSet, SCNBillboardConstraint;

@interface SCNManipulator : NSObject {

	SCNAuthoringEnvironment* _authoringEnvironment;
	NSOrderedSet* _targets;
	SCNNode* _node;
	C3DMatrix4x4 _xAxisToZAxisTransform;
	C3DMatrix4x4 _yAxisToZAxisTransform;
	C3DMatrix4x4 _xyPlaneToYZPlaneTransform;
	C3DMatrix4x4 _xyPlaneToXZPlaneTransform;
	unsigned short _selectedAxis;
	SCD_Union_SC17 _actionData;
	BOOL _isMouseDown;
	BOOL _readonly;
	unsigned short _action;
	CGPoint _originalMouseLocation;
	SCD_Struct_SC19* _originalData;
	unsigned _originalDataCount;
	C3DMatrix4x4 _worldInitialMatrix;
	C3DMatrix4x4 _worldMatrix;
	long long _snapToAlignCount;
	SCD_Struct_SC20* _snapToAlignOnX;
	SCD_Struct_SC20* _snapToAlignOnY;
	SCD_Struct_SC20* _snapToAlignOnZ;
	NSMutableIndexSet* _snapXIndexes;
	NSMutableIndexSet* _snapYIndexes;
	NSMutableIndexSet* _snapZIndexes;
	long long _xAlignment;
	long long _yAlignment;
	long long _zAlignment;
	SCNNode* _planarTranslationHandleXY;
	SCNNode* _planarTranslationHandleYZ;
	SCNNode* _planarTranslationHandleXZ;
	SCNNode* _planarTranslationHandles;
	SCNNode* _axis;
	SCNNode* _arcHandleXY;
	SCNNode* _arcHandleYZ;
	SCNNode* _arcHandleXZ;
	SCNNode* _arcHandles;
	SCNNode* _scaleNode;
	SCNNode* _screenSpaceRotation;
	SCNNode* _highlightNode;
	 _planarTranslationLayout;
	BOOL _layoutLocked;
	SCNNode* _zArrow;
	SCNNode* _rotationHandles;
	SCNNode* _occluder;
	SCNNode* _translateHandles;
	SCNBillboardConstraint* _billboard;
	NSOrderedSet* _cloneSet;
	BOOL _cloning;
	unsigned long long _features;
	BOOL _alternateMode;

}

@property (readonly) SCNAuthoringEnvironment * authoringEnvironment; 
@property (readonly) SCNMatrix4 transform; 
@property (readonly) SCNNode * manipulatorNode; 
@property (nonatomic,retain) NSOrderedSet * targets; 
@property (nonatomic,retain) SCNNode * target; 
@property (assign,nonatomic) long long xAlignment;                                //@synthesize xAlignment=_xAlignment - In the implementation block
@property (assign,nonatomic) long long yAlignment;                                //@synthesize yAlignment=_yAlignment - In the implementation block
@property (assign,nonatomic) long long zAlignment;                                //@synthesize zAlignment=_zAlignment - In the implementation block
@property (assign,nonatomic) BOOL readonly;                                       //@synthesize readonly=_readonly - In the implementation block
@property (assign,nonatomic) unsigned long long features; 
-(BOOL)mouseUp:(SCD_Struct_SC21)arg1 ;
-(BOOL)readonly;
-(void)setTarget:(SCNNode *)arg1 ;
-(id)scene;
-(void)setTargets:(NSOrderedSet *)arg1 ;
-(void)setReadonly:(BOOL)arg1 ;
-(id)init;
-(unsigned long long)features;
-(BOOL)mouseDown:(SCD_Struct_SC21)arg1 ;
-(void)setFeatures:(unsigned long long)arg1 ;
-(SCNMatrix4)transform;
-(BOOL)mouseMoved:(SCD_Struct_SC21)arg1 ;
-(id)hitTest:(SCD_Struct_SC21)arg1 ;
-(id)copy;
-(long long)xAlignment;
-(void)setXAlignment:(long long)arg1 ;
-(long long)yAlignment;
-(void)setYAlignment:(long long)arg1 ;
-(BOOL)isDragging;
-(NSOrderedSet *)targets;
-(SCNNode *)target;
-(void)dealloc;
-(SCNAuthoringEnvironment *)authoringEnvironment;
-(void)updateManipulatorNode;
-(void)_deleteOriginalData;
-(void)setupNode;
-(void)updateManipulatorComponents;
-(long long)effectiveEditingSpace;
-(SCNNode *)manipulatorNode;
-(unsigned long long)_effectiveFeatures;
-(void)unhighlightSelectedNode;
-(void)_updateActionWithEvent:(SCD_Struct_SC21)arg1 ;
-(1)_snapPositionToAlign:(SCNVector3)arg1 original:(double)arg2 unit:(BOOL)arg3 axisMove:(BOOL*)arg4 rayStart:(long long*)arg5 ;
-(void)updateItemsPosition;
-(void)updateItemsRotation:;
-(void)updateItemsScale:(float)arg1 ;
-(void)_updateCloneStateWithEvent:(SCD_Struct_SC21)arg1 ;
-(BOOL)_applyWithEvent:(SCD_Struct_SC21)arg1 ;
-(void)_saveOriginalData;
-(void)clearSnapIndexes;
-(void)validateClones;
-(void)_prepareSnapToAlignData:(unsigned short)arg1 ;
-(void)prepareSnapToAlignData;
-(void)prepareSnapToAlignDataIfNeeded;
-(void)_setAuthoringEnvironment:(id)arg1 ;
-(void)updateManipulatorPosition:(C3DEngineContextRef)arg1 ;
-(void)editingSpaceChanged;
-(void)setAlternateMode:(BOOL)arg1 ;
-(void)lockLayout;
-(void)unlockLayout;
-(BOOL)mouseDragged:(SCD_Struct_SC21)arg1 ;
-(void)removeClonesFromScene;
-(void)addClonesToScene;
-(id)setupClones;
-(id)snapGuideIndexesOnAxis:(unsigned long long)arg1 ;
-(const SCD_Struct_SC20*)snapInfoAtIndex:(unsigned long long)arg1 axis:(unsigned long long)arg2 ;
-(long long)zAlignment;
-(void)setZAlignment:(long long)arg1 ;
@end

