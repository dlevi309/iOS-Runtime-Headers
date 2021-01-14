/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNProgram, NSDictionary, NSArray, NSMutableArray;

@interface SCNShadableHelper : NSObject <NSSecureCoding> {

	id _owner;
	SCNProgram* _program;
	NSDictionary* _shaderModifiers;
	NSArray* _c3dShaderModifierCache;
	NSMutableArray* _argumentsNames;
	NSDictionary* _symbolToBinder;
	NSDictionary* _symbolToUnbinder;

}

@property (nonatomic,copy) NSDictionary * shaderModifiers; 
@property (nonatomic,retain) SCNProgram * program; 
@property (nonatomic,readonly) id owner; 
@property (nonatomic,readonly) NSArray * shaderModifiersArgumentsNames; 
+(BOOL)supportsSecureCoding;
-(BOOL)isOpaque;
-(id)owner;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setProgram:(SCNProgram *)arg1 ;
-(void)_commonInit;
-(id)initWithOwner:(id)arg1 ;
-(SCNProgram *)program;
-(void)dealloc;
-(NSDictionary *)shaderModifiers;
-(void)setShaderModifiers:(NSDictionary *)arg1 ;
-(C3DFXTechniqueRef)_technique;
-(const void*)__CFObject;
-(void)handleBindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)ownerWillDie;
-(void)copyModifiersFrom:(id)arg1 ;
-(NSArray *)shaderModifiersArgumentsNames;
-(void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_stopObservingProgram;
-(void)_programDidChange:(id)arg1 ;
-(void)_setC3DProgram;
-(void)_startObservingProgram;
-(void)_parseAndSetShaderModifier:(id)arg1 ;
-(void)_updateC3DProgramInputForSymbol:(id)arg1 ;
-(C3DFXGLSLProgramRef)_programFromPassAtIndex:(long long)arg1 ;
-(void)_updateC3DProgramInput:(C3DFXGLSLProgramRef)arg1 forSymbol:(id)arg2 ;
-(void)_updateAllC3DProgramInputs;
-(void)_setC3DProgramDelegate;
-(void)_customEncodingOfSCNShadableHelper:(id)arg1 ;
-(void)_customDecodingOfSCNShadableHelper:(id)arg1 ;
-(void)_didDecodeSCNShadableHelper:(id)arg1 ;
-(BOOL)_bindValueForSymbol:(id)arg1 atLocation:(unsigned)arg2 programID:(unsigned)arg3 node:(id)arg4 renderer:(id)arg5 ;
-(void)_unbindValueForSymbol:(id)arg1 atLocation:(unsigned)arg2 programID:(unsigned)arg3 node:(id)arg4 renderer:(id)arg5 ;
@end

