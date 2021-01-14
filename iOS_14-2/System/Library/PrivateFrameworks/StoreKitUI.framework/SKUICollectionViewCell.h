/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView, UIColor;

@interface SKUICollectionViewCell : UICollectionViewCell {

	UIView* _bottomBorderView;
	long long _position;
	UIView* _leftBorderView;
	UIView* _rightBorderView;
	UIView* _topBorderView;
	long long _separatorStyle;
	UIColor* _separatorColor;
	UIEdgeInsets _separatorWidths;
	UIEdgeInsets _separatorInsets;

}

@property (assign,nonatomic) long long separatorStyle;                  //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (assign,nonatomic) BOOL showsCellSeparators; 
@property (nonatomic,retain) UIColor * separatorColor;                  //@synthesize separatorColor=_separatorColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets separatorWidths;              //@synthesize separatorWidths=_separatorWidths - In the implementation block
@property (assign,nonatomic) UIEdgeInsets separatorInsets;              //@synthesize separatorInsets=_separatorInsets - In the implementation block
-(void)_setPosition:(long long)arg1 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(long long)separatorStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)arg1 ;
-(UIColor *)separatorColor;
-(void)setSeparatorInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)separatorInsets;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)_showsBottomBorder;
-(BOOL)_showsLeftBorder;
-(BOOL)_showsRightBorder;
-(BOOL)_showsTopBorder;
-(void)_updateBorderVisibility;
-(void)setSeparatorWidths:(UIEdgeInsets)arg1 ;
-(void)setShowsCellSeparators:(BOOL)arg1 ;
-(BOOL)showsCellSeparators;
-(UIEdgeInsets)separatorWidths;
@end

