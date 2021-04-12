/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CPSBannerView.h>

@class SBUIStarkBannerViewButton, UIImageView, CPSAbridgableLabel;

@interface CPSGuidanceBannerView : CPSBannerView {

	SBUIStarkBannerViewButton* _actionButton;
	UIImageView* _applicationIconImageView;
	UIImageView* _guidanceImageView;
	CPSAbridgableLabel* _guidanceTextLabel;
	CPSAbridgableLabel* _guidanceDetailTextLabel;
	long long _currentInterfaceStyle;

}

@property (nonatomic,retain) SBUIStarkBannerViewButton * actionButton;                  //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) UIImageView * applicationIconImageView;                    //@synthesize applicationIconImageView=_applicationIconImageView - In the implementation block
@property (nonatomic,retain) UIImageView * guidanceImageView;                           //@synthesize guidanceImageView=_guidanceImageView - In the implementation block
@property (nonatomic,retain) CPSAbridgableLabel * guidanceTextLabel;                    //@synthesize guidanceTextLabel=_guidanceTextLabel - In the implementation block
@property (nonatomic,retain) CPSAbridgableLabel * guidanceDetailTextLabel;              //@synthesize guidanceDetailTextLabel=_guidanceDetailTextLabel - In the implementation block
@property (assign,nonatomic) long long currentInterfaceStyle;                           //@synthesize currentInterfaceStyle=_currentInterfaceStyle - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(SBUIStarkBannerViewButton *)actionButton;
-(void)setActionButton:(SBUIStarkBannerViewButton *)arg1 ;
-(CPSAbridgableLabel *)guidanceTextLabel;
-(CPSAbridgableLabel *)guidanceDetailTextLabel;
-(void)_setGuidanceImageViewForImageSet:(id)arg1 ;
-(UIImageView *)applicationIconImageView;
-(void)updateBannerWithBannerItem:(id)arg1 ;
-(void)setApplicationIconImageView:(UIImageView *)arg1 ;
-(UIImageView *)guidanceImageView;
-(void)setGuidanceImageView:(UIImageView *)arg1 ;
-(void)setGuidanceTextLabel:(CPSAbridgableLabel *)arg1 ;
-(void)setGuidanceDetailTextLabel:(CPSAbridgableLabel *)arg1 ;
-(long long)currentInterfaceStyle;
-(void)setCurrentInterfaceStyle:(long long)arg1 ;
@end

