/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITableConstantsHeaderFooterProviding.h>
#import <UIKit/UITableViewSubviewReusing.h>

@protocol UITableConstants, UITable;
@class NSString, UIImage, UIView, _UITableViewHeaderFooterViewLabel, UITableView, UILabel;

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
	}  _headerFooterFlags;
	id<UITable> _table;

}

@property (getter=_effectiveSafeAreaInsets,nonatomic,readonly) UIEdgeInsets effectiveSafeAreaInsets; 
@property (assign,nonatomic,__weak) id<UITable> table;                                                                                                     //@synthesize table=_table - In the implementation block
@property (nonatomic,copy) NSString * reuseIdentifier;                                                                                                     //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (assign,setter=_setMarginWidth:,getter=_marginWidth,nonatomic) double marginWidth; 
@property (assign,setter=_setRightMarginWidth:,getter=_rightMarginWidth,nonatomic) double rightMarginWidth; 
@property (assign,setter=_setInsetsContentViewsToSafeArea:,getter=_insetsContentViewsToSafeArea,nonatomic) BOOL insetsContentViewsToSafeArea; 
@property (assign,setter=_setStripPadding:,getter=_stripPadding,nonatomic) BOOL stripPadding; 
@property (assign,setter=_setTopHeader:,getter=_isTopHeader,nonatomic) BOOL topHeader; 
@property (setter=_setConstants:,getter=_constants,nonatomic,retain) id<UITableConstants> constants; 
@property (assign,nonatomic) BOOL floating; 
@property (assign,nonatomic) long long tableViewStyle; 
@property (nonatomic,retain) UIImage * backgroundImage;                                                                                                    //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign,nonatomic) BOOL sectionHeader; 
@property (assign,nonatomic,__weak) UITableView * tableView; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) double maxTitleWidth;                                                                                                         //@synthesize maxTitleWidth=_maxTitleWidth - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (nonatomic,readonly) UIView * contentView;                                                                                                       //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultTextColorForTableViewStyle:(long long)arg1 isSectionHeader:(BOOL)arg2 ;
+(id)_defaultPlainHeaderFooterFont;
+(id)_defaultFontForHeaderFooterView:(id)arg1 ;
+(id)_defaultFontForTableViewStyle:(long long)arg1 isSectionHeader:(BOOL)arg2 ;
+(double)defaultHeaderHeightForStyle:(long long)arg1 ;
+(double)defaultFooterHeightForStyle:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_table;
-(void)prepareForReuse;
-(NSString *)text;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id<UITable>)table;
-(void)setBackgroundColor:(id)arg1 ;
-(UIView *)contentView;
-(void)setFrame:(CGRect)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(UIView *)backgroundView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UITableView *)tableView;
-(void)setTintColor:(id)arg1 ;
-(void)setNeedsUpdateConstraints;
-(void)layoutMarginsDidChange;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)didMoveToSuperview;
-(BOOL)_hostsLayoutEngineAllowsTAMIC_NO;
-(CGRect)_labelFrame;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)_updateBackgroundView;
-(void)_updateBackgroundImage;
-(UILabel *)textLabel;
-(CGRect)_contentRect;
-(void)setTableView:(UITableView *)arg1 ;
-(id)_constants;
-(void)_setInsetsContentViewsToSafeArea:(BOOL)arg1 ;
-(BOOL)_insetsContentViewsToSafeArea;
-(UILabel *)detailTextLabel;
-(NSString *)reuseIdentifier;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)_setTableViewStyle:(long long)arg1 updateFrame:(BOOL)arg2 ;
-(void)_setConstants:(id)arg1 ;
-(void)setTable:(id<UITable>)arg1 ;
-(void)setSectionHeader:(BOOL)arg1 ;
-(double)maxTitleWidth;
-(void)setMaxTitleWidth:(double)arg1 ;
-(void)_setMarginWidth:(double)arg1 ;
-(void)_setRightMarginWidth:(double)arg1 ;
-(long long)textAlignment;
-(void)_setupLabelAppearance;
-(BOOL)floating;
-(void)setFloating:(BOOL)arg1 ;
-(CGRect)_updatedContentViewFrameForTargetWidth:(double)arg1 ;
-(BOOL)_isTransparentFocusRegion;
-(BOOL)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1 ;
-(void)setReuseIdentifier:(NSString *)arg1 ;
-(void)_setupBackgroundView;
-(BOOL)_isFloating;
-(UIEdgeInsets)_effectiveSafeAreaInsets;
-(double)_marginWidth;
-(double)_rightMarginWidth;
-(void)_safeAreaInsetsDidChangeFromOldInsets:(UIEdgeInsets)arg1 ;
-(long long)tableViewStyle;
-(void)setTableViewStyle:(long long)arg1 ;
-(void)_tableViewDidUpdateMarginWidth;
-(void)_setTopHeader:(BOOL)arg1 ;
-(void)_setStripPadding:(BOOL)arg1 ;
-(void)_invalidateDetailLabelBackgroundColor;
-(void)_updateContentAndBackgroundView;
-(BOOL)sectionHeader;
-(void)_setupDefaultsIfNecessary;
-(void)_setupLabelForSourceList:(id)arg1 ;
-(id)_defaultTextColor;
-(BOOL)_useDetailText;
-(void)_updateDetailLabelBackgroundColor;
-(id)_label:(BOOL)arg1 ;
-(UIEdgeInsets)_insetsToContentRect;
-(CGSize)_textSizeForWidth:(double)arg1 ;
-(CGSize)_detailTextSizeForWidth:(double)arg1 ;
-(UIEdgeInsets)_insetsToBounds;
-(CGSize)_sizeThatFits:(CGSize)arg1 stripPaddingForAbuttingView:(BOOL)arg2 isTopHeader:(BOOL)arg3 ;
-(CGRect)_backgroundRect;
-(CGRect)_backgroundRectForWidth:(double)arg1 ;
-(CGRect)_contentRectForWidth:(double)arg1 ;
-(CGRect)_detailLabelFrame;
-(void)_updateDetailLabelBackgroundColorIfNeeded;
-(void)_invalidateLabelBackgroundColor;
-(BOOL)_stripPadding;
-(BOOL)_isTopHeader;
@end

