/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class WACoarseLocationStatus;

@interface WACoarseLocationData : NSObject <AADataEventType> {

	WACoarseLocationStatus* _status;

}

@property (nonatomic,readonly) WACoarseLocationStatus * status;              //@synthesize status=_status - In the implementation block
+(id)dataName;
-(id)toDict;
-(id)initWithStatus:(id)arg1 ;
-(WACoarseLocationStatus *)status;
@end

