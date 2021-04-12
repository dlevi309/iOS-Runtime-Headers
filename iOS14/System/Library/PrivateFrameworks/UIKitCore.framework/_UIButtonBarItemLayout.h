/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSuppressSpacing:(BOOL)arg1 ;
-(void)setUseGroupSizing:(BOOL)arg1 ;
-(void)_addLayoutGuides:(id)arg1 ;
-(double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1 ;
-(void)_addLayoutViews:(id)arg1 ;
-(void)dirtyLayoutForPlainAppearanceChange:(BOOL)arg1 doneAppearanceChanged:(BOOL)arg2 ;
-(id)initWithLayoutMetrics:(id)arg1 ;
-(void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2 ;
-(id)barButtonItem;
-(void)_configure;
-(BOOL)suppressSpacing;
-(BOOL)_shouldBeDirty;
-(BOOL)useGroupSizing;
-(BOOL)shouldHoriziontallyCenterView:(id)arg1 ;
-(void)_updateItemViewSizing;
-(id)itemViewGenerator;
-(id)description;
-(UILayoutGuide *)popoverLayoutGuide;
-(void)setItemViewGenerator:(id)arg1 ;
-(void)_updateItemView;
-(id)initWithLayoutMetrics:(id)arg1 barButtonItem:(id)arg2 ;
-(void)_updateCustomView;
@end

