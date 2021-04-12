/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/


#import <ClockKitUI/ClockKitUI-Structs.h>
@interface CLKUIAlmanacCacheKey : NSObject {

	long long _latitude;
	long long _longitude;
	long long _altitude;
	long long _time;

}

@property (nonatomic,readonly) long long latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) long long longitude;              //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) long long altitude;               //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,readonly) long long time;                   //@synthesize time=_time - In the implementation block
-(long long)latitude;
-(long long)time;
-(long long)altitude;
-(long long)longitude;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLocation:(SCD_Struct_CL1)arg1 altitude:(double)arg2 time:(double)arg3 ;
-(BOOL)matchesLocation:(SCD_Struct_CL1)arg1 altitude:(double)arg2 ;
@end

