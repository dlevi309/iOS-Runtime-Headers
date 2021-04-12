/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UINavigationPalette.h>

@class _UIBarBackground, _UIBarBackgroundLayoutLegacy, UINavigationController, UIViewController, NSArray, UIView, NSString;

@interface _UINavigationControllerPalette : UIView <_UINavigationPalette> {

	_UIBarBackground* _backgroundView;
	_UIBarBackgroundLayoutLegacy* _backgroundViewLayout;
	double _backgroundUnderlapHeight;
	struct {
		unsigned isAttached : 1;
		unsigned attachmentIsChanging : 1;
		unsigned restartPaletteTransitionIfNecessary : 1;
		unsigned pinned : 1;
		unsigned pinningBarShadowIsHidden : 1;
		unsigned paletteShadowIsHidden : 1;
		unsigned pinningBarShadowWasHidden : 1;
	}  _paletteFlags;
	BOOL __paletteOverridesPinningBar;
	BOOL _visibleWhenPinningBarIsHidden;
	BOOL __palettePinningBarHidden;
	unsigned long long _boundaryEdge;
	UINavigationController* _navController;
	UIViewController* __unpinnedController;
	id __pinningBar;
	NSArray* __constraints;
	NSArray* __backgroundConstraints;
	CGSize __size;
	UIEdgeInsets _preferredContentInsets;

}

@property (assign,nonatomic) UIViewController * _unpinnedController;                                                                           //@synthesize _unpinnedController=__unpinnedController - In the implementation block
@property (assign,setter=_setPinningBar:,nonatomic) id _pinningBar;                                                                            //@synthesize _pinningBar=__pinningBar - In the implementation block
@property (getter=_attachmentIsChanging,nonatomic,readonly) BOOL _attachmentIsChanging; 
@property (assign,setter=_setRestartPaletteTransitionIfNecessary:,nonatomic) BOOL _restartPaletteTransitionIfNecessary; 
@property (setter=_setConstraints:,nonatomic,retain) NSArray * _constraints;                                                                   //@synthesize _constraints=__constraints - In the implementation block
@property (assign,setter=_setSize:,nonatomic) CGSize _size;                                                                                    //@synthesize _size=__size - In the implementation block
@property (setter=_setBackgroundConstraints:,nonatomic,retain) NSArray * _backgroundConstraints;                                               //@synthesize _backgroundConstraints=__backgroundConstraints - In the implementation block
@property (assign,setter=_setPalettePinningBarHidden:,getter=_isPalettePinningBarHidden,nonatomic) BOOL _palettePinningBarHidden;              //@synthesize _palettePinningBarHidden=__palettePinningBarHidden - In the implementation block
@property (setter=_setBackgroundView:,nonatomic,retain) UIView * _backgroundView; 
@property (assign,setter=_setPaletteOverridesPinningBar:,nonatomic) BOOL _paletteOverridesPinningBar;                                          //@synthesize _paletteOverridesPinningBar=__paletteOverridesPinningBar - In the implementation block
@property (nonatomic,readonly) UINavigationController * navController;                                                                         //@synthesize navController=_navController - In the implementation block
@property (nonatomic,readonly) unsigned long long boundaryEdge;                                                                                //@synthesize boundaryEdge=_boundaryEdge - In the implementation block
@property (assign,getter=isPinned,nonatomic) BOOL pinned; 
@property (assign,nonatomic) BOOL pinningBarShadowWasHidden; 
@property (assign,nonatomic) BOOL pinningBarShadowIsHidden; 
@property (assign,nonatomic) BOOL paletteShadowIsHidden; 
@property (assign,getter=isVisibleWhenPinningBarIsHidden,nonatomic) BOOL visibleWhenPinningBarIsHidden;                                        //@synthesize visibleWhenPinningBarIsHidden=_visibleWhenPinningBarIsHidden - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredContentInsets;                                                                              //@synthesize preferredContentInsets=_preferredContentInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupBackgroundViewIfNecessary;
-(void)_setTopConstraintConstant:(double)arg1 ;
-(BOOL)isAttached;
-(id)_attachedPinningTopBar;
-(void)_setAttached:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)setVisibleWhenPinningBarIsHidden:(BOOL)arg1 ;
-(void)setPaletteShadowIsHidden:(BOOL)arg1 ;
-(UINavigationController *)navController;
-(BOOL)pinningBarShadowWasHidden;
-(BOOL)isVisibleWhenPinningBarIsHidden;
-(void)_enableConstraints;
-(BOOL)_paletteOverridesPinningBar;
-(void)_disableConstraints;
-(void)_updateBackgroundView;
-(void)_updateBackgroundConstraintsIfNecessary;
-(void)_configureConstraintsForBackground:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 isAnimating:(BOOL)arg2 ;
-(BOOL)paletteIsHidden;
-(unsigned long long)boundaryEdge;
-(void)_setSize:(CGSize)arg1 ;
-(void)_setConstraints:(id)arg1 ;
-(void)_setPaletteOverridesPinningBar:(BOOL)arg1 ;
-(BOOL)_shouldUpdateBackground;
-(BOOL)pinningBarShadowIsHidden;
-(void)setPreferredContentInsets:(UIEdgeInsets)arg1 ;
-(void)_resetHeightConstraintConstant;
-(void)_setBackgroundView:(id)arg1 ;
-(void)_configurePaletteConstraintsForBoundary;
-(CGSize)_size;
-(void)_setVisualAltitudeBias:(CGSize)arg1 ;
-(id)_pinningBar;
-(BOOL)isPinned;
-(void)_setLeftConstraintConstant:(double)arg1 ;
-(void)_propagateBackgroundToContents;
-(void)setPinned:(BOOL)arg1 ;
-(id)_initWithNavigationController:(id)arg1 forEdge:(unsigned long long)arg2 ;
-(UIEdgeInsets)preferredContentInsets;
-(UIView *)_backgroundView;
-(void)didMoveToSuperview;
-(void)set_unpinnedController:(UIViewController *)arg1 ;
-(NSArray *)_backgroundConstraints;
-(void)_resetConstraintConstants:(double)arg1 ;
-(void)setPinningBarShadowWasHidden:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)_attachmentIsChanging;
-(NSArray *)_constraints;
-(void)_updateLayoutForCurrentConfiguration;
-(BOOL)_supportsSpecialSearchBarTransitions;
-(BOOL)_restartPaletteTransitionIfNecessary;
-(void)_setPinningBar:(id)arg1 ;
-(void)_setAttachmentIsChanging:(BOOL)arg1 ;
-(id)_backgroundViewLayout;
-(UIViewController *)_unpinnedController;
-(void)_setPalettePinningBarHidden:(BOOL)arg1 ;
-(BOOL)paletteShadowIsHidden;
-(void)_setVisualAltitude:(double)arg1 ;
-(void)_setRestartPaletteTransitionIfNecessary:(BOOL)arg1 ;
-(void)_setBackgroundConstraints:(id)arg1 ;
-(void)setPinningBarShadowIsHidden:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)_isPalettePinningBarHidden;
@end

