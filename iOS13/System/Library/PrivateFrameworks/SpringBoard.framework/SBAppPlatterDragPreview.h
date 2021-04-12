/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,retain) SBIconView * iconView;                                                            //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                                              //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) BOOL iconCanShowCloseBox;                                                         //@synthesize iconCanShowCloseBox=_iconCanShowCloseBox - In the implementation block
@property (assign,nonatomic) BOOL iconIsHighlighted;                                                           //@synthesize iconIsHighlighted=_iconIsHighlighted - In the implementation block
@property (nonatomic,retain) UIView * anchorPointAdjustmentContainerView;                                      //@synthesize anchorPointAdjustmentContainerView=_anchorPointAdjustmentContainerView - In the implementation block
@property (nonatomic,retain) UIView * iconContainerView;                                                       //@synthesize iconContainerView=_iconContainerView - In the implementation block
@property (nonatomic,retain) UIView * cornerMaskingView;                                                       //@synthesize cornerMaskingView=_cornerMaskingView - In the implementation block
@property (nonatomic,retain) SBPortalView * sourcePortalView;                                                  //@synthesize sourcePortalView=_sourcePortalView - In the implementation block
@property (nonatomic,retain) UIView * unclippedSourceContainerView;                                            //@synthesize unclippedSourceContainerView=_unclippedSourceContainerView - In the implementation block
@property (nonatomic,retain) SBApplicationBlurContentView * platterView;                                       //@synthesize platterView=_platterView - In the implementation block
@property (nonatomic,retain) SBFView * diffuseShadowView;                                                      //@synthesize diffuseShadowView=_diffuseShadowView - In the implementation block
@property (nonatomic,retain) SBFView * rimShadowView;                                                          //@synthesize rimShadowView=_rimShadowView - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                          //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) id cleanUpHandler;                                                                  //@synthesize cleanUpHandler=_cleanUpHandler - In the implementation block
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
@property (assign,nonatomic) double iconContentScale;                                                          //@synthesize iconContentScale=_iconContentScale - In the implementation block
@property (assign,nonatomic) BOOL iconIsEditing; 
@property (nonatomic,retain) SBIcon * icon; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(SBFView *)diffuseShadowView;
-(SBFView *)rimShadowView;
-(void)layoutSubviews;
-(SBIcon *)icon;
-(UIView *)sourceView;
-(void)setIcon:(SBIcon *)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setDragState:(unsigned long long)arg1 ;
-(unsigned long long)dragState;
-(void)setPlatterView:(SBApplicationBlurContentView *)arg1 ;
-(SBApplicationBlurContentView *)platterView;
-(BOOL)_isDragging;
-(BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
-(void)setCornerRadiusConfiguration:(BSCornerRadiusConfiguration *)arg1 ;
-(SBIconView *)iconView;
-(void)setIconView:(SBIconView *)arg1 ;
-(double)iconContentScale;
-(void)setIconContentScale:(double)arg1 ;
-(void)draggingSourceDroppedWithOperation:(unsigned long long)arg1 ;
-(void)draggingSourceCancelAnimationCompleted;
-(void)dropDestinationAnimationCompleted;
-(BOOL)isFlocked;
-(void)setFlocked:(BOOL)arg1 ;
-(BOOL)iconAllowsLabelArea;
-(void)setIconAllowsLabelArea:(BOOL)arg1 ;
-(BOOL)iconIsEditing;
-(void)setIconIsEditing:(BOOL)arg1 ;
-(void)_updateSubviewVisibility;
-(UIView *)iconContainerView;
-(void)setIconContainerView:(UIView *)arg1 ;
-(id)initWithReferenceIconView:(id)arg1 sourceView:(id)arg2 ;
-(void)setCleanUpHandler:(id)arg1 ;
-(void)updateSourceView:(id)arg1 ;
-(void)_matchMoveView:(id)arg1 toContainerView:(id)arg2 ;
-(void)_updateIconViewComponentVisibility;
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
-(void)_setSourcePortalViewHidden:(BOOL)arg1 ;
-(double)_blurContentViewIconViewCenterYOffset;
-(double)_effectiveIconAccessoryAlpha;
-(BOOL)_effectiveIconAllowsLabelArea;
-(BOOL)_effectiveIconIsHighlighted;
-(BOOL)_effectiveIconCanShowCloseBox;
-(CGSize)platterSize;
-(double)platterScale;
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
-(BOOL)iconCanShowCloseBox;
-(void)setIconCanShowCloseBox:(BOOL)arg1 ;
-(BOOL)iconIsHighlighted;
-(void)setIconIsHighlighted:(BOOL)arg1 ;
-(UIView *)anchorPointAdjustmentContainerView;
-(void)setAnchorPointAdjustmentContainerView:(UIView *)arg1 ;
-(UIView *)cornerMaskingView;
-(void)setCornerMaskingView:(UIView *)arg1 ;
-(SBPortalView *)sourcePortalView;
-(void)setSourcePortalView:(SBPortalView *)arg1 ;
-(UIView *)unclippedSourceContainerView;
-(void)setUnclippedSourceContainerView:(UIView *)arg1 ;
-(void)setDiffuseShadowView:(SBFView *)arg1 ;
-(void)setRimShadowView:(SBFView *)arg1 ;
@end

