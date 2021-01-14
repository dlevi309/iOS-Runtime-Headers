/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBIconDragPreview.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBIcon, UIView, SBApplicationBlurContentView, NSArray, BSCornerRadiusConfiguration, SBIconView, SBPortalView, SBFView, NSString;

@interface SBAppPlatterDragPreview : UIView <SBIconDragPreview, BSDescriptionProviding> {

	BOOL _isBlurredPlatterReady;
	BOOL _hasAnimatedToBlurredPlatter;
	unsigned long long _platterViewAlphaAnimationCount;
	BOOL _flocked;
	BOOL _iconAllowsLabelArea;
	BOOL _iconCanShowCloseBox;
	BOOL _iconIsHighlighted;
	BOOL _iconInitiallyShowingCloseBox;
	unsigned long long _dragState;
	double _iconContentScale;
	unsigned long long _mode;
	/*^block*/id _cleanUpHandler;
	UIView* _sourceView;
	SBApplicationBlurContentView* _platterView;
	/*^block*/id _platterViewAlphaAnimationCompletionBlock;
	double _platterScale;
	NSArray* _diffuseShadowFilters;
	NSArray* _rimShadowFilters;
	BSCornerRadiusConfiguration* _cornerRadiusConfiguration;
	double _rotation;
	SBIconView* _referenceIconView;
	SBIconView* _iconView;
	UIView* _anchorPointAdjustmentContainerView;
	UIView* _iconContainerView;
	UIView* _cornerMaskingView;
	SBPortalView* _sourcePortalView;
	UIView* _unclippedSourceContainerView;
	SBFView* _diffuseShadowView;
	SBFView* _rimShadowView;
	CGSize _platterSize;
	CGPoint _anchorPoint;
	SBDragPreviewShadowParameters _diffuseShadowParameters;
	SBDragPreviewShadowParameters _rimShadowParameters;

}

@property (assign,nonatomic) unsigned long long mode;                                                          //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) id cleanUpHandler;                                                                  //@synthesize cleanUpHandler=_cleanUpHandler - In the implementation block
@property (nonatomic,readonly) UIView * sourceView; 
@property (nonatomic,readonly) SBApplicationBlurContentView * platterView; 
@property (getter=isAnimatingPlatterViewAlpha,nonatomic,readonly) BOOL animatingPlatterViewAlpha; 
@property (nonatomic,copy) id platterViewAlphaAnimationCompletionBlock;                                        //@synthesize platterViewAlphaAnimationCompletionBlock=_platterViewAlphaAnimationCompletionBlock - In the implementation block
@property (assign,nonatomic) CGSize platterSize;                                                               //@synthesize platterSize=_platterSize - In the implementation block
@property (assign,nonatomic) double platterScale;                                                              //@synthesize platterScale=_platterScale - In the implementation block
@property (assign,nonatomic) SBDragPreviewShadowParameters diffuseShadowParameters;                            //@synthesize diffuseShadowParameters=_diffuseShadowParameters - In the implementation block
@property (assign,nonatomic) SBDragPreviewShadowParameters rimShadowParameters;                                //@synthesize rimShadowParameters=_rimShadowParameters - In the implementation block
@property (nonatomic,copy) NSArray * diffuseShadowFilters;                                                     //@synthesize diffuseShadowFilters=_diffuseShadowFilters - In the implementation block
@property (nonatomic,copy) NSArray * rimShadowFilters;                                                         //@synthesize rimShadowFilters=_rimShadowFilters - In the implementation block
@property (nonatomic,retain) BSCornerRadiusConfiguration * cornerRadiusConfiguration;                          //@synthesize cornerRadiusConfiguration=_cornerRadiusConfiguration - In the implementation block
@property (assign,nonatomic) CGPoint anchorPoint;                                                              //@synthesize anchorPoint=_anchorPoint - In the implementation block
@property (assign,nonatomic) double rotation;                                                                  //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) unsigned long long dragState;                                                     //@synthesize dragState=_dragState - In the implementation block
@property (assign,getter=isFlocked,nonatomic) BOOL flocked;                                                    //@synthesize flocked=_flocked - In the implementation block
@property (assign,nonatomic) BOOL iconAllowsLabelArea;                                                         //@synthesize iconAllowsLabelArea=_iconAllowsLabelArea - In the implementation block
@property (assign,nonatomic) BOOL iconCanShowCloseBox;                                                         //@synthesize iconCanShowCloseBox=_iconCanShowCloseBox - In the implementation block
@property (assign,nonatomic) double iconContentScale;                                                          //@synthesize iconContentScale=_iconContentScale - In the implementation block
@property (assign,nonatomic) BOOL iconIsEditing; 
@property (nonatomic,retain) SBIcon * icon; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(unsigned long long)mode;
-(SBApplicationBlurContentView *)platterView;
-(void)setIconContentScale:(double)arg1 ;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBIcon *)icon;
-(double)iconContentScale;
-(void)setIcon:(SBIcon *)arg1 ;
-(CGPoint)anchorPoint;
-(void)setMode:(unsigned long long)arg1 ;
-(UIView *)sourceView;
-(void)_updateSubviewVisibility;
-(NSString *)description;
-(void)layoutSubviews;
-(void)updateDestinationIconLocation:(id)arg1 allowsLabelArea:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setFlocked:(BOOL)arg1 ;
-(void)dropDestinationAnimationCompleted;
-(void)draggingSourceCancelAnimationCompleted;
-(void)draggingSourceDroppedWithOperation:(unsigned long long)arg1 ;
-(void)setIconAllowsLabelArea:(BOOL)arg1 ;
-(void)setIconIsEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setCornerRadiusConfiguration:(BSCornerRadiusConfiguration *)arg1 ;
-(BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)setDragState:(unsigned long long)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)_isDragging;
-(unsigned long long)dragState;
-(void)setIconCanShowCloseBox:(BOOL)arg1 ;
-(id)initWithReferenceIconView:(id)arg1 sourceView:(id)arg2 ;
-(void)setCleanUpHandler:(id)arg1 ;
-(void)updateSourceView:(id)arg1 ;
-(void)_matchMoveView:(id)arg1 toContainerView:(id)arg2 ;
-(void)_configureIconViewWithReferenceIconView:(id)arg1 ;
-(void)_updateIconViewComponentVisibility;
-(void)_updateShowDebugIconBorderWithColor:(id)arg1 ;
-(CGRect)_effectiveIconViewFrame;
-(void)_getIconAlpha:(double*)arg1 platterAlpha:(double*)arg2 ;
-(void)invalidateSourceView;
-(void)handleCleanup;
-(double)_effectiveIconContentScale;
-(CGPoint)_effectiveIconContainerCenter;
-(CGRect)_effectivePlatterFrame;
-(id)_effectiveCornerRadiusConfiguration;
-(double)_effectiveCornerRadius;
-(void)_updateShadowView;
-(void)_updateContainerViewPositionForAnchorPoint;
-(unsigned long long)_effectiveMode;
-(BOOL)isFlocked;
-(double)iconDragAlpha;
-(void)_setSourcePortalViewHidden:(BOOL)arg1 ;
-(double)_blurContentViewIconViewCenterYOffset;
-(double)_effectiveIconAccessoryAlpha;
-(BOOL)_effectiveIconAllowsLabelArea;
-(BOOL)_effectiveIconIsHighlighted;
-(BOOL)_effectiveIconCanShowCloseBox;
-(CGSize)platterSize;
-(double)platterScale;
-(BOOL)iconAllowsLabelArea;
-(BOOL)iconCanShowCloseBox;
-(BOOL)iconIsEditing;
-(void)setIconIsEditing:(BOOL)arg1 ;
-(BOOL)isAnimatingPlatterViewAlpha;
-(void)configurePlatterForSceneHandle:(id)arg1 withTargetView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPlatterSize:(CGSize)arg1 ;
-(void)setDiffuseShadowParameters:(SBDragPreviewShadowParameters)arg1 ;
-(void)setRimShadowParameters:(SBDragPreviewShadowParameters)arg1 ;
-(void)setDiffuseShadowFilters:(NSArray *)arg1 ;
-(void)setRimShadowFilters:(NSArray *)arg1 ;
-(id)cleanUpHandler;
-(id)platterViewAlphaAnimationCompletionBlock;
-(void)setPlatterViewAlphaAnimationCompletionBlock:(id)arg1 ;
-(void)setPlatterScale:(double)arg1 ;
-(SBDragPreviewShadowParameters)diffuseShadowParameters;
-(SBDragPreviewShadowParameters)rimShadowParameters;
-(NSArray *)diffuseShadowFilters;
-(NSArray *)rimShadowFilters;
@end

