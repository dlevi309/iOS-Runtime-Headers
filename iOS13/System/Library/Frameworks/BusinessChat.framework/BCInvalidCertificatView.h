/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/

#import <UIKitCore/UIView.h>

@class NSString, UIImageView, UILabel, UIView;

@interface BCInvalidCertificatView : UIView {

	NSString* _host;
	UIImageView* _insecureIcon;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIView* _contentView;

}

@property (nonatomic,retain) NSString * host;                         //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) UIImageView * insecureIcon;              //@synthesize insecureIcon=_insecureIcon - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                  //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIView * contentView;                    //@synthesize contentView=_contentView - In the implementation block
-(NSString *)host;
-(void)setHost:(NSString *)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithHost:(id)arg1 ;
-(void)setupConstraints;
-(void)setupSubviews;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)setInsecureIcon:(UIImageView *)arg1 ;
-(UIImageView *)insecureIcon;
@end

