/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SKUIMessageBannerDelegate>)delegate;
-(void)setDelegate:(id<SKUIMessageBannerDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)value;
-(void)setAttributedMessage:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedMessage;
-(void)_buttonAction:(id)arg1 ;
-(void)setShowsClearButton:(BOOL)arg1 ;
-(BOOL)showsClearButton;
-(void)_clearButtonAction:(id)arg1 ;
@end

