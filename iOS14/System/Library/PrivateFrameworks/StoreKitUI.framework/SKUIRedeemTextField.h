/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackdropBackground:(BOOL)arg1 ;
-(void)setSuppressBorder:(BOOL)arg1 ;
-(BOOL)backdropBackground;
-(BOOL)suppressBorder;
@end

