/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UISearchBarLayout, UIView, _UISearchBarTransitionContext;

@interface _UISearchBarTransitionerBase : NSObject {

	_UISearchBarLayout* _activeLayout;
	UIView* _searchBar;
	_UISearchBarTransitionContext* _transitionContext;

}

@property (nonatomic,__weak,readonly) UIView * searchBar;                                    //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) _UISearchBarTransitionContext * transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,readonly) _UISearchBarLayout * activeLayout;                            //@synthesize activeLayout=_activeLayout - In the implementation block
-(id)init;
-(void)cancel;
-(void)complete;
-(_UISearchBarTransitionContext *)transitionContext;
-(void)animate;
-(void)prepare;
-(UIView *)searchBar;
-(_UISearchBarLayout *)activeLayout;
-(id)initWithTransitionContext:(id)arg1 forSearchBar:(id)arg2 ;
-(id)initWithNewTransitionContextForSearchBar:(id)arg1 ;
-(void)setTransitionContext:(_UISearchBarTransitionContext *)arg1 ;
@end

