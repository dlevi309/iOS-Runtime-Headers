/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, NSString, UIImageView, UILabel, NSArray;

@interface AKBasicLoginContentViewControllerContainerView : UIView {

	UIImage* _bannerImage;
	NSString* _titleText;
	NSString* _messageText;
	UIImageView* _bannerView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	NSArray* _activeConstraints;

}

@property (nonatomic,retain) UIImageView * bannerView;                 //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                   //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;              //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (nonatomic,retain) UIImage * bannerImage;                    //@synthesize bannerImage=_bannerImage - In the implementation block
@property (nonatomic,copy) NSString * titleText;                       //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * messageText;                     //@synthesize messageText=_messageText - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
-(NSString *)titleText;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(void)_configureMessageLabel;
-(void)_configureBannerImage;
-(void)setBannerImage:(UIImage *)arg1 ;
-(UIImage *)bannerImage;
-(UIImageView *)bannerView;
-(void)setBannerView:(UIImageView *)arg1 ;
@end

