/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)searchBar;
-(void)setTransitionContext:(_UISearchBarTransitionContext *)arg1 ;
-(id)init;
-(_UISearchBarTransitionContext *)transitionContext;
-(id)initWithNewTransitionContextForSearchBar:(id)arg1 ;
-(_UISearchBarLayout *)activeLayout;
-(id)initWithTransitionContext:(id)arg1 forSearchBar:(id)arg2 ;
-(void)complete;
-(void)animate;
-(void)cancel;
-(void)prepare;
@end

