/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSArray;

@interface WAFollowingLocationListData : NSObject <AADataEventType> {

	NSArray* _locations;

}

@property (nonatomic,readonly) NSArray * locations;              //@synthesize locations=_locations - In the implementation block
+(id)dataName;
-(NSArray *)locations;
-(id)toDict;
-(id)initWithLocations:(id)arg1 ;
@end

