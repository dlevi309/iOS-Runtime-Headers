/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSSet, PXGLayout;

@interface PXGTransition : NSObject {

	BOOL _invalid;
	BOOL _animatingTowardsInitialState;
	BOOL _animatingTowardsFinalState;
	BOOL _isIntercative;
	float _fractionCompleted;
	NSSet* _animations;
	PXGLayout* _layout;
	/*^block*/id _completionBlock;

}

@property (nonatomic,readonly) PXGLayout * layout;                             //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) BOOL invalid;                                   //@synthesize invalid=_invalid - In the implementation block
@property (nonatomic,readonly) BOOL animatingTowardsInitialState;              //@synthesize animatingTowardsInitialState=_animatingTowardsInitialState - In the implementation block
@property (nonatomic,readonly) BOOL animatingTowardsFinalState;                //@synthesize animatingTowardsFinalState=_animatingTowardsFinalState - In the implementation block
@property (nonatomic,copy,readonly) id completionBlock;                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) BOOL isIntercative;                               //@synthesize isIntercative=_isIntercative - In the implementation block
@property (nonatomic,readonly) NSSet * animations;                             //@synthesize animations=_animations - In the implementation block
@property (assign,nonatomic) float fractionCompleted;                          //@synthesize fractionCompleted=_fractionCompleted - In the implementation block
-(NSSet *)animations;
-(id)completionBlock;
-(BOOL)invalid;
-(void)setFractionCompleted:(float)arg1 ;
-(void)invalidate;
-(float)fractionCompleted;
-(id)initWithAnimations:(id)arg1 layout:(id)arg2 ;
-(void)animateToInitialStateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)animateToFinalStateWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)animatingTowardsInitialState;
-(BOOL)animatingTowardsFinalState;
-(BOOL)isIntercative;
-(void)setIsIntercative:(BOOL)arg1 ;
-(PXGLayout *)layout;
@end
