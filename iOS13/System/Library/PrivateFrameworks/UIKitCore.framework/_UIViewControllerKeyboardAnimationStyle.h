/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInputViewAnimationStyleDirectional.h>

@class _UIViewControllerTransitionContext, _UIViewControllerKeyboardAnimationStyleInfo;

@interface _UIViewControllerKeyboardAnimationStyle : UIInputViewAnimationStyleDirectional {

	BOOL _disableAlongsideView;
	BOOL _allowCustomTransition;
	_UIViewControllerTransitionContext* _context;
	_UIViewControllerKeyboardAnimationStyleInfo* _info;

}

@property (nonatomic,readonly) _UIViewControllerKeyboardAnimationStyleInfo * info;              //@synthesize info=_info - In the implementation block
@property (assign,nonatomic) BOOL allowCustomTransition;                                        //@synthesize allowCustomTransition=_allowCustomTransition - In the implementation block
@property (nonatomic,retain) _UIViewControllerTransitionContext * context;                      //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL disableAlongsideView;                                         //@synthesize disableAlongsideView=_disableAlongsideView - In the implementation block
+(id)animationStyleWithContext:(id)arg1 useCustomTransition:(BOOL)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_UIViewControllerTransitionContext *)context;
-(void)setContext:(_UIViewControllerTransitionContext *)arg1 ;
-(_UIViewControllerKeyboardAnimationStyleInfo *)info;
-(id)initWithContext:(id)arg1 ;
-(void)setDisableAlongsideView:(BOOL)arg1 ;
-(void)setAllowCustomTransition:(BOOL)arg1 ;
-(void)_launchAnimation:(/*^block*/id)arg1 afterStarted:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 forHost:(id)arg4 fromCurrentPosition:(BOOL)arg5 ;
-(BOOL)disableAlongsideView;
-(void)launchAnimation:(/*^block*/id)arg1 afterStarted:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 forHost:(id)arg4 fromCurrentPosition:(BOOL)arg5 ;
-(BOOL)allowCustomTransition;
-(id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2 ;
-(BOOL)isAnimationCompleted;
-(BOOL)canDismissWithScrollView;
@end

