/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSNumber;

@interface WALocationListPositionData : NSObject <AADataEventType> {

	NSNumber* _position;

}

@property (nonatomic,readonly) NSNumber * position;              //@synthesize position=_position - In the implementation block
+(id)dataName;
-(NSNumber *)position;
-(id)toDict;
-(id)initWithPosition:(id)arg1 ;
@end

