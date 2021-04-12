/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)fontOfSize:(double)arg1 ;
-(void)resetLocale;
-(id)lightFontOfSize:(double)arg1 ;
-(id)lossColor;
-(id)gainColor;
-(id)chartHighlightColor;
-(id)boldFontOfSize:(double)arg1 ;
-(id)mediumFontOfSize:(double)arg1 ;
@end

