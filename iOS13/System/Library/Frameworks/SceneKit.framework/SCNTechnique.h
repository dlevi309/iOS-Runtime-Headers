/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/SCNAnimatable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MTLLibrary;
@class NSArray, NSMutableDictionary, SCNOrderedDictionary, NSDictionary, NSString;

@interface SCNTechnique : NSObject <SCNAnimatable, NSCopying, NSSecureCoding> {

	unsigned _isPresentationInstance : 1;
	_C3DFXTechnique* _technique;
	NSMutableDictionary* _valueForSymbol;
	SCNOrderedDictionary* _animations;
	NSMutableDictionary* _bindings;
	id<MTLLibrary> _library;
	NSArray* _passes;

}

@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,retain) id<MTLLibrary> library; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * animationKeys; 
+(BOOL)supportsSecureCoding;
+(id)techniqueWithDictionary:(id)arg1 ;
+(id)techniqueBySequencingTechniques:(id)arg1 ;
+(id)techniqueWithTechniqueRef:(_C3DFXTechnique*)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)scene;
-(void)addAnimation:(id)arg1 ;
-(id)animationForKey:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllAnimations;
-(NSArray *)animationKeys;
-(id<MTLLibrary>)library;
-(void)setLibrary:(id<MTLLibrary>)arg1 ;
-(id)passAtIndex:(unsigned long long)arg1 ;
-(const void*)__CFObject;
-(C3DSceneRef)sceneRef;
-(id)initWithTechniqueRef:(_C3DFXTechnique*)arg1 ;
-(_C3DFXTechnique*)techniqueRef;
-(id)_symbolsAssignedValues;
-(void)setValue:(id)arg1 forSymbolNamed:(id)arg2 ;
-(void)addAnimationPlayer:(id)arg1 forKey:(id)arg2 ;
-(id)_scnAnimationForKey:(id)arg1 ;
-(id)animationPlayerForKey:(id)arg1 ;
-(C3DAnimationManagerRef)animationManager;
-(void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 pausedByNode:(BOOL)arg3 ;
-(void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2 ;
-(id)initPresentationTechniqueWithTechniqueRef:(_C3DFXTechnique*)arg1 ;
-(void)_setupPasses;
-(void)_customEncodingOfSCNTechnique:(id)arg1 ;
-(void)_customDecodingOfSCNTechnique:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(void)setSpeed:(double)arg1 forAnimationKey:(id)arg2 ;
-(BOOL)isAnimationForKeyPaused:(id)arg1 ;
-(void)handleBindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)valueForSymbolNamed:(id)arg1 ;
-(BOOL)__removeAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)_syncObjCAnimations;
-(void)_copyAnimationsFrom:(id)arg1 ;
-(id)_scnBindings;
-(void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4 ;
-(void)unbindAnimatablePath:(id)arg1 ;
-(void)removeAllBindings;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(BOOL)isPausedOrPausedByInheritance;
-(id)presentationInstance;
-(void)_didInstallInEngineContext:(C3DEngineContextRef)arg1 ;
@end

