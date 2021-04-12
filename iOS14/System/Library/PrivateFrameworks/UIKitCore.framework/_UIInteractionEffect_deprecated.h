/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDynamicReferenceSystem.h>

@class UIDynamicAnimator, _UIDynamicTransformer, _UISpringBehavior, UIPushBehavior, UIDynamicItemBehavior, NSString;

@interface _UIInteractionEffect_deprecated : NSObject <_UIDynamicReferenceSystem> {

	UIDynamicAnimator* _animator;
	_UIDynamicTransformer* _transformer;
	_UISpringBehavior* _springBehavior;
	UIPushBehavior* _forceBehavior;
	UIDynamicItemBehavior* _itemProperties;
	double _damping;
	double _frequency;
	double _density;
	double _resistance;
	CGAffineTransform _preferredContentTransform;
	double _progress;
	double _forceFactor;
	/*^block*/id _updateBlock;

}

@property (assign,nonatomic) double forceFactor;                                         //@synthesize forceFactor=_forceFactor - In the implementation block
@property (nonatomic,copy) id updateBlock;                                               //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,readonly) CGAffineTransform preferredContentTransform; 
@property (nonatomic,readonly) double progress; 
@property (nonatomic,readonly) CGRect bounds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)bounds;
-(double)progress;
-(id)init;
-(void)_prepareAnimatorIfNeeded;
-(void)_updateAnimatorIfNeeded;
-(void)_updateFromTransformer:(id)arg1 ;
-(void)setForceFactor:(double)arg1 ;
-(double)forceFactor;
-(void)setUpdateBlock:(id)arg1 ;
-(CGAffineTransform)preferredContentTransform;
-(id)updateBlock;
-(void)_stopAnimations;
@end

