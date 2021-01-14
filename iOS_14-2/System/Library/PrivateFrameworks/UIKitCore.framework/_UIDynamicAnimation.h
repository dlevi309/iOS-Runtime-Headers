/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIDynamicAnimation : NSObject {

	/*^block*/id _completion;
	int _state;
	unsigned _began : 1;
	unsigned _running : 1;
	unsigned _completing : 1;
	unsigned _yield : 1;
	unsigned _grouped : 1;
	unsigned _usesNSTimer : 1;

}

@property (nonatomic,readonly) int state; 
+(id)dynamicAnimationForView:(id)arg1 withInitialValue:(double)arg2 velocity:(double)arg3 type:(int)arg4 anchorPoint:(CGPoint)arg5 ;
+(void)_updateAnimationsWithTimer:(id)arg1 ;
+(void)_updateAnimations:(id)arg1 timer:(id)arg2 ;
+(void)_updateAnimations:(id)arg1 ;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 ;
-(BOOL)_isRunning;
-(id)init;
-(void)_callAppliers:(/*^block*/id)arg1 additionalEndAppliers:(/*^block*/id)arg2 done:(BOOL)arg3 ;
-(void)runWithCompletion:(/*^block*/id)arg1 forScreen:(id)arg2 runLoopMode:(id)arg3 ;
-(void)stop;
-(BOOL)_isGrouped;
-(id)description;
-(void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2 ;
-(BOOL)_usesNSTimer;
-(BOOL)_shouldYield;
-(void)_setGrouped:(BOOL)arg1 ;
-(int)state;
-(void)_setShouldYield:(BOOL)arg1 ;
-(void)_setUsesNSTimer:(BOOL)arg1 ;
-(void)_stopAnimation;
-(BOOL)_animateForInterval:(double)arg1 ;
-(void)_cancelWithAppliers:(/*^block*/id)arg1 ;
-(void)_completeWithFinished:(BOOL)arg1 ;
-(void)runWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

