/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTintColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFloating:(BOOL)arg1 ;
-(BOOL)floating;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(id)_tableLayout;
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)arg1 ;
-(id)_tableAttributes;
-(UILabel *)detailTextLabel;
-(void)setTableViewHeaderFooterView:(UITableViewHeaderFooterView *)arg1 ;
-(UITableViewHeaderFooterView *)tableViewHeaderFooterView;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(UILabel *)textLabel;
-(UIView *)contentView;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(UIColor *)tintColor;
@end

