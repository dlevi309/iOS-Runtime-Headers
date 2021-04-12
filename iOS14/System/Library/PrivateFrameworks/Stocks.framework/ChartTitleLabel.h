/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOpaque:(BOOL)arg1 ;
-(id)init;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)_stockWillBeRemoved:(id)arg1 ;
-(void)prepareStringsWithStock:(id)arg1 width:(double)arg2 ;
-(void)setLabelsHidden:(BOOL)arg1 ;
-(void)prepareStringsForDeferredStockIfNeeded;
@end

