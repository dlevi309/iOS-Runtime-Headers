/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
*/

#import <StocksUI/StocksUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TSAXCustomReorderMessaging.h>

@class NSString;

@interface StocksUI.StockView : UIView <TSAXCustomReorderMessaging> {

	 symbolLabel;
	 companyLabel;
	 companyLabelLong;
	 exchangeLabel;
	 priceLabel;
	 priceChangeButton;
	 sparklineView;
	 axElement;
	 isSelected;
	 revision;
	 isEditing;

}

@property (readonly,nonatomic) NSString * tsaxAccessibilityLabelForReordering; 
-(NSString *)tsaxAccessibilityLabelForReordering;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

