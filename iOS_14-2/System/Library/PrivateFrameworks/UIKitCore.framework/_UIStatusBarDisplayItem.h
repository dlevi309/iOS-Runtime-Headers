/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarPrioritized.h>
#import <UIKitCore/_UIStatusBarActionable.h>

@protocol _UIStatusBarDisplayable, UILayoutItem;
@class _UIStatusBarAction, UIView, _UIStatusBarIdentifier, _UIStatusBarItem, _UIStatusBarStyleAttributes, _UIStatusBarRegion, _UIStatusBarDisplayItemPlacement, NSString;

@interface _UIStatusBarDisplayItem : NSObject <_UIStatusBarPrioritized, _UIStatusBarActionable> {

	BOOL _enabled;
	BOOL _background;
	BOOL _floating;
	BOOL _needsAddingToLayout;
	UIView*<_UIStatusBarDisplayable> _view;
	_UIStatusBarAction* _action;
	_UIStatusBarAction* _hoverAction;
	_UIStatusBarIdentifier* _identifier;
	_UIStatusBarItem* _item;
	UIView* _highlightView;
	double _alpha;
	double _viewAlpha;
	double _baselineOffset;
	double _centerOffset;
	_UIStatusBarStyleAttributes* _overriddenStyleAttributes;
	long long _overriddenVerticalAlignment;
	_UIStatusBarRegion* _region;
	UIView* _containerView;
	id<UILayoutItem> _layoutItem;
	_UIStatusBarDisplayItemPlacement* _placement;
	UIEdgeInsets _actionInsets;
	NSDirectionalEdgeInsets _extendedHoverInsets;
	CGAffineTransform _transform;
	CGAffineTransform _viewTransform;

}

@property (nonatomic,retain) id<UILayoutItem> layoutItem;                                          //@synthesize layoutItem=_layoutItem - In the implementation block
@property (nonatomic,retain) _UIStatusBarDisplayItemPlacement * placement;                         //@synthesize placement=_placement - In the implementation block
@property (assign,nonatomic) BOOL needsAddingToLayout;                                             //@synthesize needsAddingToLayout=_needsAddingToLayout - In the implementation block
@property (nonatomic,copy,readonly) _UIStatusBarIdentifier * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,__weak,readonly) _UIStatusBarItem * item;                                     //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) id<_UIStatusBarDisplayable> displayable; 
@property (nonatomic,readonly) UIView*<_UIStatusBarDisplayable> view;                              //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                                               //@synthesize highlightView=_highlightView - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                        //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL visible; 
@property (assign,getter=isBackground,nonatomic) BOOL background;                                  //@synthesize background=_background - In the implementation block
@property (assign,nonatomic) double alpha;                                                         //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) double viewAlpha;                                                     //@synthesize viewAlpha=_viewAlpha - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;                                          //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) CGAffineTransform viewTransform;                                      //@synthesize viewTransform=_viewTransform - In the implementation block
@property (assign,nonatomic) CGRect absoluteFrame; 
@property (assign,nonatomic) double baselineOffset;                                                //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (assign,nonatomic) double centerOffset;                                                  //@synthesize centerOffset=_centerOffset - In the implementation block
@property (nonatomic,retain) _UIStatusBarStyleAttributes * overriddenStyleAttributes;              //@synthesize overriddenStyleAttributes=_overriddenStyleAttributes - In the implementation block
@property (assign,nonatomic) long long overriddenVerticalAlignment;                                //@synthesize overriddenVerticalAlignment=_overriddenVerticalAlignment - In the implementation block
@property (assign,nonatomic,__weak) _UIStatusBarRegion * region;                                   //@synthesize region=_region - In the implementation block
@property (assign,nonatomic,__weak) UIView * containerView;                                        //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) BOOL floating;                                                        //@synthesize floating=_floating - In the implementation block
@property (nonatomic,readonly) long long priority; 
@property (nonatomic,retain) _UIStatusBarAction * action;                                          //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) _UIStatusBarAction * hoverAction;                                     //@synthesize hoverAction=_hoverAction - In the implementation block
@property (nonatomic,readonly) UIView * hoverView; 
@property (nonatomic,readonly) CGRect absoluteHoverFrame; 
@property (nonatomic,readonly) BOOL hoverHighlightsAsRegion; 
@property (assign,nonatomic) NSDirectionalEdgeInsets extendedHoverInsets;                          //@synthesize extendedHoverInsets=_extendedHoverInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets actionInsets;                                            //@synthesize actionInsets=_actionInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOverriddenStyleAttributes:(_UIStatusBarStyleAttributes *)arg1 ;
-(void)applyStyleAttributes:(id)arg1 ;
-(void)setCenterOffset:(double)arg1 ;
-(UIEdgeInsets)actionInsets;
-(void)setBackground:(BOOL)arg1 ;
-(CGRect)absoluteHoverFrame;
-(BOOL)isBackground;
-(_UIStatusBarRegion *)region;
-(void)setContainerView:(UIView *)arg1 ;
-(_UIStatusBarStyleAttributes *)overriddenStyleAttributes;
-(void)setBaselineOffset:(double)arg1 ;
-(_UIStatusBarDisplayItemPlacement *)placement;
-(id<UILayoutItem>)layoutItem;
-(void)setRegion:(_UIStatusBarRegion *)arg1 ;
-(void)setHoverAction:(_UIStatusBarAction *)arg1 ;
-(UIView *)hoverView;
-(void)setFloating:(BOOL)arg1 ;
-(id<_UIStatusBarDisplayable>)displayable;
-(double)viewAlpha;
-(void)setAbsoluteFrame:(CGRect)arg1 ;
-(void)setActionInsets:(UIEdgeInsets)arg1 ;
-(BOOL)needsAddingToLayout;
-(void)setHighlightView:(UIView *)arg1 ;
-(void)setNeedsAddingToLayout:(BOOL)arg1 ;
-(void)_updateComputedAlpha;
-(void)setViewTransform:(CGAffineTransform)arg1 ;
-(long long)overriddenVerticalAlignment;
-(void)_updateComputedTransform;
-(BOOL)hoverHighlightsAsRegion;
-(UIView *)highlightView;
-(void)setLayoutItem:(id<UILayoutItem>)arg1 ;
-(BOOL)floating;
-(_UIStatusBarAction *)hoverAction;
-(NSDirectionalEdgeInsets)extendedHoverInsets;
-(double)alpha;
-(_UIStatusBarItem *)item;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setPlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(BOOL)visible;
-(_UIStatusBarAction *)action;
-(void)setAction:(_UIStatusBarAction *)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(double)centerOffset;
-(NSString *)description;
-(UIView*<_UIStatusBarDisplayable>)view;
-(UIView *)containerView;
-(double)baselineOffset;
-(void)setOverriddenVerticalAlignment:(long long)arg1 ;
-(CGAffineTransform)viewTransform;
-(void)setExtendedHoverInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setViewAlpha:(double)arg1 ;
-(BOOL)isEnabled;
-(_UIStatusBarIdentifier *)identifier;
-(CGRect)absoluteFrame;
-(void)setAlpha:(double)arg1 ;
-(long long)priority;
-(id)initWithIdentifier:(id)arg1 item:(id)arg2 ;
@end

