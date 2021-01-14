/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

