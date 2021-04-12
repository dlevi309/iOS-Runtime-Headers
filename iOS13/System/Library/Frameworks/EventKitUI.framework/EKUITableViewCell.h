/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIVisualEffectView, RowSeparatorView, UIColor, UIVisualEffect;

@interface EKUITableViewCell : UITableViewCell {

	UIVisualEffectView* _rowSeparatorParentView;
	RowSeparatorView* _separatorViewForNonOpaqueTables;
	BOOL _drawsOwnRowSeparators;
	BOOL _usesInsetMargin;
	UIColor* _rowSeparatorColor;
	UIVisualEffect* _rowSeparatorVisualEffect;

}

@property (assign,nonatomic) BOOL drawsOwnRowSeparators;                             //@synthesize drawsOwnRowSeparators=_drawsOwnRowSeparators - In the implementation block
@property (nonatomic,retain) UIColor * rowSeparatorColor;                            //@synthesize rowSeparatorColor=_rowSeparatorColor - In the implementation block
@property (nonatomic,retain) UIVisualEffect * rowSeparatorVisualEffect;              //@synthesize rowSeparatorVisualEffect=_rowSeparatorVisualEffect - In the implementation block
@property (assign,nonatomic) BOOL usesInsetMargin;                                   //@synthesize usesInsetMargin=_usesInsetMargin - In the implementation block
+(id)reuseIdentifier;
+(BOOL)vibrant;
+(double)rowSeparatorThickness;
-(void)layoutSubviews;
-(void)setDrawsOwnRowSeparators:(BOOL)arg1 ;
-(BOOL)drawsOwnRowSeparators;
-(void)setRowSeparatorColor:(UIColor *)arg1 ;
-(void)setUsesInsetMargin:(BOOL)arg1 ;
-(void)_layoutSeparator;
-(BOOL)usesInsetMargin;
-(void)_setMarginExtendsToFullWidth:(BOOL)arg1 ;
-(UIVisualEffect *)rowSeparatorVisualEffect;
-(UIColor *)rowSeparatorColor;
-(void)setRowSeparatorVisualEffect:(UIVisualEffect *)arg1 ;
@end

