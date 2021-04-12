/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSString * widgetIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                 //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * materialGroupNameBase;                                                         //@synthesize materialGroupNameBase=_materialGroupNameBase - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
+(double)contentBaselineToBoundsBottomWithWidth:(double)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(void)_updateUtilityButtonForMode:(long long)arg1 ;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(CGSize)contentSizeForSize:(CGSize)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(double)overrideHeightForLayingOutContentView;
-(WGWidgetHostingViewController *)widgetHost;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(NSString *)widgetIdentifier;
-(NSArray *)requiredVisualStyleCategories;
-(BOOL)adjustsFontForContentSizeCategory;
-(CGSize)intrinsicContentSize;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)iconDidInvalidate:(id)arg1 ;
-(double)_continuousCornerRadius;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateUtilityButtonForMoreContentState:(BOOL)arg1 ;
-(BOOL)isContentViewHitTestingDisabled;
-(BOOL)isBackgroundHidden;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(UIButton *)addWidgetButton;
-(void)setShowingMoreContent:(BOOL)arg1 ;
-(void)_handleAddWidget:(id)arg1 ;
-(void)setButtonMode:(long long)arg1 ;
-(void)setAddWidgetButtonVisible:(BOOL)arg1 ;
-(void)_layoutContentView;
-(void)_configureHeaderViewsIfNecessary;
-(BOOL)isAddWidgetButtonVisible;
-(NSString *)materialGroupNameBase;
-(CGSize)minimumSizeThatFits:(CGSize)arg1 ;
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(UIButton *)showMoreButton;
-(void)_setUtilityButtonVisible:(BOOL)arg1 ;
-(void)setListItem:(WGWidgetListItemViewController *)arg1 ;
-(BOOL)isShowingMoreContent;
-(void)setBackgroundHidden:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)_contentSize;
-(void)_toggleShowMore:(id)arg1 ;
-(unsigned long long)clippingEdge;
-(void)setContentViewHitTestingDisabled:(BOOL)arg1 ;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(double)topMarginForLayout;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateHeaderContentViewVisualStyling;
-(void)setTopMarginForLayout:(double)arg1 ;
-(void)setClippingEdge:(unsigned long long)arg1 ;
-(id)cancelTouches;
-(BOOL)isShowMoreButtonVisible;
-(WGWidgetListItemViewController *)listItem;
-(void)setShowMoreButtonVisible:(BOOL)arg1 ;
-(void)_configureBackgroundMaterialViewIfNecessary;
-(void)setWidgetHost:(WGWidgetHostingViewController *)arg1 ;
-(void)_layoutHeaderViews;
-(CGRect)_headerFrameForBounds:(CGRect)arg1 ;
-(void)setOverrideHeightForLayingOutContentView:(double)arg1 ;
-(UIView *)contentView;
-(void)_handleIconButton:(id)arg1 ;
-(void)_setContentView:(id)arg1 ;
-(long long)buttonMode;
-(void)_updateShowMoreButtonImage;
-(BOOL)_isUtilityButtonVisible;
@end

