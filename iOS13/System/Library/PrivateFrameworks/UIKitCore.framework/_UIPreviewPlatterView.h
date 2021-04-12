/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UITargetedPreview, UIView, _UIPlatterTransformView, _UIPlatterSoftShadowView, _UIRoundedRectShadowView, UIViewFloatAnimatableProperty;

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
	UIView* _collapsedClippingView;
	_UIPlatterTransformView* _collapsedTransformView;
	UIView* _expandedClippingView;
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

@property (nonatomic,retain) UIView * collapsedClippingView;                                      //@synthesize collapsedClippingView=_collapsedClippingView - In the implementation block
@property (nonatomic,retain) _UIPlatterTransformView * collapsedTransformView;                    //@synthesize collapsedTransformView=_collapsedTransformView - In the implementation block
@property (nonatomic,retain) UIView * expandedClippingView;                                       //@synthesize expandedClippingView=_expandedClippingView - In the implementation block
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
@property (assign,nonatomic) BOOL shouldMorphContents;                                            //@synthesize shouldMorphContents=_shouldMorphContents - In the implementation block
-(void)updateContentSize;
-(BOOL)isFrozen;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)preventPreviewRasterization;
-(void)setPreventPreviewRasterization:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setFrozen:(BOOL)arg1 ;
-(void)setCollapsedPreview:(UITargetedPreview *)arg1 ;
-(void)setExpandedPreview:(UITargetedPreview *)arg1 ;
-(void)freezeExpandedPreview;
-(void)setHideChromeWhenCollapsed:(BOOL)arg1 ;
-(void)setHideShadowWhenCollapsed:(BOOL)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(void)setShouldMorphContents:(BOOL)arg1 ;
-(BOOL)bothViewsAreLikelyOpaque;
-(BOOL)alwaysCompact;
-(void)setExpandedClippingView:(UIView *)arg1 ;
-(UIView *)expandedClippingView;
-(void)setExpandedTransformView:(_UIPlatterTransformView *)arg1 ;
-(_UIPlatterTransformView *)expandedTransformView;
-(void)setCollapsedClippingView:(UIView *)arg1 ;
-(UIView *)collapsedClippingView;
-(void)setCollapsedTransformView:(_UIPlatterTransformView *)arg1 ;
-(_UIPlatterTransformView *)collapsedTransformView;
-(void)_prepareAnimatableProperties;
-(BOOL)expanded;
-(BOOL)contentSizeDidChange;
-(void)setContentSizeDidChange:(BOOL)arg1 ;
-(void)_updatePathShadowTransform;
-(void)_updateClippingViews;
-(void)setPreferredMorphingAxis:(unsigned long long)arg1 ;
-(unsigned long long)preferredMorphingAxis;
-(void)_modelUpdates;
-(UIViewFloatAnimatableProperty *)expansionProgress;
-(UIViewFloatAnimatableProperty *)platterWidth;
-(UIViewFloatAnimatableProperty *)platterHeight;
-(UIViewFloatAnimatableProperty *)collapsedContentWidth;
-(UIViewFloatAnimatableProperty *)collapsedContentHeight;
-(UIViewFloatAnimatableProperty *)expandedContentWidth;
-(UIViewFloatAnimatableProperty *)expandedContentHeight;
-(void)_updateCollapsedChrome;
-(_UIRoundedRectShadowView *)rectangularShadowView;
-(double)_rectangularShadowAlphaForExpansionProgress:(double)arg1 ;
-(double)_pathShadowAlphaForExpansionProgress:(double)arg1 ;
-(_UIPlatterSoftShadowView *)pathShadowView;
-(void)setExpansionProgress:(UIViewFloatAnimatableProperty *)arg1 ;
-(void)setPlatterWidth:(UIViewFloatAnimatableProperty *)arg1 ;
-(void)setPlatterHeight:(UIViewFloatAnimatableProperty *)arg1 ;
-(void)setCollapsedContentWidth:(UIViewFloatAnimatableProperty *)arg1 ;
-(void)setCollapsedContentHeight:(UIViewFloatAnimatableProperty *)arg1 ;
-(void)setExpandedContentWidth:(UIViewFloatAnimatableProperty *)arg1 ;
-(void)setExpandedContentHeight:(UIViewFloatAnimatableProperty *)arg1 ;
-(BOOL)shouldMorphContents;
-(UITargetedPreview *)collapsedPreview;
-(BOOL)hideShadowWhenCollapsed;
-(UITargetedPreview *)expandedPreview;
-(BOOL)_previewIsLikelyOpaque:(id)arg1 ;
-(void)_installPreview:(id)arg1 inClippingView:(id)arg2 transformView:(id)arg3 ;
-(void)_updatePathShadow;
-(void)setPathShadowView:(_UIPlatterSoftShadowView *)arg1 ;
-(BOOL)hideChromeWhenCollapsed;
-(void)setRectangularShadowView:(_UIRoundedRectShadowView *)arg1 ;
-(BOOL)_previewPrefersApplyingMask:(id)arg1 ;
-(id)_overrideTraitCollectionForView:(id)arg1 combinedWithTraits:(id)arg2 ;
-(void)setAllowsUserInteractionInExpandedPreview:(BOOL)arg1 ;
-(BOOL)allowsUserInteractionInExpandedPreview;
-(void)didTearOffForDrag;
-(void)setAlwaysCompact:(BOOL)arg1 ;
@end

