/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<SKUIEditorialLinkViewDelegate>)delegate;
-(void)setDelegate:(id<SKUIEditorialLinkViewDelegate>)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(id)_newButton;
-(long long)horizontalAlignment;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)_linkButtonAction:(id)arg1 ;
-(void)setLinkLayout:(SKUIEditorialLinkLayout *)arg1 ;
-(SKUIEditorialLinkLayout *)linkLayout;
@end

