/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CPSBannerView.h>

@class UIStackView, CPUIBannerViewButton, UIImageView, CPSAbridgableLabel;

@interface CPSGuidanceBannerView : CPSBannerView {

	UIStackView* _labelStackView;
	CPUIBannerViewButton* _actionButton;
	UIImageView* _applicationIconImageView;
	UIImageView* _guidanceImageView;
	CPSAbridgableLabel* _guidanceTextLabel;
	CPSAbridgableLabel* _guidanceDetailTextLabel;
	long long _currentInterfaceStyle;

}

@property (nonatomic,retain) UIStackView * labelStackView;                              //@synthesize labelStackView=_labelStackView - In the implementation block
@property (nonatomic,retain) CPUIBannerViewButton * actionButton;                       //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) UIImageView * applicationIconImageView;                    //@synthesize applicationIconImageView=_applicationIconImageView - In the implementation block
@property (nonatomic,retain) UIImageView * guidanceImageView;                           //@synthesize guidanceImageView=_guidanceImageView - In the implementation block
@property (nonatomic,retain) CPSAbridgableLabel * guidanceTextLabel;                    //@synthesize guidanceTextLabel=_guidanceTextLabel - In the implementation block
@property (nonatomic,retain) CPSAbridgableLabel * guidanceDetailTextLabel;              //@synthesize guidanceDetailTextLabel=_guidanceDetailTextLabel - In the implementation block
@property (assign,nonatomic) long long currentInterfaceStyle;                           //@synthesize currentInterfaceStyle=_currentInterfaceStyle - In the implementation block
-(void)_updateLabels;
-(CPUIBannerViewButton *)actionButton;
-(void)setActionButton:(CPUIBannerViewButton *)arg1 ;
-(UIStackView *)labelStackView;
-(void)setLabelStackView:(UIStackView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithBannerItem:(id)arg1 ;
-(void)_setGuidanceImageViewForImageSet:(id)arg1 ;
-(void)_updateBannerSelectedState;
-(UIImageView *)applicationIconImageView;
-(void)updateBannerWithBannerItem:(id)arg1 ;
-(void)setApplicationIconImageView:(UIImageView *)arg1 ;
-(UIImageView *)guidanceImageView;
-(void)setGuidanceImageView:(UIImageView *)arg1 ;
-(CPSAbridgableLabel *)guidanceTextLabel;
-(void)setGuidanceTextLabel:(CPSAbridgableLabel *)arg1 ;
-(CPSAbridgableLabel *)guidanceDetailTextLabel;
-(void)setGuidanceDetailTextLabel:(CPSAbridgableLabel *)arg1 ;
-(long long)currentInterfaceStyle;
-(void)setCurrentInterfaceStyle:(long long)arg1 ;
@end

