/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UINavigationPalette.h>

@class _UIBarBackground, _UIBarBackgroundLayoutLegacy, UINavigationController, UIViewController, NSArray, NSString, UIView;

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(void)dealloc;
-(CGSize)_size;
-(NSArray *)_constraints;
-(void)setFrame:(CGRect)arg1 ;
-(UIView *)_backgroundView;
-(void)didMoveToSuperview;
-(BOOL)_paletteOverridesPinningBar;
-(id)_backgroundViewLayout;
-(BOOL)_supportsSpecialSearchBarTransitions;
-(BOOL)paletteShadowIsHidden;
-(void)_propagateBackgroundToContents;
-(void)_setBackgroundView:(id)arg1 ;
-(void)_setTopConstraintConstant:(double)arg1 ;
-(void)_setLeftConstraintConstant:(double)arg1 ;
-(void)setFrame:(CGRect)arg1 isAnimating:(BOOL)arg2 ;
-(BOOL)isAttached;
-(BOOL)paletteIsHidden;
-(void)_setPaletteOverridesPinningBar:(BOOL)arg1 ;
-(UINavigationController *)navController;
-(unsigned long long)boundaryEdge;
-(BOOL)isPinned;
-(void)setPinned:(BOOL)arg1 ;
-(BOOL)pinningBarShadowWasHidden;
-(void)setPinningBarShadowWasHidden:(BOOL)arg1 ;
-(BOOL)pinningBarShadowIsHidden;
-(void)setPinningBarShadowIsHidden:(BOOL)arg1 ;
-(void)setPaletteShadowIsHidden:(BOOL)arg1 ;
-(BOOL)isVisibleWhenPinningBarIsHidden;
-(void)setVisibleWhenPinningBarIsHidden:(BOOL)arg1 ;
-(UIEdgeInsets)preferredContentInsets;
-(void)setPreferredContentInsets:(UIEdgeInsets)arg1 ;
-(void)_setSize:(CGSize)arg1 ;
-(id)_attachedPinningTopBar;
-(void)_updateBackgroundView;
-(void)_setAttached:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)_configureConstraintsForBackground:(id)arg1 ;
-(BOOL)_shouldUpdateBackground;
-(void)_updateBackgroundConstraintsIfNecessary;
-(void)_configurePaletteConstraintsForBoundary;
-(void)_disableConstraints;
-(void)_enableConstraints;
-(void)_resetConstraintConstants:(double)arg1 ;
-(void)_resetHeightConstraintConstant;
-(void)_setupBackgroundViewIfNecessary;
-(void)_setVisualAltitude:(double)arg1 ;
-(void)_setVisualAltitudeBias:(CGSize)arg1 ;
-(id)_initWithNavigationController:(id)arg1 forEdge:(unsigned long long)arg2 ;
-(void)_updateLayoutForCurrentConfiguration;
-(void)_setBackgroundConstraints:(id)arg1 ;
-(void)_setConstraints:(id)arg1 ;
-(void)_setAttachmentIsChanging:(BOOL)arg1 ;
-(BOOL)_attachmentIsChanging;
-(void)_setRestartPaletteTransitionIfNecessary:(BOOL)arg1 ;
-(BOOL)_restartPaletteTransitionIfNecessary;
-(void)_setPalettePinningBarHidden:(BOOL)arg1 ;
-(UIViewController *)_unpinnedController;
-(void)set_unpinnedController:(UIViewController *)arg1 ;
-(id)_pinningBar;
-(void)_setPinningBar:(id)arg1 ;
-(NSArray *)_backgroundConstraints;
-(BOOL)_isPalettePinningBarHidden;
@end

