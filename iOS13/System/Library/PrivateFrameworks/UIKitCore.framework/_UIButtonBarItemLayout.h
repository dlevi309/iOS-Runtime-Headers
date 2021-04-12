/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIButtonBarLayout.h>

@class UIBarButtonItem, UIView, _UITAMICAdaptorView, NSLayoutConstraint, UILayoutGuide;

@interface _UIButtonBarItemLayout : _UIButtonBarLayout {

	UIBarButtonItem* _item;
	UIView* _itemView;
	_UITAMICAdaptorView* _itemViewWrapper;
	NSLayoutConstraint* _requestedSize;
	NSLayoutConstraint* _maximumAlignmentSize;
	NSLayoutConstraint* _groupSameSize;
	NSLayoutConstraint* _popoverGuideLeading;
	NSLayoutConstraint* _popoverGuideTrailing;
	NSLayoutConstraint* _popoverGuideTop;
	NSLayoutConstraint* _popoverGuideHeight;
	BOOL _useGroupSizing;
	BOOL _suppressSpacing;
	UILayoutGuide* _popoverLayoutGuide;
	/*^block*/id _itemViewGenerator;

}

@property (assign,nonatomic) BOOL useGroupSizing;                               //@synthesize useGroupSizing=_useGroupSizing - In the implementation block
@property (assign,nonatomic) BOOL suppressSpacing;                              //@synthesize suppressSpacing=_suppressSpacing - In the implementation block
@property (nonatomic,copy) id itemViewGenerator;                                //@synthesize itemViewGenerator=_itemViewGenerator - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * popoverLayoutGuide;              //@synthesize popoverLayoutGuide=_popoverLayoutGuide - In the implementation block
-(id)description;
-(double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1 ;
-(void)setSuppressSpacing:(BOOL)arg1 ;
-(void)setUseGroupSizing:(BOOL)arg1 ;
-(void)setItemViewGenerator:(id)arg1 ;
-(void)dirtyLayoutForPlainAppearanceChange:(BOOL)arg1 doneAppearanceChanged:(BOOL)arg2 ;
-(BOOL)shouldHoriziontallyCenterView:(id)arg1 ;
-(id)barButtonItem;
-(BOOL)_shouldBeDirty;
-(void)_configure;
-(void)_addLayoutViews:(id)arg1 ;
-(void)_addLayoutGuides:(id)arg1 ;
-(void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2 ;
-(id)initWithLayoutMetrics:(id)arg1 ;
-(BOOL)suppressSpacing;
-(BOOL)useGroupSizing;
-(id)initWithLayoutMetrics:(id)arg1 barButtonItem:(id)arg2 ;
-(void)_updateCustomView;
-(void)_updateItemViewSizing;
-(void)_updateItemView;
-(UILayoutGuide *)popoverLayoutGuide;
-(id)itemViewGenerator;
@end

