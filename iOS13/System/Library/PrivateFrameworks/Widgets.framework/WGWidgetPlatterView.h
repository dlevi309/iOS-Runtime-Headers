/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PLContentSizeManaging.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>
#import <libobjc.A.dylib/MTMaterialGrouping.h>
#import <libobjc.A.dylib/MTVisualStylingRequiring.h>

@class NSString, NSArray, MTMaterialView, WGPlatterHeaderContentView, WGWidgetHostingViewController, WGWidgetListItemViewController, UIView, UIButton;

@interface WGWidgetPlatterView : UIView <PLContentSizeManaging, PLContentSizeCategoryAdjusting, MTMaterialGrouping, MTVisualStylingRequiring> {

	MTMaterialView* _backgroundView;
	MTMaterialView* _headerBackgroundView;
	WGPlatterHeaderContentView* _headerContentView;
	double _cornerRadius;
	BOOL _adjustsFontForContentSizeCategory;
	BOOL _contentViewHitTestingDisabled;
	BOOL _backgroundHidden;
	BOOL _showingMoreContent;
	NSString* _materialGroupNameBase;
	WGWidgetHostingViewController* _widgetHost;
	WGWidgetListItemViewController* _listItem;
	UIView* _contentView;
	unsigned long long _clippingEdge;
	double _overrideHeightForLayingOutContentView;
	double _topMarginForLayout;
	long long _buttonMode;

}

@property (setter=_setContentView:,nonatomic,retain) UIView * contentView;                                           //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) WGWidgetHostingViewController * widgetHost;                                      //@synthesize widgetHost=_widgetHost - In the implementation block
@property (assign,nonatomic,__weak) WGWidgetListItemViewController * listItem;                                       //@synthesize listItem=_listItem - In the implementation block
@property (assign,getter=isContentViewHitTestingDisabled,nonatomic) BOOL contentViewHitTestingDisabled;              //@synthesize contentViewHitTestingDisabled=_contentViewHitTestingDisabled - In the implementation block
@property (assign,nonatomic) unsigned long long clippingEdge;                                                        //@synthesize clippingEdge=_clippingEdge - In the implementation block
@property (assign,getter=isBackgroundHidden,nonatomic) BOOL backgroundHidden;                                        //@synthesize backgroundHidden=_backgroundHidden - In the implementation block
@property (assign,nonatomic) double overrideHeightForLayingOutContentView;                                           //@synthesize overrideHeightForLayingOutContentView=_overrideHeightForLayingOutContentView - In the implementation block
@property (assign,nonatomic) double topMarginForLayout;                                                              //@synthesize topMarginForLayout=_topMarginForLayout - In the implementation block
@property (assign,nonatomic) long long buttonMode;                                                                   //@synthesize buttonMode=_buttonMode - In the implementation block
@property (nonatomic,readonly) UIButton * showMoreButton; 
@property (assign,getter=isShowingMoreContent,nonatomic) BOOL showingMoreContent;                                    //@synthesize showingMoreContent=_showingMoreContent - In the implementation block
@property (assign,getter=isShowMoreButtonVisible,nonatomic) BOOL showMoreButtonVisible; 
@property (nonatomic,readonly) UIButton * addWidgetButton; 
@property (assign,getter=isAddWidgetButtonVisible,nonatomic) BOOL addWidgetButtonVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                 //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (nonatomic,copy) NSString * materialGroupNameBase;                                                         //@synthesize materialGroupNameBase=_materialGroupNameBase - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
+(double)contentBaselineToBoundsBottomWithWidth:(double)arg1 ;
-(CGSize)_contentSize;
-(UIView *)contentView;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(double)_continuousCornerRadius;
-(void)willRemoveSubview:(id)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(void)_setContentView:(id)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(WGWidgetListItemViewController *)listItem;
-(void)setListItem:(WGWidgetListItemViewController *)arg1 ;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(long long)buttonMode;
-(void)setButtonMode:(long long)arg1 ;
-(WGWidgetHostingViewController *)widgetHost;
-(void)setWidgetHost:(WGWidgetHostingViewController *)arg1 ;
-(void)_layoutContentView;
-(void)setBackgroundHidden:(BOOL)arg1 ;
-(void)setAddWidgetButtonVisible:(BOOL)arg1 ;
-(UIButton *)addWidgetButton;
-(NSArray *)requiredVisualStyleCategories;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(void)setTopMarginForLayout:(double)arg1 ;
-(double)topMarginForLayout;
-(void)iconDidInvalidate:(id)arg1 ;
-(void)_handleIconButton:(id)arg1 ;
-(void)_updateUtilityButtonForMode:(long long)arg1 ;
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(void)_configureHeaderViewsIfNecessary;
-(BOOL)_isUtilityButtonVisible;
-(void)_setUtilityButtonVisible:(BOOL)arg1 ;
-(void)_updateUtilityButtonForMoreContentState:(BOOL)arg1 ;
-(void)_configureBackgroundMaterialViewIfNecessary;
-(void)_layoutHeaderViews;
-(UIButton *)showMoreButton;
-(void)_updateShowMoreButtonImage;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)_updateHeaderContentViewVisualStyling;
-(CGRect)_headerFrameForBounds:(CGRect)arg1 ;
-(void)setShowingMoreContent:(BOOL)arg1 ;
-(void)_handleAddWidget:(id)arg1 ;
-(void)_toggleShowMore:(id)arg1 ;
-(void)setShowMoreButtonVisible:(BOOL)arg1 ;
-(BOOL)isShowingMoreContent;
-(CGSize)contentSizeForSize:(CGSize)arg1 ;
-(NSString *)materialGroupNameBase;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(CGSize)minimumSizeThatFits:(CGSize)arg1 ;
-(void)setContentViewHitTestingDisabled:(BOOL)arg1 ;
-(void)setClippingEdge:(unsigned long long)arg1 ;
-(BOOL)isShowMoreButtonVisible;
-(BOOL)isAddWidgetButtonVisible;
-(void)setOverrideHeightForLayingOutContentView:(double)arg1 ;
-(BOOL)isContentViewHitTestingDisabled;
-(unsigned long long)clippingEdge;
-(BOOL)isBackgroundHidden;
-(double)overrideHeightForLayingOutContentView;
@end

