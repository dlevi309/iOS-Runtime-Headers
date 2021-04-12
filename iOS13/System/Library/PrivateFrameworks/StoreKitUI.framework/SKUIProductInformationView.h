/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SKUIColorScheme, NSArray, NSMutableArray, UIView, UILabel, NSString;

@interface SKUIProductInformationView : UIView {

	SKUIColorScheme* _colorScheme;
	UIEdgeInsets _contentInset;
	NSArray* _informationLines;
	NSMutableArray* _imageValues;
	NSMutableArray* _keyLabels;
	UIView* _separatorView;
	UILabel* _titleLabel;
	NSMutableArray* _valueLabels;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                  //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) NSArray * informationLines;                 //@synthesize informationLines=_informationLines - In the implementation block
@property (assign,nonatomic) BOOL hidesSeparatorView; 
@property (nonatomic,retain) NSString * title; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(void)setHidesSeparatorView:(BOOL)arg1 ;
-(void)setInformationLines:(NSArray *)arg1 ;
-(double)_keyWidth;
-(BOOL)hidesSeparatorView;
-(NSArray *)informationLines;
@end

