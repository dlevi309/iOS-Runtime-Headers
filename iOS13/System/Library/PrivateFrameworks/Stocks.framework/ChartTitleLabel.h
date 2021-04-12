/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKitCore/UIView.h>

@class LabelSequenceView, Stock;

@interface ChartTitleLabel : UIView {

	LabelSequenceView* _leftView;
	LabelSequenceView* _rightView;
	double _width;
	Stock* _stock;
	Stock* _deferredStock;

}
-(id)init;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_stockWillBeRemoved:(id)arg1 ;
-(void)prepareStringsWithStock:(id)arg1 width:(double)arg2 ;
-(void)setLabelsHidden:(BOOL)arg1 ;
-(void)prepareStringsForDeferredStockIfNeeded;
@end

