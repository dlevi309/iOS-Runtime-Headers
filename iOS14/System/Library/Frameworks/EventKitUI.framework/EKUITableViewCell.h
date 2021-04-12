/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(double)rowSeparatorThickness;
+(BOOL)vibrant;
+(id)reuseIdentifier;
-(void)setDrawsOwnRowSeparators:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)_layoutSeparator;
-(BOOL)usesInsetMargin;
-(void)_setMarginExtendsToFullWidth:(BOOL)arg1 ;
-(UIVisualEffect *)rowSeparatorVisualEffect;
-(UIColor *)rowSeparatorColor;
-(void)setRowSeparatorVisualEffect:(UIVisualEffect *)arg1 ;
-(void)setUsesInsetMargin:(BOOL)arg1 ;
-(BOOL)drawsOwnRowSeparators;
-(void)setRowSeparatorColor:(UIColor *)arg1 ;
@end

