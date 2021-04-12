/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UITextField.h>

@class UIView;

@interface SKUIRedeemTextField : UITextField {

	UIView* _bottomBorderView;
	UIView* _topBorderView;
	UIView* _backdropView;
	BOOL _backdropBackground;
	BOOL _suppressBorder;

}

@property (assign,nonatomic) BOOL backdropBackground;              //@synthesize backdropBackground=_backdropBackground - In the implementation block
@property (assign,nonatomic) BOOL suppressBorder;                  //@synthesize suppressBorder=_suppressBorder - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(void)setBackdropBackground:(BOOL)arg1 ;
-(void)setSuppressBorder:(BOOL)arg1 ;
-(BOOL)backdropBackground;
-(BOOL)suppressBorder;
@end

