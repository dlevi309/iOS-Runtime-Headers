/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)addButtonWithTitle:(id)arg1 ;
-(UIImage *)iconImage;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)removeButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
@end

