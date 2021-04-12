/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


#import <Stocks/Stocks-Structs.h>
@class ChartLabelInfo, NSMutableArray;

@interface ChartLabelInfoManager : NSObject {

	ChartLabelInfo* _yAxisLabelInfo;
	NSMutableArray* _monthLabelInfoArrays;
	NSMutableArray* _integerLabelInfoArray;
	BOOL _use24hrTime;

}
+(id)sharedLabelInfoManager;
+(CFStringRef)_CFDateFormatterPropertyForMonthLabelLength:(long long)arg1 ;
+(void)clearSharedManager;
+(id)chartLabelFont;
-(id)init;
-(void)dealloc;
-(void)resetLocale;
-(id)labelInfoForYAxis;
-(id)monthLabelInfoArrayForLabelLength:(long long)arg1 ;
-(id)labelInfoWithUnsignedInteger:(unsigned long long)arg1 ;
-(BOOL)use24hrTime;
-(id)labelInfoWithString:(id)arg1 ;
@end

