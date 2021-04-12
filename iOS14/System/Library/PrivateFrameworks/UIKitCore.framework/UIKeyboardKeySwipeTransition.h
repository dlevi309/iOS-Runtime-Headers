/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardKeyplaneTransition.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSArray, NSString;

@interface UIKeyboardKeySwipeTransition : UIKeyboardKeyplaneTransition <CAAnimationDelegate> {

	BOOL _disableMeshOptimization;
	NSArray* _startKeysOrdered;
	NSArray* _endKeysOrdered;
	NSArray* _startGeometries;
	NSArray* _transitionKeys;
	NSArray* _keyInfos;
	double _previousProgress;

}

@property (nonatomic,retain) NSArray * startKeysOrdered;                //@synthesize startKeysOrdered=_startKeysOrdered - In the implementation block
@property (nonatomic,retain) NSArray * endKeysOrdered;                  //@synthesize endKeysOrdered=_endKeysOrdered - In the implementation block
@property (nonatomic,retain) NSArray * startGeometries;                 //@synthesize startGeometries=_startGeometries - In the implementation block
@property (nonatomic,retain) NSArray * transitionKeys;                  //@synthesize transitionKeys=_transitionKeys - In the implementation block
@property (nonatomic,retain) NSArray * keyInfos;                        //@synthesize keyInfos=_keyInfos - In the implementation block
@property (assign,nonatomic) double previousProgress;                   //@synthesize previousProgress=_previousProgress - In the implementation block
@property (assign,nonatomic) BOOL disableMeshOptimization;              //@synthesize disableMeshOptimization=_disableMeshOptimization - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeAllAnimations;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(NSArray *)keyInfos;
-(void)commitTransitionRebuild;
-(void)setStartGeometries:(NSArray *)arg1 ;
-(void)setStartKeysOrdered:(NSArray *)arg1 ;
-(void)setEndKeysOrdered:(NSArray *)arg1 ;
-(void)gatherTransitionKeys;
-(void)setPreviousProgress:(double)arg1 ;
-(void)_runTransformAnimation;
-(void)_runOpacityAnimation;
-(NSArray *)startKeysOrdered;
-(id)meshTransformForKeyplane:(id)arg1 forward:(BOOL)arg2 initial:(BOOL)arg3 ;
-(double)nonInteractiveDuration;
-(NSArray *)endKeysOrdered;
-(void)setTransitionKeys:(NSArray *)arg1 ;
-(NSArray *)transitionKeys;
-(NSArray *)startGeometries;
-(CGRect)keyRectForFrame:(CGRect)arg1 normalizedSubRect:(CGRect)arg2 ;
-(BOOL)disableMeshOptimization;
-(void)runNonInteractivelyWithCompletion:(/*^block*/id)arg1 ;
-(double)previousProgress;
-(void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4 ;
-(void)setKeyInfos:(NSArray *)arg1 ;
-(void)setDisableMeshOptimization:(BOOL)arg1 ;
-(void)updateWithProgress:(double)arg1 ;
-(void)dealloc;
@end

