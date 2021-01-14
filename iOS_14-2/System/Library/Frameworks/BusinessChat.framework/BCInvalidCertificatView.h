/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(void)setHost:(NSString *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)host;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(UILabel *)messageLabel;
-(void)setupSubviews;
-(id)initWithHost:(id)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(void)setupConstraints;
-(void)setInsecureIcon:(UIImageView *)arg1 ;
-(UIImageView *)insecureIcon;
@end

