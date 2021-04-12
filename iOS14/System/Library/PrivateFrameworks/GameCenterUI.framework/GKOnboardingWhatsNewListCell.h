/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, NSArray;

@interface GKOnboardingWhatsNewListCell : UIView {

	unsigned long long _currentCellType;
	UIImageView* _icon;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	NSArray* _normalConstraints;
	NSArray* _axConstraints;

}

@property (nonatomic,retain) UIImageView * icon;                                //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                           //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) NSArray * normalConstraints;                       //@synthesize normalConstraints=_normalConstraints - In the implementation block
@property (nonatomic,retain) NSArray * axConstraints;                           //@synthesize axConstraints=_axConstraints - In the implementation block
@property (nonatomic,readonly) unsigned long long currentCellType;              //@synthesize currentCellType=_currentCellType - In the implementation block
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)icon;
-(void)setIcon:(UIImageView *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setupLabels;
-(void)createConstarints;
-(unsigned long long)currentCellType;
-(NSArray *)normalConstraints;
-(void)setNormalConstraints:(NSArray *)arg1 ;
-(NSArray *)axConstraints;
-(void)setAxConstraints:(NSArray *)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

