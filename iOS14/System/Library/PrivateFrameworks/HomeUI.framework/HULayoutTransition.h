/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class UIView;

@interface HULayoutTransition : NSObject {

	unsigned long long _phase;
	UIView* _view;
	/*^block*/id _setupBlock;
	/*^block*/id _transitionBlock;
	/*^block*/id _completionBlock;
	id _fromState;
	id _toState;

}

@property (nonatomic,copy,readonly) id setupBlock;                   //@synthesize setupBlock=_setupBlock - In the implementation block
@property (nonatomic,copy,readonly) id transitionBlock;              //@synthesize transitionBlock=_transitionBlock - In the implementation block
@property (nonatomic,copy,readonly) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) id fromState;                           //@synthesize fromState=_fromState - In the implementation block
@property (nonatomic,retain) id toState;                             //@synthesize toState=_toState - In the implementation block
@property (assign,nonatomic) unsigned long long phase;               //@synthesize phase=_phase - In the implementation block
@property (nonatomic,readonly) UIView * view;                        //@synthesize view=_view - In the implementation block
-(id)toState;
-(id)completionBlock;
-(void)setFromState:(id)arg1 ;
-(id)init;
-(id)setupBlock;
-(id)fromState;
-(void)setToState:(id)arg1 ;
-(UIView *)view;
-(unsigned long long)phase;
-(void)setPhase:(unsigned long long)arg1 ;
-(id)initWithView:(id)arg1 setupBlock:(/*^block*/id)arg2 transitionBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)transitionBlock;
-(void)setupTransitionWithFromState:(id)arg1 toState:(id)arg2 ;
-(void)executeTransition;
-(void)completeTransition;
@end

