/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
*/


@class NSArray;

@interface VFX.VFXScene : NSObject {

	 entityManager;

}

@property (assign,nonatomic) BOOL isPlaying; 
@property (assign,nonatomic) BOOL allowsCameraControl; 
@property (readonly,nonatomic) NSArray * bindings; 
+(id)builtinEffectIdentifiers;
+(void)setBuiltinEffectIdentifiers:(id)arg1 ;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(void)restart;
-(BOOL)isPlaying;
-(id)initWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)setIsPlaying:(BOOL)arg1 ;
-(void)dealloc;
-(NSArray *)bindings;
-(void)updateWithDeltaTime:(double)arg1 ;
-(void)setAllowsCameraControl:(BOOL)arg1 ;
-(BOOL)allowsCameraControl;
-(id)initWithContentsOf:(id)arg1 error:(id*)arg2 ;
-(id)bindingOf:(id)arg1 named:(id)arg2 ;
-(id)firstBindingWithName:(id)arg1 ;
-(id)parameterOf:(id)arg1 named:(id)arg2 ;
-(void)setParameterOf:(id)arg1 named:(id)arg2 :(id)arg3 ;
-(void)withPointerToParameterOf:(id)arg1 named:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)setValue:(id)arg1 atPath:(id)arg2 ;
-(id)valueAtPath:(id)arg1 ;
-(void)withPointerToValueAtPath:(id)arg1 block:(/*^block*/id)arg2 ;
@end

