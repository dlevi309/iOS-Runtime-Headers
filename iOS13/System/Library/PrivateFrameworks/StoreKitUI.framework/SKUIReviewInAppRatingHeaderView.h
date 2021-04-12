/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIImageView, UILabel, SKUIStarRatingControl;

@interface SKUIReviewInAppRatingHeaderView : UIView {

	BOOL _completed;
	NSString* _title;
	NSString* _message;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	SKUIStarRatingControl* _ratingView;
	CGSize _contentSize;

}

@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                          //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) SKUIStarRatingControl * ratingView;              //@synthesize ratingView=_ratingView - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                              //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) BOOL completed;                                  //@synthesize completed=_completed - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)contentSize;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(BOOL)completed;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(UILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 icon:(id)arg3 ;
-(id)_titleLabelFont;
-(id)_messageLabelFont;
-(SKUIStarRatingControl *)ratingView;
-(void)setCompletedWithRating:(long long)arg1 ;
-(void)setRatingView:(SKUIStarRatingControl *)arg1 ;
@end

