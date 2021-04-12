/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UIView.h>

@class UIImage, UIColor, NSString, UIImageView, UILabel, UIView;

@interface HKSimulatedWatchNotificationQuickLookView : UIView {

	UIImage* _iconImage;
	UIColor* _tintColor;
	NSString* _titleLabelText;
	NSString* _detailLabelText;
	UIImageView* _quickLookIconView;
	UILabel* _quickLookTitleLabel;
	UILabel* _quickLookSubtitleLabel;
	UIView* _quickLookTitleContainer;
	UIView* _quickLookSubtitleContainer;

}

@property (nonatomic,retain) UIImage * iconImage;                              //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                              //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) NSString * titleLabelText;                        //@synthesize titleLabelText=_titleLabelText - In the implementation block
@property (nonatomic,retain) NSString * detailLabelText;                       //@synthesize detailLabelText=_detailLabelText - In the implementation block
@property (nonatomic,retain) UIImageView * quickLookIconView;                  //@synthesize quickLookIconView=_quickLookIconView - In the implementation block
@property (nonatomic,retain) UILabel * quickLookTitleLabel;                    //@synthesize quickLookTitleLabel=_quickLookTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * quickLookSubtitleLabel;                 //@synthesize quickLookSubtitleLabel=_quickLookSubtitleLabel - In the implementation block
@property (nonatomic,retain) UIView * quickLookTitleContainer;                 //@synthesize quickLookTitleContainer=_quickLookTitleContainer - In the implementation block
@property (nonatomic,retain) UIView * quickLookSubtitleContainer;              //@synthesize quickLookSubtitleContainer=_quickLookSubtitleContainer - In the implementation block
-(void)setTintColor:(UIColor *)arg1 ;
-(UIImage *)iconImage;
-(void)setDetailLabelText:(NSString *)arg1 ;
-(NSString *)titleLabelText;
-(void)setIconImage:(UIImage *)arg1 ;
-(NSString *)detailLabelText;
-(UIColor *)tintColor;
-(void)_setUpSubviews;
-(void)setTitleLabelText:(NSString *)arg1 ;
-(void)_layoutQuickLook;
-(id)initWithIconImage:(id)arg1 titleText:(id)arg2 detailText:(id)arg3 tintColor:(id)arg4 ;
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

