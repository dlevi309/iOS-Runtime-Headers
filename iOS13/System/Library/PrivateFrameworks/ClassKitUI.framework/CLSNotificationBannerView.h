/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)duration;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 ;
-(void)hideBanner;
-(void)callCompletionHandler;
-(id)initWithTitle:(id)arg1 imageView:(id)arg2 message:(id)arg3 ;
-(double)preferredWidthPad;
@end

