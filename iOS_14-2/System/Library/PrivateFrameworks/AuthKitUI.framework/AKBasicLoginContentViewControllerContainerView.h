/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)viewForLastBaselineLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBannerImage:(UIImage *)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)setBannerView:(UIImageView *)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(UILabel *)messageLabel;
-(void)updateConstraints;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(void)setMessageText:(NSString *)arg1 ;
-(UIImageView *)bannerView;
-(NSString *)messageText;
-(UIImage *)bannerImage;
-(void)_configureMessageLabel;
-(void)_configureBannerImage;
@end

