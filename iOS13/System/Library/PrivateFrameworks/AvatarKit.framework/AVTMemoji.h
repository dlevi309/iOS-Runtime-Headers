/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <AvatarKit/AVTAvatar.h>

@class UIColor, SCNNode, SCNMaterial, NSDictionary, AVTComponent, NSString, AVTPreset, AVTColorPreset, AVTCompositor, AVTComponentInstance;

@interface AVTMemoji : AVTAvatar {

	UIColor* _backgroundColor;
	BOOL _needsUpdate;
	SCNNode* _componentContainer;
	long long _componentDirtyMask;
	SCNNode* _eyelashes;
	SCNNode* _eyesAndMouth;
	SCNMaterial* _eyeMaterial;
	NSDictionary* _eyesAndMouthSpecializationSettings;
	AVTComponent* _components[28];
	NSString* _faceMorphVariants[7];
	AVTPreset* _presets[32];
	AVTPreset* _resolvedPresets[32];
	BOOL _hasPresetDependency[32];
	AVTColorPreset* _colorPresets[32][3];
	CGImageRef _combinedAOImage;
	BOOL _aoValid;
	AVTCompositor* _compositor;
	BOOL _hairPhysicsShouldIgnoreUpperNodes;
	NSString* _currentHatVariant;
	SCNNode* _skeletonRootNode;
	AVTComponentInstance* _componentInstances[28];
	NSDictionary* _specializationSettings;

}
+(BOOL)supportsSecureCoding;
+(unsigned char)classIdentifier;
+(id)memoji;
+(id)neutralMemojiDataRepresentation;
+(double)skinTextureSize;
+(id)memojiWithData:(id)arg1 error:(id*)arg2 ;
+(float)rndRange:(float)arg1 :(float)arg2 ;
+(unsigned long long)rndIndex:(unsigned long long)arg1 ;
+(id)neutralMemoji;
+(id)memojiWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(float)rnd;
+(id)rndColor;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(void)_update;
-(id)components;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(void)commonInit;
-(void)update;
-(id)backgroundColor;
-(void)setBackgroundColor:(id)arg1 ;
-(void)addComponent:(id)arg1 ;
-(id)colorPresetForCategory:(long long)arg1 ;
-(id)presetForCategory:(long long)arg1 ;
-(void)resetToDefault;
-(id)skinColor;
-(id)colorPresetForCategory:(long long)arg1 colorIndex:(unsigned long long)arg2 ;
-(void)setPreset:(id)arg1 forCategory:(long long)arg2 ;
-(void)setColorPreset:(id)arg1 forCategory:(long long)arg2 colorIndex:(unsigned long long)arg3 ;
-(void)removeAllComponents;
-(void)_removeComponent:(id)arg1 ;
-(id)componentInstances:(long long)arg1 ;
-(id)specializationSettings;
-(void)_encode:(id)arg1 ;
-(id)stickerPhysicsStateIdentifier;
-(BOOL)_decode:(id)arg1 error:(id*)arg2 ;
-(id)morphVariantForFacialFeature:(long long)arg1 ;
-(void)updateNodeHierarchyMorphVariantWithType:(long long)arg1 variant:(id)arg2 node:(id)arg3 ;
-(id)secondaryColorPresetForCategory:(long long)arg1 ;
-(void)componentMaterialDidUpdate:(id)arg1 ;
-(float)arScale;
-(1)arOffset;
-(BOOL)usesSkinningForEyeOrientation;
-(void)morphTo:(id)arg1 ;
-(void)setColorPreset:(id)arg1 forCategory:(long long)arg2 ;
-(void)rebuildSpecializationSettings;
-(id)componentWithType:(long long)arg1 ;
-(void)removeComponentWithType:(long long)arg1 ;
-(void)setMorphVariant:(id)arg1 forFacialFeature:(long long)arg2 ;
-(void)__decode:(id)arg1 isResettingToDefault:(BOOL)arg2 ;
-(void)setSecondaryColorPreset:(id)arg1 forCategory:(long long)arg2 ;
-(void)updateHeadMorphVariantWithType:(long long)arg1 variant:(id)arg2 ;
-(void)_applyColorPreset:(long long)arg1 ;
-(void)_applySecondaryColorPreset:(long long)arg1 colorIndex:(unsigned long long)arg2 ;
-(void)componentDidChange:(id)arg1 ;
-(void)removeComponent:(id)arg1 ;
-(void)morphVariantForComponentType:(long long)arg1 facialFeature:(long long)arg2 didChangeWithVariantName:(id)arg3 ;
-(void)_applyAllColorPresets:(long long)arg1 ;
-(void)applyVariantDependencies;
-(void)_updateAO;
-(id)facialhairColor;
-(id)hairColor;
-(id)lipsColor;
-(id)eyebrowsColor;
-(CGImageRef)createSkinAO;
-(void)removeComponentAssetNodeFromParentNode:(id)arg1 ;
-(void)_invalidateAOImage;
-(void)_setWeight:(float)arg1 forDependencyVariant:(id)arg2 ofType:(long long)arg3 ;
-(void)setInstance:(id)arg1 forComponentType:(long long)arg2 ;
-(void)addComponentAssetNode:(id)arg1 toNode:(id)arg2 ;
-(void)updateEyeLashes;
-(void)updateSkinMaterial:(id)arg1 ;
-(void)updateHeadMorphVariant;
-(void)updateHighlightsForComponentType:(long long)arg1 ;
-(void)randomize;
@end

