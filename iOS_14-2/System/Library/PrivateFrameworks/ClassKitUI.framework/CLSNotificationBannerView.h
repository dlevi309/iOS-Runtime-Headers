/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassKitUI.framework/ClassKitUI
*/

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface CLSNotificationBannerView : UIView {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	double _preferredWidthPad;
	double _duration;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) UIImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                  //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,readonly) double preferredWidthPad;              //@synthesize preferredWidthPad=_preferredWidthPad - In the implementation block
@property (assign,nonatomic) double duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) id completionHandler;                      //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)bundle;
+(BOOL)_preventsAppearanceProxyCustomization;
+(id)bannerTitleAttributes;
+(id)bannerMessageAttributes;
-(UILabel *)titleLabel;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(UIImageView *)imageView;
-(id)initWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 ;
-(void)callCompletionHandler;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(id)completionHandler;
-(UILabel *)messageLabel;
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)layoutSubviews;
-(void)hideBanner;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
-(double)duration;
-(id)initWithTitle:(id)arg1 imageView:(id)arg2 message:(id)arg3 ;
-(double)preferredWidthPad;
@end

