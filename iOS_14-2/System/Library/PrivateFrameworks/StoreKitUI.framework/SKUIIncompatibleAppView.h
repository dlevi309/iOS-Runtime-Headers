/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIView.h>

@class NSMutableArray, UIImageView, UILabel, NSString, UIImage;

@interface SKUIIncompatibleAppView : UIView {

	NSMutableArray* _buttons;
	UIImageView* _iconView;
	UILabel* _messageLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIImage * iconImage; 
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(UIImage *)iconImage;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setIconImage:(UIImage *)arg1 ;
-(id)addButtonWithTitle:(id)arg1 ;
-(NSString *)title;
-(void)removeButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
@end

