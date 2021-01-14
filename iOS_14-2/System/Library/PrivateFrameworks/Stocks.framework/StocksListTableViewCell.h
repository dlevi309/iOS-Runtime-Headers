/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UILabel, StocksListBoxView, UIImageView, UIView, Stock;

@interface StocksListTableViewCell : UITableViewCell {

	UILabel* _symbolLabel;
	UILabel* _priceLabel;
	UILabel* _boxLabel;
	StocksListBoxView* _boxView;
	UIImageView* _changeSignView;
	UIView* _rowSeparatorView;
	BOOL _shouldStackView;
	Stock* _stock;
	long long _rowDataType;

}

@property (nonatomic,retain) Stock * stock;                      //@synthesize stock=_stock - In the implementation block
@property (assign,nonatomic) long long rowDataType;              //@synthesize rowDataType=_rowDataType - In the implementation block
@property (assign,nonatomic) BOOL shouldStackView;               //@synthesize shouldStackView=_shouldStackView - In the implementation block
+(double)cellHeightForStackStatus:(BOOL)arg1 ;
-(Stock *)stock;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateValues;
-(void)setStock:(Stock *)arg1 ;
-(long long)rowDataType;
-(void)setRowDataType:(long long)arg1 ;
-(void)setShowsRowSeparator:(BOOL)arg1 ;
-(void)setBoxValueFromRowDataType;
-(id)changeSignNegative:(BOOL)arg1 ;
-(void)setBoxContentsAlpha:(double)arg1 includeChangeSign:(BOOL)arg2 ;
-(void)setShouldStackView:(BOOL)arg1 ;
-(CGRect)changeButtonRect;
-(BOOL)shouldStackView;
@end

