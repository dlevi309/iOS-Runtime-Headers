/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIColor, SUTableCellContentView, SUItemOfferButton, UIBezierPath, SUCellConfiguration;

@interface SUTableCell : UITableViewCell {

	UIColor* _bottomBorderColor;
	SUTableCellContentView* _configurationView;
	unsigned _hideHighlight : 1;
	SUItemOfferButton* _itemOfferButton;
	SCD_Struct_SU4 _position;
	UIColor* _topBorderColor;
	long long _editState;

}

@property (nonatomic,retain) UIColor * bottomBorderColor;                               //@synthesize bottomBorderColor=_bottomBorderColor - In the implementation block
@property (assign,nonatomic) int clipCorners; 
@property (nonatomic,readonly) UIBezierPath * clippingPath; 
@property (nonatomic,retain) SUCellConfiguration * configuration; 
@property (assign,nonatomic) BOOL drawAsDisabled; 
@property (assign,nonatomic) BOOL highlightsOnlyContentView; 
@property (nonatomic,retain,readonly) SUItemOfferButton * itemOfferButton; 
@property (assign,nonatomic) SCD_Struct_SU4 position;                                   //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) BOOL showHighlight; 
@property (nonatomic,retain) UIColor * topBorderColor;                                  //@synthesize topBorderColor=_topBorderColor - In the implementation block
@property (assign,nonatomic) BOOL usesSubviews; 
@property (assign,nonatomic) long long editState;                                       //@synthesize editState=_editState - In the implementation block
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(SCD_Struct_SU4)position;
-(BOOL)_canDrawContent;
-(void)setClipCorners:(int)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setShowingDeleteConfirmation:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(SUCellConfiguration *)configuration;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPosition:(SCD_Struct_SU4)arg1 ;
-(int)clipCorners;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)setConfiguration:(SUCellConfiguration *)arg1 ;
-(void)setTopBorderColor:(UIColor *)arg1 ;
-(UIColor *)topBorderColor;
-(void)setBottomBorderColor:(UIColor *)arg1 ;
-(SUItemOfferButton *)itemOfferButton;
-(UIColor *)bottomBorderColor;
-(BOOL)highlightsOnlyContentView;
-(BOOL)drawAsDisabled;
-(void)setDrawAsDisabled:(BOOL)arg1 ;
-(void)setHighlightsOnlyContentView:(BOOL)arg1 ;
-(BOOL)usesSubviews;
-(id)copyPurchaseAnimationView;
-(void)setEditState:(long long)arg1 ;
-(UIBezierPath *)clippingPath;
-(void)setShowHighlight:(BOOL)arg1 ;
-(void)setUsesSubviews:(BOOL)arg1 ;
-(BOOL)showHighlight;
-(long long)editState;
@end

