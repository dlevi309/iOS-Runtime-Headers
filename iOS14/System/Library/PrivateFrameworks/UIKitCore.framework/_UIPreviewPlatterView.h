/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UITargetedPreview, _UIPlatterClippingView, _UIPlatterTransformView, _UIPlatterSoftShadowView, _UIRoundedRectShadowView, UIViewFloatAnimatableProperty;

@interface _UIPreviewPlatterView : UIView {

	BOOL _expanded;
	BOOL _hideShadowWhenCollapsed;
	BOOL _hideChromeWhenCollapsed;
	BOOL _alwaysCompact;
	BOOL _preventPreviewRasterization;
	BOOL _shouldMorphContents;
	BOOL _frozen;
	BOOL _contentSizeDidChange;
	UITargetedPreview* _collapsedPreview;
	UITargetedPreview* _expandedPreview;
	_UIPlatterClippingView* _collapsedClippingView;
	_UIPlatterTransformView* _collapsedTransformView;
	_UIPlatterClippingView* _expandedClippingView;
	_UIPlatterTransformView* _expandedTransformView;
	_UIPlatterSoftShadowView* _pathShadowView;
	_UIRoundedRectShadowView* _rectangularShadowView;
	unsigned long long _preferredMorphingAxis;
	UIViewFloatAnimatableProperty* _expansionProgress;
	UIViewFloatAnimatableProperty* _platterWidth;
	UIViewFloatAnimatableProperty* _platterHeight;
	UIViewFloatAnimatableProperty* _collapsedContentWidth;
	UIViewFloatAnimatableProperty* _collapsedContentHeight;
	UIViewFloatAnimatableProperty* _expandedContentWidth;
	UIViewFloatAnimatableProperty* _expandedContentHeight;

}

@property (nonatomic,retain) _UIPlatterClippingView * collapsedClippingView;                      //@synthesize collapsedClippingView=_collapsedClippingView - In the implementation block
@property (nonatomic,retain) _UIPlatterTransformView * collapsedTransformView;                    //@synthesize collapsedTransformView=_collapsedTransformView - In the implementation block
@property (nonatomic,retain) _UIPlatterClippingView * expandedClippingView;                       //@synthesize expandedClippingView=_expandedClippingView - In the implementation block
@property (nonatomic,retain) _UIPlatterTransformView * expandedTransformView;                     //@synthesize expandedTransformView=_expandedTransformView - In the implementation block
@property (nonatomic,retain) _UIPlatterSoftShadowView * pathShadowView;                           //@synthesize pathShadowView=_pathShadowView - In the implementation block
@property (nonatomic,retain) _UIRoundedRectShadowView * rectangularShadowView;                    //@synthesize rectangularShadowView=_rectangularShadowView - In the implementation block
@property (assign,getter=isFrozen,nonatomic) BOOL frozen;                                         //@synthesize frozen=_frozen - In the implementation block
@property (assign,nonatomic) BOOL contentSizeDidChange;                                           //@synthesize contentSizeDidChange=_contentSizeDidChange - In the implementation block
@property (assign,nonatomic) unsigned long long preferredMorphingAxis;                            //@synthesize preferredMorphingAxis=_preferredMorphingAxis - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * expansionProgress;                   //@synthesize expansionProgress=_expansionProgress - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * platterWidth;                        //@synthesize platterWidth=_platterWidth - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * platterHeight;                       //@synthesize platterHeight=_platterHeight - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * collapsedContentWidth;               //@synthesize collapsedContentWidth=_collapsedContentWidth - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * collapsedContentHeight;              //@synthesize collapsedContentHeight=_collapsedContentHeight - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * expandedContentWidth;                //@synthesize expandedContentWidth=_expandedContentWidth - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * expandedContentHeight;               //@synthesize expandedContentHeight=_expandedContentHeight - In the implementation block
@property (nonatomic,retain) UITargetedPreview * collapsedPreview;                                //@synthesize collapsedPreview=_collapsedPreview - In the implementation block
@property (nonatomic,retain) UITargetedPreview * expandedPreview;                                 //@synthesize expandedPreview=_expandedPreview - In the implementation block
@property (nonatomic,readonly) BOOL bothViewsAreLikelyOpaque; 
@property (assign,nonatomic) BOOL expanded;                                                       //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) BOOL hideShadowWhenCollapsed;                                        //@synthesize hideShadowWhenCollapsed=_hideShadowWhenCollapsed - In the implementation block
@property (assign,nonatomic) BOOL hideChromeWhenCollapsed;                                        //@synthesize hideChromeWhenCollapsed=_hideChromeWhenCollapsed - In the implementation block
@property (assign,nonatomic) BOOL alwaysCompact;                                                  //@synthesize alwaysCompact=_alwaysCompact - In the implementation block
@property (assign,nonatomic) BOOL allowsUserInteractionInExpandedPreview; 
@property (assign,nonatomic) BOOL preventPreviewRasterization;                                    //@synthesize preventPreviewRasterization=_preventPreviewRasterization - In the implementation block
@property (assign,nonatomic) BOOL hidesCollapsedSourceView; 
@property (assign,nonatomic) BOOL shouldMorphContents;                                            //@synthesize shouldMorphContents=_shouldMorphContents - In the implementation block
-(void)setFrozen:(BOOL)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)contentSizeDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)expanded;
-(void)setCollapsedPreview:(UITargetedPreview *)arg1 ;
-(void)setExpandedPreview:(UITargetedPreview *)arg1 ;
-(void)freezeExpandedPreview;
-(void)setHideChromeWhenCollapsed:(BOOL)arg1 ;
-(void)setHideShadowWhenCollapsed:(BOOL)arg1 ;
-(void)setShouldMorphContents:(BOOL)arg1 ;
-(void)setHidesCollapsedSourceView:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setPreventPreviewRasterization:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(BOOL)preventPreviewRasterization;
-(void)setExpandedClippingView:(_UIPlatterClippingView *)arg1 ;
-(_UIPlatterClippingView *)expandedClippingView;
-(void)setExpandedTransformView:(_UIPlatterTransformView *)arg1 ;
-(_UIPlatterTransformView *)expandedTransformView;
-(UIViewFloatAnimatableProperty *)expansionProgress;
-(void)setCollapsedClippingView:(_UIPlatterClippingView *)arg1 ;
-(_UIPlatterClippingView *)collapsedClippingView;
-(UIViewFloatAnimatableProperty *)platterHeight;
-(void)setCollapsedTransformView:(_UIPlatterTransformView *)arg1 ;
-(_UIPlatterTransformView *)collapsedTransformView;
-(UITargetedPreview *)collapsedPreview;
-(void)_prepareAnimatableProperties;
-(UIViewFloatAnimatableProperty *)platterWidth;
-(BOOL)alwaysCompact;
-(id)_interfaceLevelOverrideTraitCollectionForView:(id)arg1 expanded:(BOOL)arg2 ;
-(void)setContentSizeDidChange:(BOOL)arg1 ;
-(void)_updatePathShadowTransform;
-(void)_modelUpdates;
-(void)_updateClippingViews;
-(void)setPreferredMorphingAxis:(unsigned long long)arg1 ;
-(UIViewFloatAnimatableProperty *)expandedContentWidth;
-(unsigned long long)preferredMorphingAxis;
-(BOOL)bothViewsAreLikelyOpaque;
-(_UIPlatterSoftShadowView *)pathShadowView;
-(UIViewFloatAnimatableProperty *)collapsedContentWidth;
-(UIViewFloatAnimatableProperty *)collapsedContentHeight;
-(UIViewFloatAnimatableProperty *)expandedContentHeight;
-(void)_updateCollapsedChrome;
-(_UIRoundedRectShadowView *)rectangularShadowView;
-(void)setExpansionProgress:(UIViewFloatAnimatableProperty *)arg1 ;
-(double)_rectangularShadowAlphaForExpansionProgress:(double)arg1 ;
-(void)setPlatterWidth:(UIViewFloatAnimatableProperty *)arg1 ;
-(double)_pathShadowAlphaForExpansionProgress:(double)arg1 ;
-(void)setPlatterHeight:(UIViewFloatAnimatableProperty *)arg1 ;
-(void)setCollapsedContentWidth:(UIViewFloatAnimatableProperty *)arg1 ;
-(void)setCollapsedContentHeight:(UIViewFloatAnimatableProperty *)arg1 ;
-(void)setExpandedContentWidth:(UIViewFloatAnimatableProperty *)arg1 ;
-(void)setExpandedContentHeight:(UIViewFloatAnimatableProperty *)arg1 ;
-(UITargetedPreview *)expandedPreview;
-(BOOL)shouldMorphContents;
-(BOOL)hideShadowWhenCollapsed;
-(BOOL)_previewIsLikelyOpaque:(id)arg1 ;
-(void)_installPreview:(id)arg1 inClippingView:(id)arg2 transformView:(id)arg3 ;
-(void)_updatePathShadow;
-(void)setPathShadowView:(_UIPlatterSoftShadowView *)arg1 ;
-(BOOL)hideChromeWhenCollapsed;
-(BOOL)hidesCollapsedSourceView;
-(void)setRectangularShadowView:(_UIRoundedRectShadowView *)arg1 ;
-(BOOL)_previewPrefersApplyingMask:(id)arg1 ;
-(void)setAlwaysCompact:(BOOL)arg1 ;
-(void)setAllowsUserInteractionInExpandedPreview:(BOOL)arg1 ;
-(void)didTearOffForDrag;
-(BOOL)allowsUserInteractionInExpandedPreview;
-(void)updateContentSize;
-(BOOL)isFrozen;
@end

