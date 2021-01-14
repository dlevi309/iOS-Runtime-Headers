/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class WAEndReason;

@interface WASessionEndData : NSObject <AADataEventType> {

	WAEndReason* _endReason;

}

@property (nonatomic,readonly) WAEndReason * endReason;              //@synthesize endReason=_endReason - In the implementation block
+(id)dataName;
-(WAEndReason *)endReason;
-(id)toDict;
-(id)initWithEndReason:(id)arg1 ;
@end

