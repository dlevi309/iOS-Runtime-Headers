/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/


@class NSError;

@interface HDAudioAnalyticsResult : NSObject {

	long long _status;
	NSError* _error;

}

@property (nonatomic,readonly) long long status;              //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSError * error;               //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(id)initWithStatus:(long long)arg1 error:(id)arg2 ;
-(long long)status;
@end

