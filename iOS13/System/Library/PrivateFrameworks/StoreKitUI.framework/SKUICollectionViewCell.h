/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(long long)separatorStyle;
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)_setPosition:(long long)arg1 ;
-(BOOL)_showsBottomBorder;
-(BOOL)_showsLeftBorder;
-(BOOL)_showsRightBorder;
-(BOOL)_showsTopBorder;
-(void)_updateBorderVisibility;
-(void)setSeparatorWidths:(UIEdgeInsets)arg1 ;
-(void)setShowsCellSeparators:(BOOL)arg1 ;
-(BOOL)showsCellSeparators;
-(UIEdgeInsets)separatorWidths;
-(UIEdgeInsets)separatorInsets;
-(void)setSeparatorInsets:(UIEdgeInsets)arg1 ;
@end

