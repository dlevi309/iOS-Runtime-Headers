/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <UIKitCore/UIView.h>

@class UIImage, UIImageView, UIStackView, UILabel;

@interface AKAuthorizationFirstTimeView : UIView {

	UIImage* _image;
	UIImage* _title;
	UIImage* _message;
	UIImageView* _imageView;
	UIStackView* _stackView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;

}

@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;              //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * messageLabel;               //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,copy,readonly) UIImage * image;                 //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) UIImage * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) UIImage * message;               //@synthesize message=_message - In the implementation block
-(UIImage *)title;
-(UIImage *)image;
-(UIImage *)message;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(UIStackView *)stackView;
-(id)_iconColor;
-(UILabel *)messageLabel;
-(id)_imageViewWithImage:(id)arg1 ;
-(id)_verticalStackView;
-(id)_labelWithString:(id)arg1 title:(BOOL)arg2 ;
-(id)initWithImage:(id)arg1 title:(id)arg2 message:(id)arg3 ;
@end

