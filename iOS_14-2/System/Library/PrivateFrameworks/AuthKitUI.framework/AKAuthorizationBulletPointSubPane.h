/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <AuthKitUI/AKAuthorizationSubPane.h>

@class UIView, UIImageView, UIStackView, UILabel, UIImage, NSString;

@interface AKAuthorizationBulletPointSubPane : AKAuthorizationSubPane {

	UIView* _baseView;
	UIImageView* _bulletImageView;
	UIStackView* _messageStackView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;

}

@property (nonatomic,readonly) UIView * baseView;                           //@synthesize baseView=_baseView - In the implementation block
@property (nonatomic,readonly) UIImageView * bulletImageView;               //@synthesize bulletImageView=_bulletImageView - In the implementation block
@property (nonatomic,readonly) UIStackView * messageStackView;              //@synthesize messageStackView=_messageStackView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * messageLabel;                      //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * message; 
-(UILabel *)titleLabel;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(UILabel *)messageLabel;
-(id)_verticalStackView;
-(id)_iconColor;
-(UIView *)baseView;
-(NSString *)title;
-(void)addToConstraints:(id)arg1 context:(id)arg2 ;
-(id)_imageViewWithImage:(id)arg1 ;
-(id)_labelWithString:(id)arg1 title:(BOOL)arg2 ;
-(CGSize)_sizeForBulletImage:(id)arg1 ;
-(id)initWithImage:(id)arg1 title:(id)arg2 message:(id)arg3 ;
-(UIImageView *)bulletImageView;
-(UIStackView *)messageStackView;
@end

