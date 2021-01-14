/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)clearSharedManager;
+(id)sharedLabelInfoManager;
+(CFStringRef)_CFDateFormatterPropertyForMonthLabelLength:(long long)arg1 ;
+(id)chartLabelFont;
-(id)init;
-(void)resetLocale;
-(id)labelInfoForYAxis;
-(BOOL)use24hrTime;
-(id)labelInfoWithUnsignedInteger:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)monthLabelInfoArrayForLabelLength:(long long)arg1 ;
-(id)labelInfoWithString:(id)arg1 ;
@end

