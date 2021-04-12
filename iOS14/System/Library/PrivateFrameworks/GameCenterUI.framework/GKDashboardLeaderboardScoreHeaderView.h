/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, GKTimeScopeButton, NSString;

@interface GKDashboardLeaderboardScoreHeaderView : UICollectionReusableView {

	id _timeScopeTarget;
	SEL _timeScopeAction;
	UILabel* _titleLabel;
	GKTimeScopeButton* _timeScopeButton;

}

@property (assign,nonatomic) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) GKTimeScopeButton * timeScopeButton;              //@synthesize timeScopeButton=_timeScopeButton - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) long long timeScope; 
@property (assign,nonatomic) id timeScopeTarget;                               //@synthesize timeScopeTarget=_timeScopeTarget - In the implementation block
@property (assign,nonatomic) SEL timeScopeAction;                              //@synthesize timeScopeAction=_timeScopeAction - In the implementation block
+(double)defaultHeight;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTimeScope:(long long)arg1 ;
-(long long)timeScope;
-(void)setTitle:(NSString *)arg1 ;
-(id)timeScopeTarget;
-(SEL)timeScopeAction;
-(void)setTimeScopeTarget:(id)arg1 ;
-(void)setTimeScopeAction:(SEL)arg1 ;
-(GKTimeScopeButton *)timeScopeButton;
-(void)awakeFromNib;
-(void)timeScopePressed:(id)arg1 ;
-(void)setTimeScopeButton:(GKTimeScopeButton *)arg1 ;
-(NSString *)title;
@end

