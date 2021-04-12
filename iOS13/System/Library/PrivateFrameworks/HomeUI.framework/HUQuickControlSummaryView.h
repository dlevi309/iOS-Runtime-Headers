/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HFStringGenerator;
@class HUIconView, UILabel, NSArray, UILayoutGuide;

@interface HUQuickControlSummaryView : UIView {

	HUIconView* _iconView;
	UILabel* _primaryStatusLabel;
	UILabel* _secondaryStatusLabel;
	id<HFStringGenerator> _primaryStatusText;
	id<HFStringGenerator> _secondaryStatusText;
	unsigned long long _contentAlignment;
	long long _sizeSubclass;
	unsigned long long _iconSize;
	NSArray* _contentConstraints;
	UILayoutGuide* _lastBaselineLayoutGuide;

}

@property (assign,nonatomic) unsigned long long iconSize;                          //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,retain) NSArray * contentConstraints;                         //@synthesize contentConstraints=_contentConstraints - In the implementation block
@property (nonatomic,retain) UILayoutGuide * lastBaselineLayoutGuide;              //@synthesize lastBaselineLayoutGuide=_lastBaselineLayoutGuide - In the implementation block
@property (nonatomic,readonly) HUIconView * iconView;                              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,readonly) UILabel * primaryStatusLabel;                       //@synthesize primaryStatusLabel=_primaryStatusLabel - In the implementation block
@property (nonatomic,readonly) UILabel * secondaryStatusLabel;                     //@synthesize secondaryStatusLabel=_secondaryStatusLabel - In the implementation block
@property (nonatomic,copy) id<HFStringGenerator> primaryStatusText;                //@synthesize primaryStatusText=_primaryStatusText - In the implementation block
@property (nonatomic,copy) id<HFStringGenerator> secondaryStatusText;              //@synthesize secondaryStatusText=_secondaryStatusText - In the implementation block
@property (assign,nonatomic) unsigned long long contentAlignment;                  //@synthesize contentAlignment=_contentAlignment - In the implementation block
@property (assign,nonatomic) long long sizeSubclass;                               //@synthesize sizeSubclass=_sizeSubclass - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraints;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(id)lastBaselineAnchor;
-(HUIconView *)iconView;
-(unsigned long long)iconSize;
-(void)setIconSize:(unsigned long long)arg1 ;
-(unsigned long long)contentAlignment;
-(void)setContentAlignment:(unsigned long long)arg1 ;
-(id)_primaryFont;
-(double)_iconWidth;
-(double)_iconHeight;
-(void)setContentConstraints:(NSArray *)arg1 ;
-(NSArray *)contentConstraints;
-(id)_secondaryFont;
-(long long)sizeSubclass;
-(void)setSizeSubclass:(long long)arg1 ;
-(void)_updatePrimaryStatusContent;
-(void)_updateSecondaryStatusContent;
-(void)setLastBaselineLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)lastBaselineLayoutGuide;
-(void)contentSizeCategoryDidChangeNotification;
-(UILabel *)primaryStatusLabel;
-(void)_invalidateContentAndConstraints;
-(id)_statusParagraphStyleWithLineHeight:(double)arg1 ;
-(id<HFStringGenerator>)primaryStatusText;
-(id<HFStringGenerator>)secondaryStatusText;
-(UILabel *)secondaryStatusLabel;
-(id)_primaryFontTextStyle;
-(void)setPrimaryStatusText:(id<HFStringGenerator>)arg1 ;
-(void)setSecondaryStatusText:(id<HFStringGenerator>)arg1 ;
@end

