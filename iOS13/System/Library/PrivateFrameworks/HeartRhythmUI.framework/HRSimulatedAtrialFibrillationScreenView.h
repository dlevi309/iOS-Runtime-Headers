/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIView;

@interface HRSimulatedAtrialFibrillationScreenView : UIView {

	UIImageView* _quickLookIconView;
	UILabel* _quickLookTitleLabel;
	UILabel* _quickLookSubtitleLabel;
	UIView* _quickLookTitleContainer;
	UIView* _quickLookSubtitleContainer;

}

@property (nonatomic,retain) UIImageView * quickLookIconView;                  //@synthesize quickLookIconView=_quickLookIconView - In the implementation block
@property (nonatomic,retain) UILabel * quickLookTitleLabel;                    //@synthesize quickLookTitleLabel=_quickLookTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * quickLookSubtitleLabel;                 //@synthesize quickLookSubtitleLabel=_quickLookSubtitleLabel - In the implementation block
@property (nonatomic,retain) UIView * quickLookTitleContainer;                 //@synthesize quickLookTitleContainer=_quickLookTitleContainer - In the implementation block
@property (nonatomic,retain) UIView * quickLookSubtitleContainer;              //@synthesize quickLookSubtitleContainer=_quickLookSubtitleContainer - In the implementation block
-(id)init;
-(void)_setUpSubviews;
-(void)_layoutQuickLook;
-(id)_systemRedColor;
-(UIImageView *)quickLookIconView;
-(void)setQuickLookIconView:(UIImageView *)arg1 ;
-(UILabel *)quickLookTitleLabel;
-(void)setQuickLookTitleLabel:(UILabel *)arg1 ;
-(UILabel *)quickLookSubtitleLabel;
-(void)setQuickLookSubtitleLabel:(UILabel *)arg1 ;
-(UIView *)quickLookTitleContainer;
-(void)setQuickLookTitleContainer:(UIView *)arg1 ;
-(UIView *)quickLookSubtitleContainer;
-(void)setQuickLookSubtitleContainer:(UIView *)arg1 ;
@end

