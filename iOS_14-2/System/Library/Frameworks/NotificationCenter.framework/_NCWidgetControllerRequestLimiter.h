/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
*/


@class NSDate;

@interface _NCWidgetControllerRequestLimiter : NSObject {

	NSDate* _lastRequestDate;
	BOOL _isThrottled;
	long long _requestCount;

}
+(id)sharedInstance;
-(BOOL)isRequestPermitted;
@end

