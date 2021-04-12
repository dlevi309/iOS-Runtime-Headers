/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface SKUIDonationResultView : UIView {

	UIImageView* _imageView;
	UILabel* _messageLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)layoutSubviews;
-(NSString *)title;
@end

