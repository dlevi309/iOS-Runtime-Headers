/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, HKBadge, _WDRoundedCornerView, NSLayoutConstraint;

@interface WDBadgedTableViewCell : UITableViewCell {

	UILabel* _titleLabel;
	HKBadge* _badge;
	UILabel* _badgeLabel;
	_WDRoundedCornerView* _badgeView;
	NSLayoutConstraint* _badgeViewToAccessoryViewConstraint;

}

@property (nonatomic,retain) UILabel * badgeLabel;                                                 //@synthesize badgeLabel=_badgeLabel - In the implementation block
@property (nonatomic,retain) _WDRoundedCornerView * badgeView;                                     //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * badgeViewToAccessoryViewConstraint;              //@synthesize badgeViewToAccessoryViewConstraint=_badgeViewToAccessoryViewConstraint - In the implementation block
@property (nonatomic,readonly) BOOL _shouldShowBadge; 
@property (nonatomic,readonly) UILabel * titleLabel;                                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy) HKBadge * badge;                                                        //@synthesize badge=_badge - In the implementation block
+(id)defaultReuseIdentifier;
-(void)prepareForReuse;
-(void)setBadge:(HKBadge *)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraints;
-(void)setAccessoryView:(id)arg1 ;
-(void)setAccessoryType:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(_WDRoundedCornerView *)badgeView;
-(HKBadge *)badge;
-(void)setBadgeView:(_WDRoundedCornerView *)arg1 ;
-(BOOL)_shouldShowBadge;
-(void)_updateForCurrentSizeCategory;
-(void)_setUpConstraints;
-(void)_setUpSubviews;
-(UILabel *)badgeLabel;
-(void)setBadgeLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)badgeViewToAccessoryViewConstraint;
-(void)setBadgeViewToAccessoryViewConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_setBadge:(id)arg1 ;
@end

