/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)price;
-(id)low;
-(id)high;
-(id)chartData;
-(void)encodeWithCoder:(id)arg1 ;
-(id)change;
-(id)createResponse;
-(id)name;
-(id)symbol;
-(id)initWithCoder:(id)arg1 ;
-(id)exchange;
-(id)changePercent;
-(id)_initWithName:(id)arg1 symbol:(id)arg2 exchange:(id)arg3 price:(id)arg4 high:(id)arg5 low:(id)arg6 change:(id)arg7 changePercent:(id)arg8 chartData:(id)arg9 ;
@end

