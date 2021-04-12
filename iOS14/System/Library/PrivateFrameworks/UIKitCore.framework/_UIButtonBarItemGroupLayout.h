/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIButtonBarLayout.h>

@class NSMapTable, NSMutableArray, _UIButtonBarLayout, UIBarButtonItemGroup, UILayoutGuide;

@interface _UIButtonBarItemGroupLayout : _UIButtonBarLayout {

	NSMapTable* _itemLayoutMap;
	NSMutableArray* _itemLayouts;
	NSMutableArray* _configuredItemLayouts;
	_UIButtonBarLayout* _representativeLayout;
	BOOL _compact;
	BOOL _useGroupSizing;
	BOOL _suppressSpacing;
	UIBarButtonItemGroup* _group;
	UILayoutGuide* _groupSizeGuide;
	/*^block*/id _itemViewGenerator;

}

@property (nonatomic,readonly) UIBarButtonItemGroup * group;                //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * groupSizeGuide;              //@synthesize groupSizeGuide=_groupSizeGuide - In the implementation block
@property (assign,nonatomic) BOOL compact;                                  //@synthesize compact=_compact - In the implementation block
@property (assign,nonatomic) BOOL useGroupSizing;                           //@synthesize useGroupSizing=_useGroupSizing - In the implementation block
@property (assign,nonatomic) BOOL suppressSpacing;                          //@synthesize suppressSpacing=_suppressSpacing - In the implementation block
@property (nonatomic,copy) id itemViewGenerator;                            //@synthesize itemViewGenerator=_itemViewGenerator - In the implementation block
-(void)setSuppressSpacing:(BOOL)arg1 ;
-(UIBarButtonItemGroup *)group;
-(void)setUseGroupSizing:(BOOL)arg1 ;
-(void)_addLayoutGuides:(id)arg1 ;
-(double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1 ;
-(BOOL)isSpaceLayout;
-(void)_addLayoutViews:(id)arg1 ;
-(BOOL)isGroupLayout;
-(void)dirtyLayoutForPlainAppearanceChange:(BOOL)arg1 doneAppearanceChanged:(BOOL)arg2 ;
-(id)initWithLayoutMetrics:(id)arg1 ;
-(void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2 ;
-(void)_configure;
-(BOOL)suppressSpacing;
-(id)subLayouts;
-(BOOL)useGroupSizing;
-(BOOL)shouldHoriziontallyCenterView:(id)arg1 ;
-(id)layoutForBarButtonItem:(id)arg1 ;
-(UILayoutGuide *)groupSizeGuide;
-(id)itemViewGenerator;
-(id)description;
-(id)initWithLayoutMetrics:(id)arg1 barButtonItemGroup:(id)arg2 ;
-(void)setItemViewGenerator:(id)arg1 ;
-(id)_representativeLayout;
-(id)_newLayoutForBarButtonItem:(id)arg1 useGroupSizing:(BOOL)arg2 ;
-(void)setCompact:(BOOL)arg1 ;
-(BOOL)compact;
-(id)_itemLayouts;
-(id)layoutsForSpacerItem:(id)arg1 ;
-(void)_iterateConfiguredLayouts:(/*^block*/id)arg1 ;
@end

