/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

