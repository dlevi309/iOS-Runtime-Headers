/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@class HFItem, UIColor, HUIconCellContentMetrics, NSArray, UIView, HUIconView, UILayoutGuide, UILabel, NSString;

@interface HUIconCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol> {

	BOOL _disabled;
	BOOL _hideIcon;
	BOOL _iconForegroundColorFollowsTintColor;
	BOOL _iconTintColorFollowsDisabledState;
	BOOL _separatorInsetLinesUpWithText;
	HFItem* _item;
	UIColor* _iconForegroundColor;
	double _iconAlpha;
	HUIconCellContentMetrics* _contentMetrics;
	unsigned long long _iconDisplayStyle;
	NSArray* _staticConstraints;
	NSArray* _dynamicConstraints;
	NSArray* _iconSpacingConstraints;
	UIView* _containerView;
	HUIconView* _iconView;
	UILayoutGuide* _iconSpacingLayoutGuide;

}

@property (nonatomic,retain) NSArray * staticConstraints;                                      //@synthesize staticConstraints=_staticConstraints - In the implementation block
@property (nonatomic,retain) NSArray * dynamicConstraints;                                     //@synthesize dynamicConstraints=_dynamicConstraints - In the implementation block
@property (nonatomic,retain) NSArray * iconSpacingConstraints;                                 //@synthesize iconSpacingConstraints=_iconSpacingConstraints - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                           //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) HUIconView * iconView;                                            //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILayoutGuide * iconSpacingLayoutGuide;                           //@synthesize iconSpacingLayoutGuide=_iconSpacingLayoutGuide - In the implementation block
@property (assign,nonatomic) BOOL hideIcon;                                                    //@synthesize hideIcon=_hideIcon - In the implementation block
@property (nonatomic,retain) UIColor * iconForegroundColor;                                    //@synthesize iconForegroundColor=_iconForegroundColor - In the implementation block
@property (assign,nonatomic) BOOL iconForegroundColorFollowsTintColor;                         //@synthesize iconForegroundColorFollowsTintColor=_iconForegroundColorFollowsTintColor - In the implementation block
@property (assign,nonatomic) double iconAlpha;                                                 //@synthesize iconAlpha=_iconAlpha - In the implementation block
@property (nonatomic,retain) HUIconCellContentMetrics * contentMetrics;                        //@synthesize contentMetrics=_contentMetrics - In the implementation block
@property (assign,nonatomic) unsigned long long iconDisplayStyle;                              //@synthesize iconDisplayStyle=_iconDisplayStyle - In the implementation block
@property (assign,nonatomic) BOOL iconTintColorFollowsDisabledState;                           //@synthesize iconTintColorFollowsDisabledState=_iconTintColorFollowsDisabledState - In the implementation block
@property (assign,nonatomic) BOOL separatorInsetLinesUpWithText;                               //@synthesize separatorInsetLinesUpWithText=_separatorInsetLinesUpWithText - In the implementation block
@property (assign,nonatomic) BOOL disableContinuousIconAnimation; 
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                  //@synthesize disabled=_disabled - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)prepareForReuse;
-(BOOL)isDisabled;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setDisabled:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(HUIconView *)iconView;
-(void)setIconView:(HUIconView *)arg1 ;
-(void)_updateIcon;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setHideIcon:(BOOL)arg1 ;
-(void)setIconDisplayStyle:(unsigned long long)arg1 ;
-(HUIconCellContentMetrics *)contentMetrics;
-(void)setSeparatorInsetLinesUpWithText:(BOOL)arg1 ;
-(void)setContentMetrics:(HUIconCellContentMetrics *)arg1 ;
-(unsigned long long)iconDisplayStyle;
-(void)setIconForegroundColorFollowsTintColor:(BOOL)arg1 ;
-(void)setIconForegroundColor:(UIColor *)arg1 ;
-(void)setIconTintColorFollowsDisabledState:(BOOL)arg1 ;
-(void)setDynamicConstraints:(NSArray *)arg1 ;
-(NSArray *)staticConstraints;
-(void)setStaticConstraints:(NSArray *)arg1 ;
-(NSArray *)dynamicConstraints;
-(void)setDisableContinuousIconAnimation:(BOOL)arg1 ;
-(BOOL)disableContinuousIconAnimation;
-(void)setIconAlpha:(double)arg1 ;
-(BOOL)hideIcon;
-(void)_createIconView;
-(void)_invalidateDynamicConstraints;
-(NSArray *)iconSpacingConstraints;
-(UILayoutGuide *)iconSpacingLayoutGuide;
-(void)setIconSpacingConstraints:(NSArray *)arg1 ;
-(id)_verticalConstraintsForContentSubview:(id)arg1 ;
-(BOOL)separatorInsetLinesUpWithText;
-(BOOL)iconTintColorFollowsDisabledState;
-(BOOL)iconForegroundColorFollowsTintColor;
-(UIColor *)iconForegroundColor;
-(double)iconAlpha;
-(void)setIconSpacingLayoutGuide:(UILayoutGuide *)arg1 ;
@end

