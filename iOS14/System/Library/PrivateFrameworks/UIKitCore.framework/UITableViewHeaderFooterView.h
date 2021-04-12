/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITableConstantsHeaderFooterProviding.h>
#import <UIKit/UITableViewSubviewReusing.h>

@protocol _UIContentViewInternal, UITableConstants, UITable;
@class NSString, UIImage, UIView, _UITableViewHeaderFooterViewLabel, _UISystemBackgroundView, UITableView, _UIBackgroundViewConfiguration, UIViewConfigurationState, UILabel, UIBackgroundConfiguration;

@interface UITableViewHeaderFooterView : UIView <UITableConstantsHeaderFooterProviding, UITableViewSubviewReusing> {

	long long _tableViewStyle;
	UIImage* _backgroundImage;
	CGRect _frame;
	long long _textAlignment;
	double _maxTitleWidth;
	NSString* _reuseIdentifier;
	UIView* _backgroundView;
	_UITableViewHeaderFooterViewLabel* _label;
	_UITableViewHeaderFooterViewLabel* _detailLabel;
	UIView* _contentView;
	double _leadingMarginWidth;
	double _trailingMarginWidth;
	NSString* _contentViewConfigurationIdentifier;
	id<_UIContentViewInternal> _viewForContentConfiguration;
	/*^block*/id _contentViewConfigurationProvider;
	_UISystemBackgroundView* _systemBackgroundView;
	/*^block*/id _backgroundViewConfigurationProvider;
	id<UITableConstants> _constants;
	struct {
		unsigned isHeader : 1;
		unsigned labelBackgroundColorNeedsUpdate : 1;
		unsigned detailLabelBackgroundColorNeedsUpdate : 1;
		unsigned floating : 1;
		unsigned stripPadding : 1;
		unsigned isTopHeader : 1;
		unsigned didSetSectionHeader : 1;
		unsigned didSetupDefaults : 1;
		unsigned insetsContentViewsToSafeArea : 1;
		unsigned tableViewHasBeenExplicitlySet : 1;
		unsigned hasCustomBackgroundView : 1;
		unsigned hasCustomBackgroundViewConfigurationProvider : 1;
		unsigned hasCustomBackgroundViewConfiguration : 1;
		unsigned needsConfigurationStateUpdate : 1;
		unsigned automaticallyUpdatesContentViewConfiguration : 1;
		unsigned automaticallyUpdatesBackgroundViewConfiguration : 1;
	}  _headerFooterFlags;
	id<UITable> _table;

}

@property (getter=_effectiveSafeAreaInsets,nonatomic,readonly) UIEdgeInsets effectiveSafeAreaInsets; 
@property (assign,nonatomic,__weak) id<UITable> table;                                                                                                                                                               //@synthesize table=_table - In the implementation block
@property (nonatomic,copy) NSString * reuseIdentifier;                                                                                                                                                               //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (assign,setter=_setMarginWidth:,getter=_marginWidth,nonatomic) double marginWidth; 
@property (assign,setter=_setRightMarginWidth:,getter=_rightMarginWidth,nonatomic) double rightMarginWidth; 
@property (assign,setter=_setInsetsContentViewsToSafeArea:,getter=_insetsContentViewsToSafeArea,nonatomic) BOOL insetsContentViewsToSafeArea; 
@property (assign,setter=_setStripPadding:,getter=_stripPadding,nonatomic) BOOL stripPadding; 
@property (assign,setter=_setTopHeader:,getter=_isTopHeader,nonatomic) BOOL topHeader; 
@property (setter=_setConstants:,getter=_constants,nonatomic,retain) id<UITableConstants> constants; 
@property (assign,nonatomic) BOOL floating; 
@property (assign,nonatomic) long long tableViewStyle; 
@property (nonatomic,retain) UIImage * backgroundImage;                                                                                                                                                              //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign,nonatomic) BOOL sectionHeader; 
@property (assign,nonatomic,__weak) UITableView * tableView; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) double maxTitleWidth;                                                                                                                                                                   //@synthesize maxTitleWidth=_maxTitleWidth - In the implementation block
@property (setter=_setContentViewConfiguration:,getter=_contentViewConfiguration,nonatomic,copy) id<_UIContentViewConfiguration> _contentViewConfiguration; 
@property (assign,setter=_setAutomaticallyUpdatesContentViewConfiguration:,getter=_automaticallyUpdatesContentViewConfiguration,nonatomic) BOOL _automaticallyUpdatesContentViewConfiguration; 
@property (setter=_setContentViewConfigurationProvider:,getter=_contentViewConfigurationProvider,nonatomic,copy) id _contentViewConfigurationProvider; 
@property (setter=_setBackgroundViewConfiguration:,getter=_backgroundViewConfiguration,nonatomic,copy) _UIBackgroundViewConfiguration * _backgroundViewConfiguration; 
@property (setter=_setBackgroundViewConfigurationProvider:,getter=_backgroundViewConfigurationProvider,nonatomic,copy) id _backgroundViewConfigurationProvider; 
@property (assign,setter=_setAutomaticallyUpdatesBackgroundViewConfiguration:,getter=_automaticallyUpdatesBackgroundViewConfiguration,nonatomic) BOOL _automaticallyUpdatesBackgroundViewConfiguration; 
@property (nonatomic,readonly) unsigned long long _viewConfigurationState; 
@property (nonatomic,readonly) UIViewConfigurationState * configurationState; 
@property (nonatomic,copy) id<UIContentConfiguration> contentConfiguration; 
@property (assign,nonatomic) BOOL automaticallyUpdatesContentConfiguration; 
@property (nonatomic,readonly) UIView * contentView;                                                                                                                                                                 //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (nonatomic,copy) UIBackgroundConfiguration * backgroundConfiguration; 
@property (assign,nonatomic) BOOL automaticallyUpdatesBackgroundConfiguration; 
@property (nonatomic,retain) UIView * backgroundView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultTextColorForTableViewStyle:(long long)arg1 isSectionHeader:(BOOL)arg2 ;
+(id)_defaultPlainHeaderFooterFont;
+(id)_defaultFontForHeaderFooterView:(id)arg1 ;
+(double)defaultHeaderHeightForStyle:(long long)arg1 ;
+(id)_defaultFontForTableViewStyle:(long long)arg1 isSectionHeader:(BOOL)arg2 ;
+(double)defaultFooterHeightForStyle:(long long)arg1 ;
-(void)_updateBackgroundView;
-(id<UITable>)table;
-(void)layoutMarginsDidChange;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(id)_constants;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(BOOL)_isTransparentFocusRegion;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setTintColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFloating:(BOOL)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)floating;
-(UITableView *)tableView;
-(void)setBackgroundView:(UIView *)arg1 ;
-(id)_label:(BOOL)arg1 ;
-(void)_setAutomaticallyUpdatesContentViewConfiguration:(BOOL)arg1 ;
-(double)_rightMarginWidth;
-(void)_setAutomaticallyUpdatesBackgroundViewConfiguration:(BOOL)arg1 ;
-(UIEdgeInsets)_insetsToBounds;
-(UIView *)backgroundView;
-(void)_invalidateDetailLabelBackgroundColor;
-(void)_updateContentAndBackgroundView;
-(void)_setContentView:(id)arg1 insertAtBack:(BOOL)arg2 ;
-(BOOL)_isSourceListOrMacIdiom;
-(CGSize)_textSizeForWidth:(double)arg1 ;
-(UIEdgeInsets)_insetsToContentRect;
-(void)_setupDefaultsIfNecessary;
-(CGRect)_backgroundRect;
-(void)_setupLabelForSourceList:(id)arg1 ;
-(BOOL)_stripPadding;
-(void)_updateDetailLabelBackgroundColor;
-(CGSize)_detailTextSizeForWidth:(double)arg1 ;
-(CGRect)_contentRectForWidth:(double)arg1 ;
-(id)_customViewForDefaultBackgroundAppearance;
-(CGSize)_sizeThatFits:(CGSize)arg1 stripPaddingForAbuttingView:(BOOL)arg2 isTopHeader:(BOOL)arg3 ;
-(CGRect)_detailLabelFrame;
-(BOOL)_tintColorAffectsBackgroundColor;
-(CGRect)_backgroundRectForWidth:(double)arg1 ;
-(void)_updateDetailLabelBackgroundColorIfNeeded;
-(void)_resetContentViews;
-(void)_invalidateLabelBackgroundColor;
-(BOOL)_usingBackgroundConfigurationOrDefaultBackgroundConfiguration;
-(void)_safeAreaInsetsDidChangeFromOldInsets:(UIEdgeInsets)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_automaticallyUpdatesBackgroundViewConfiguration;
-(void)didMoveToSuperview;
-(void)setText:(NSString *)arg1 ;
-(void)_applyContentViewConfiguration:(id)arg1 withState:(id)arg2 usingSPI:(BOOL)arg3 ;
-(BOOL)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)prepareForReuse;
-(void)setTable:(id<UITable>)arg1 ;
-(void)setTableViewStyle:(long long)arg1 ;
-(void)_tableViewDidUpdateMarginWidth;
-(void)setAutomaticallyUpdatesBackgroundConfiguration:(BOOL)arg1 ;
-(void)setMaxTitleWidth:(double)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(long long)textAlignment;
-(void)_applyBackgroundViewConfiguration:(id)arg1 withState:(id)arg2 ;
-(void)setAutomaticallyUpdatesContentConfiguration:(BOOL)arg1 ;
-(BOOL)_automaticallyUpdatesContentViewConfiguration;
-(void)_updateBackgroundImage;
-(void)_updateBackgroundViewConfigurationForState:(id)arg1 ;
-(BOOL)automaticallyUpdatesBackgroundConfiguration;
-(void)_setInsetsContentViewsToSafeArea:(BOOL)arg1 ;
-(BOOL)_insetsContentViewsToSafeArea;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(UILabel *)detailTextLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGRect)_contentRect;
-(NSString *)text;
-(BOOL)_hostsLayoutEngineAllowsTAMIC_NO;
-(BOOL)_isFloating;
-(CGRect)_labelFrame;
-(void)setSectionHeader:(BOOL)arg1 ;
-(id<UIContentConfiguration>)contentConfiguration;
-(void)_setTopHeader:(BOOL)arg1 ;
-(void)_setMarginWidth:(double)arg1 ;
-(void)setNeedsUpdateConstraints;
-(void)_setConstants:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setTableViewStyle:(long long)arg1 updateFrame:(BOOL)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)_setRightMarginWidth:(double)arg1 ;
-(UIViewConfigurationState *)configurationState;
-(void)_setupLabelAppearance;
-(void)_updateDefaultBackgroundAppearance;
-(void)_setContentViewConfiguration:(id)arg1 ;
-(id<_UIContentViewConfiguration>)_contentViewConfiguration;
-(void)_setNeedsConfigurationStateUpdate;
-(id)_backgroundViewConfigurationProvider;
-(void)_performConfigurationStateUpdate;
-(id)_configurationState;
-(BOOL)_usingBackgroundViewConfiguration;
-(void)_resetBackgroundViewsAndColor;
-(void)setBackgroundConfiguration:(UIBackgroundConfiguration *)arg1 ;
-(BOOL)_useDetailText;
-(void)_setBackgroundViewConfigurationProvider:(/*^block*/id)arg1 ;
-(void)_setBackgroundViewConfiguration:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)_updateContentViewConfigurationForState:(id)arg1 ;
-(UIImage *)backgroundImage;
-(void)_updateViewConfigurationsWithState:(unsigned long long)arg1 ;
-(void)updateConfigurationUsingState:(id)arg1 ;
-(void)_layoutSystemBackgroundView;
-(void)_resetBackgroundViewConfiguration;
-(void)_setStripPadding:(BOOL)arg1 ;
-(void)setContentConfiguration:(id<UIContentConfiguration>)arg1 ;
-(NSString *)reuseIdentifier;
-(BOOL)automaticallyUpdatesContentConfiguration;
-(UILabel *)textLabel;
-(void)_setContentViewConfigurationProvider:(/*^block*/id)arg1 ;
-(id)_contentViewConfigurationProvider;
-(UIView *)contentView;
-(void)_setupBackgroundView;
-(void)setNeedsUpdateConfiguration;
-(id)_defaultTextColor;
-(long long)tableViewStyle;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(id)_table;
-(BOOL)sectionHeader;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)defaultContentConfiguration;
-(id)_defaultBackgroundConfiguration;
-(unsigned long long)_viewConfigurationState;
-(double)maxTitleWidth;
-(void)setReuseIdentifier:(NSString *)arg1 ;
-(CGRect)_updatedContentViewFrameForTargetWidth:(double)arg1 ;
-(BOOL)_isTopHeader;
-(double)_marginWidth;
-(UIEdgeInsets)_effectiveSafeAreaInsets;
-(UIBackgroundConfiguration *)backgroundConfiguration;
-(_UIBackgroundViewConfiguration *)_backgroundViewConfiguration;
@end

