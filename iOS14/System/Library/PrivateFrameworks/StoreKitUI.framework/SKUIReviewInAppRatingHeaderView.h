/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(void)setMessage:(NSString *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)message;
-(CGSize)intrinsicContentSize;
-(id)_messageLabelFont;
-(UIImageView *)imageView;
-(BOOL)completed;
-(CGSize)contentSize;
-(void)setTitle:(NSString *)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(UILabel *)messageLabel;
-(void)setCompleted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_titleLabelFont;
-(NSString *)title;
-(void)setRatingView:(SKUIStarRatingControl *)arg1 ;
-(SKUIStarRatingControl *)ratingView;
-(id)initWithTitle:(id)arg1 message:(id)arg2 icon:(id)arg3 ;
-(void)setCompletedWithRating:(long long)arg1 ;
@end

