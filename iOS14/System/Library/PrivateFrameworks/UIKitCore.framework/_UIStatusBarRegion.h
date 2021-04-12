/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarActionable.h>

@protocol _UIStatusBarRegionLayout;
@class _UIStatusBarAction, NSString, _UIStatusBar, NSSet, _UIStatusBarStyleAttributes, UIView, NSOrderedSet, NSMutableIndexSet, UILayoutGuide, NSLayoutConstraint, NSArray, _UIStatusBarDisplayItem, NSDictionary;

@interface _UIStatusBarRegion : NSObject <_UIStatusBarActionable> {

	BOOL _offsetable;
	_UIStatusBarAction* _action;
	_UIStatusBarAction* _hoverAction;
	NSString* _identifier;
	_UIStatusBar* _statusBar;
	id<_UIStatusBarRegionLayout> _layout;
	NSSet* _dependentRegionIdentifiers;
	_UIStatusBarRegion* _enabilityRegion;
	double _alpha;
	long long _overriddenStyle;
	_UIStatusBarStyleAttributes* _overriddenStyleAttributes;
	UIView* _contentView;
	UIView* _backgroundView;
	UIView* _highlightView;
	NSOrderedSet* _displayItems;
	NSMutableIndexSet* _disablingTokens;
	UILayoutGuide* _layoutGuide;
	NSLayoutConstraint* _centerXConstraint;
	NSLayoutConstraint* _centerYConstraint;
	UIView* _containerView;
	UIView* _frozenView;
	UIOffset _offset;
	UIEdgeInsets _actionInsets;
	NSDirectionalEdgeInsets _extendedHoverInsets;

}

@property (nonatomic,retain) NSMutableIndexSet * disablingTokens;                                  //@synthesize disablingTokens=_disablingTokens - In the implementation block
@property (nonatomic,retain) UILayoutGuide * layoutGuide;                                          //@synthesize layoutGuide=_layoutGuide - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * centerXConstraint;                               //@synthesize centerXConstraint=_centerXConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * centerYConstraint;                               //@synthesize centerYConstraint=_centerYConstraint - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                                             //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView * frozenView;                                                  //@synthesize frozenView=_frozenView - In the implementation block
@property (nonatomic,readonly) NSArray * enabledDisplayItems; 
@property (nonatomic,readonly) NSArray * currentEnabledDisplayItems; 
@property (nonatomic,copy,readonly) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) _UIStatusBar * statusBar;                                      //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,readonly) id<UILayoutItem> layoutItem; 
@property (nonatomic,readonly) id<UILayoutItem> containerItem; 
@property (nonatomic,retain) id<_UIStatusBarRegionLayout> layout;                                  //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) NSSet * dependentRegionIdentifiers;                                   //@synthesize dependentRegionIdentifiers=_dependentRegionIdentifiers - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (assign,nonatomic,__weak) _UIStatusBarRegion * enabilityRegion;                          //@synthesize enabilityRegion=_enabilityRegion - In the implementation block
@property (assign,nonatomic) BOOL offsetable;                                                      //@synthesize offsetable=_offsetable - In the implementation block
@property (assign,nonatomic) UIOffset offset;                                                      //@synthesize offset=_offset - In the implementation block
@property (assign,getter=isFrozen,nonatomic) BOOL frozen; 
@property (assign,nonatomic) double alpha;                                                         //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) long long overriddenStyle;                                            //@synthesize overriddenStyle=_overriddenStyle - In the implementation block
@property (nonatomic,retain) _UIStatusBarStyleAttributes * overriddenStyleAttributes;              //@synthesize overriddenStyleAttributes=_overriddenStyleAttributes - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                 //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                                               //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) NSOrderedSet * displayItems;                                          //@synthesize displayItems=_displayItems - In the implementation block
@property (nonatomic,readonly) _UIStatusBarDisplayItem * overflowedDisplayItem; 
@property (nonatomic,copy,readonly) NSDictionary * displayItemAbsoluteFrames; 
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
-(void)setFrozen:(BOOL)arg1 ;
-(void)setStatusBar:(_UIStatusBar *)arg1 ;
-(void)setOverriddenStyleAttributes:(_UIStatusBarStyleAttributes *)arg1 ;
-(UIEdgeInsets)actionInsets;
-(void)setLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setDisplayItems:(NSOrderedSet *)arg1 ;
-(_UIStatusBarDisplayItem *)overflowedDisplayItem;
-(CGRect)absoluteHoverFrame;
-(_UIStatusBarStyleAttributes *)overriddenStyleAttributes;
-(id<UILayoutItem>)layoutItem;
-(_UIStatusBar *)statusBar;
-(void)setHoverAction:(_UIStatusBarAction *)arg1 ;
-(UIView *)hoverView;
-(void)setActionInsets:(UIEdgeInsets)arg1 ;
-(void)setHighlightView:(UIView *)arg1 ;
-(BOOL)hoverHighlightsAsRegion;
-(UILayoutGuide *)layoutGuide;
-(UIView *)highlightView;
-(_UIStatusBarAction *)hoverAction;
-(NSDirectionalEdgeInsets)extendedHoverInsets;
-(void)setBackgroundView:(UIView *)arg1 ;
-(NSArray *)enabledDisplayItems;
-(void)_addSubview:(id)arg1 atBack:(BOOL)arg2 ;
-(void)setOffsetable:(BOOL)arg1 ;
-(double)alpha;
-(UIView *)backgroundView;
-(NSLayoutConstraint *)centerXConstraint;
-(_UIStatusBarAction *)action;
-(void)setAction:(_UIStatusBarAction *)arg1 ;
-(NSArray *)currentEnabledDisplayItems;
-(void)setOverriddenStyle:(long long)arg1 ;
-(NSOrderedSet *)displayItems;
-(UIOffset)offset;
-(NSString *)description;
-(UIView *)containerView;
-(void)disableWithToken:(unsigned long long)arg1 ;
-(NSDictionary *)displayItemAbsoluteFrames;
-(void)enableWithToken:(unsigned long long)arg1 ;
-(void)setCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFrozenView:(UIView *)arg1 ;
-(NSLayoutConstraint *)centerYConstraint;
-(void)setContentView:(UIView *)arg1 ;
-(void)setEnabilityRegion:(_UIStatusBarRegion *)arg1 ;
-(id<UILayoutItem>)containerItem;
-(void)setOffset:(UIOffset)arg1 ;
-(long long)overriddenStyle;
-(void)setCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setExtendedHoverInsets:(NSDirectionalEdgeInsets)arg1 ;
-(NSMutableIndexSet *)disablingTokens;
-(id)displayItemForHUDAtLocation:(CGPoint)arg1 ;
-(_UIStatusBarRegion *)enabilityRegion;
-(void)setDisablingTokens:(NSMutableIndexSet *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(NSString *)identifier;
-(void)_overriddenStyleAttributesChanged;
-(void)setDependentRegionIdentifiers:(NSSet *)arg1 ;
-(UIView *)contentView;
-(NSSet *)dependentRegionIdentifiers;
-(void)setLayout:(id<_UIStatusBarRegionLayout>)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(UIView *)frozenView;
-(BOOL)isFrozen;
-(id<_UIStatusBarRegionLayout>)layout;
-(BOOL)offsetable;
@end

