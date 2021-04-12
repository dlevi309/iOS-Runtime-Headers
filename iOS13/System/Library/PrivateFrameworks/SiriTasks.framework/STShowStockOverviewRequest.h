/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSString, NSNumber;

@interface STShowStockOverviewRequest : AFSiriRequest {

	NSString* _name;
	NSString* _symbol;
	NSString* _exchange;
	NSNumber* _price;
	NSNumber* _high;
	NSNumber* _low;
	NSNumber* _change;
	NSNumber* _changePercent;
	NSString* _chartData;

}
+(BOOL)supportsSecureCoding;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)symbol;
-(id)price;
-(id)high;
-(id)low;
-(id)chartData;
-(id)createResponse;
-(id)change;
-(id)changePercent;
-(id)exchange;
-(id)_initWithName:(id)arg1 symbol:(id)arg2 exchange:(id)arg3 price:(id)arg4 high:(id)arg5 low:(id)arg6 change:(id)arg7 changePercent:(id)arg8 chartData:(id)arg9 ;
@end

