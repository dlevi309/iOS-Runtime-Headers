/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

