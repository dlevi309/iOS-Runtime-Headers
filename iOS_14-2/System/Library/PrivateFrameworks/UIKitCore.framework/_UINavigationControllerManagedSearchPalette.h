/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UINavigationControllerPalette.h>

@class UISearchBar, UIView;

@interface _UINavigationControllerManagedSearchPalette : _UINavigationControllerPalette {

	BOOL _ignoreGeometryChanges;
	/*^block*/id _resetAfterSearchFieldFade;
	UISearchBar* __searchBar;

}

@property (nonatomic,readonly) UIView * viewForAsymmetricFade; 
@property (assign,nonatomic) BOOL ignoreGeometryChanges;                                         //@synthesize ignoreGeometryChanges=_ignoreGeometryChanges - In the implementation block
@property (nonatomic,copy) id resetAfterSearchFieldFade;                                         //@synthesize resetAfterSearchFieldFade=_resetAfterSearchFieldFade - In the implementation block
@property (assign,setter=_setSearchBar:,nonatomic,__weak) UISearchBar * _searchBar;              //@synthesize _searchBar=__searchBar - In the implementation block
@property (assign,setter=_setShadowAlpha:,nonatomic) double _shadowAlpha; 
-(void)_setSearchBar:(id)arg1 ;
-(BOOL)_shouldUpdateBackground;
-(id)resetAfterSearchFieldFade;
-(UISearchBar *)_searchBar;
-(void)_propagateBackgroundToContents;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)_pushDisableLayoutFlushingForTransition;
-(id)_initWithNavigationController:(id)arg1 forEdge:(unsigned long long)arg2 ;
-(void)_setShadowAlpha:(double)arg1 ;
-(UIView *)viewForAsymmetricFade;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setIgnoreGeometryChanges:(BOOL)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)_updateLayoutForCurrentConfiguration;
-(BOOL)_supportsSpecialSearchBarTransitions;
-(void)_popDisableLayoutFlushingForTransition;
-(void)setResetAfterSearchFieldFade:(id)arg1 ;
-(BOOL)ignoreGeometryChanges;
-(double)_shadowAlpha;
@end

