/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UITableViewHeaderFooterView, UICollectionViewTableLayout, UICollectionViewTableLayoutAttributes, UIColor, UILabel, UIView;

@interface UICollectionViewTableHeaderFooterView : UICollectionReusableView {

	BOOL _floating;
	UITableViewHeaderFooterView* _tableViewHeaderFooterView;

}

@property (nonatomic,retain) UITableViewHeaderFooterView * tableViewHeaderFooterView;                                        //@synthesize tableViewHeaderFooterView=_tableViewHeaderFooterView - In the implementation block
@property (getter=_tableLayout,nonatomic,readonly) UICollectionViewTableLayout * tableLayout; 
@property (getter=_tableAttributes,nonatomic,readonly) UICollectionViewTableLayoutAttributes * tableAttributes; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,retain) UIView * backgroundView; 
@property (assign,nonatomic) BOOL floating;                                                                                  //@synthesize floating=_floating - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(void)_commonInit;
-(UIView *)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UILabel *)textLabel;
-(id)_tableLayout;
-(void)applyLayoutAttributes:(id)arg1 ;
-(id)_tableAttributes;
-(UILabel *)detailTextLabel;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setTableViewHeaderFooterView:(UITableViewHeaderFooterView *)arg1 ;
-(UITableViewHeaderFooterView *)tableViewHeaderFooterView;
-(BOOL)floating;
-(void)setFloating:(BOOL)arg1 ;
@end

