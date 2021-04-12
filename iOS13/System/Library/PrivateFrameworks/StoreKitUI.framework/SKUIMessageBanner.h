/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SKUIMessageBannerDelegate;
@class UILabel, UIButton, UIView, NSAttributedString, NSString;

@interface SKUIMessageBanner : UIView {

	id<SKUIMessageBannerDelegate> _delegate;
	UILabel* _label;
	UIButton* _button;
	UIView* _borderView;
	UIButton* _clearButton;
	NSAttributedString* _attributedMessage;

}

@property (assign,nonatomic,__weak) id<SKUIMessageBannerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * message; 
@property (nonatomic,retain) NSAttributedString * attributedMessage;                     //@synthesize attributedMessage=_attributedMessage - In the implementation block
@property (assign,nonatomic) BOOL showsClearButton; 
-(id<SKUIMessageBannerDelegate>)delegate;
-(void)setDelegate:(id<SKUIMessageBannerDelegate>)arg1 ;
-(id)value;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_buttonAction:(id)arg1 ;
-(void)setAttributedMessage:(NSAttributedString *)arg1 ;
-(void)setShowsClearButton:(BOOL)arg1 ;
-(BOOL)showsClearButton;
-(void)_clearButtonAction:(id)arg1 ;
-(NSAttributedString *)attributedMessage;
@end

