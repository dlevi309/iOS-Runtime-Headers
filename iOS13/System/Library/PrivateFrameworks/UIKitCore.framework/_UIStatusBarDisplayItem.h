/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	_UIStatusBarStyleAttributes* _overriddenStyleAttributes;
	long long _overriddenVerticalAlignment;
	_UIStatusBarRegion* _region;
	UIView* _containerView;
	id<UILayoutItem> _layoutItem;
	_UIStatusBarDisplayItemPlacement* _placement;
	UIEdgeInsets _actionInsets;
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
@property (nonatomic,retain) _UIStatusBarStyleAttributes * overriddenStyleAttributes;              //@synthesize overriddenStyleAttributes=_overriddenStyleAttributes - In the implementation block
@property (assign,nonatomic) long long overriddenVerticalAlignment;                                //@synthesize overriddenVerticalAlignment=_overriddenVerticalAlignment - In the implementation block
@property (assign,nonatomic,__weak) _UIStatusBarRegion * region;                                   //@synthesize region=_region - In the implementation block
@property (assign,nonatomic,__weak) UIView * containerView;                                        //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) BOOL floating;                                                        //@synthesize floating=_floating - In the implementation block
@property (nonatomic,readonly) long long priority; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UIStatusBarAction * action;                                          //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) _UIStatusBarAction * hoverAction;                                     //@synthesize hoverAction=_hoverAction - In the implementation block
@property (nonatomic,readonly) UIView * hoverView; 
@property (nonatomic,readonly) CGRect absoluteHoverFrame; 
@property (assign,nonatomic) NSDirectionalEdgeInsets extendedHoverInsets; 
@property (assign,nonatomic) UIEdgeInsets actionInsets;                                            //@synthesize actionInsets=_actionInsets - In the implementation block
-(NSString *)description;
-(void)setEnabled:(BOOL)arg1 ;
-(_UIStatusBarIdentifier *)identifier;
-(CGAffineTransform)transform;
-(_UIStatusBarItem *)item;
-(long long)priority;
-(BOOL)isEnabled;
-(_UIStatusBarAction *)action;
-(_UIStatusBarRegion *)region;
-(double)alpha;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(BOOL)visible;
-(UIView*<_UIStatusBarDisplayable>)view;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(UIView *)highlightView;
-(void)setAction:(_UIStatusBarAction *)arg1 ;
-(void)applyStyleAttributes:(id)arg1 ;
-(long long)overriddenVerticalAlignment;
-(void)setBackground:(BOOL)arg1 ;
-(id<UILayoutItem>)layoutItem;
-(void)setLayoutItem:(id<UILayoutItem>)arg1 ;
-(BOOL)floating;
-(void)setFloating:(BOOL)arg1 ;
-(_UIStatusBarDisplayItemPlacement *)placement;
-(void)setRegion:(_UIStatusBarRegion *)arg1 ;
-(void)setViewAlpha:(double)arg1 ;
-(_UIStatusBarStyleAttributes *)overriddenStyleAttributes;
-(void)setPlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(void)setHighlightView:(UIView *)arg1 ;
-(void)setActionInsets:(UIEdgeInsets)arg1 ;
-(void)setOverriddenStyleAttributes:(_UIStatusBarStyleAttributes *)arg1 ;
-(CGRect)absoluteFrame;
-(void)setAbsoluteFrame:(CGRect)arg1 ;
-(void)_updateComputedAlpha;
-(void)_updateComputedTransform;
-(BOOL)isBackground;
-(id<_UIStatusBarDisplayable>)displayable;
-(void)setNeedsAddingToLayout:(BOOL)arg1 ;
-(_UIStatusBarAction *)hoverAction;
-(void)setHoverAction:(_UIStatusBarAction *)arg1 ;
-(UIView *)hoverView;
-(CGRect)absoluteHoverFrame;
-(UIEdgeInsets)actionInsets;
-(id)initWithIdentifier:(id)arg1 item:(id)arg2 ;
-(void)setViewTransform:(CGAffineTransform)arg1 ;
-(double)viewAlpha;
-(CGAffineTransform)viewTransform;
-(void)setOverriddenVerticalAlignment:(long long)arg1 ;
-(BOOL)needsAddingToLayout;
@end

