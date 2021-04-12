/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

