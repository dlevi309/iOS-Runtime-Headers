/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISearchControllerAnimator.h>

@interface _UISearchControllerATVSearchBarAnimator : _UISearchControllerAnimator {

	BOOL _shouldLayoutTabBar;

}

@property (assign,nonatomic) BOOL shouldLayoutTabBar;              //@synthesize shouldLayoutTabBar=_shouldLayoutTabBar - In the implementation block
-(void)animateTransition:(id)arg1 ;
-(id)init;
-(void)updateViewsWithSearchController:(id)arg1 reloadInputViewController:(BOOL)arg2 ;
-(void)_updateLayoutForGridKeyboard:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateViewsWithSearchController:(id)arg1 ;
-(BOOL)shouldLayoutTabBar;
-(void)setShouldLayoutTabBar:(BOOL)arg1 ;
-(void)didRelayoutSearchBarForController:(id)arg1 ;
-(void)didFocusSearchBarForController:(id)arg1 ;
-(void)didUnfocusSearchBarForController:(id)arg1 ;
-(void)willFocusOffscreenViewForController:(id)arg1 withHeading:(unsigned long long)arg2 ;
@end

