/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SKUIEditorialLinkViewDelegate;
@class NSMutableArray, UIColor, SKUIEditorialLinkLayout;

@interface SKUIEditorialLinkView : UIView {

	NSMutableArray* _buttons;
	id<SKUIEditorialLinkViewDelegate> _delegate;
	UIColor* _highlightedTextColor;
	long long _horizontalAlignment;
	SKUIEditorialLinkLayout* _layout;
	UIColor* _textColor;

}

@property (assign,nonatomic,__weak) id<SKUIEditorialLinkViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long horizontalAlignment;                                  //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (nonatomic,retain) SKUIEditorialLinkLayout * linkLayout;                           //@synthesize layout=_layout - In the implementation block
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SKUIEditorialLinkViewDelegate>)delegate;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<SKUIEditorialLinkViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)_newButton;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)horizontalAlignment;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(void)dealloc;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)_linkButtonAction:(id)arg1 ;
-(void)setLinkLayout:(SKUIEditorialLinkLayout *)arg1 ;
-(SKUIEditorialLinkLayout *)linkLayout;
@end

