/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class UIColor, UIFont;

@interface StocksStyle : NSObject {

	UIColor* _chartHighlightColor;
	UIFont* _mainFont;
	UIFont* _chartLabelFont;

}
+(id)sharedStyle;
-(id)init;
-(void)resetLocale;
-(id)fontOfSize:(double)arg1 ;
-(id)lightFontOfSize:(double)arg1 ;
-(id)lossColor;
-(id)gainColor;
-(id)chartHighlightColor;
-(id)boldFontOfSize:(double)arg1 ;
-(id)mediumFontOfSize:(double)arg1 ;
@end

