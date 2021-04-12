/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@protocol OS_xpc_object;
@class NSString, NSObject;

@interface _NSBackgroundActivityInternal : NSObject {

	NSString* _identifier;
	double _interval;
	double _tolerance;
	double _delay;
	/*^block*/id _activity;
	/*^block*/id _checkInHandler;
	BOOL _repeats;
	BOOL _preregistered;
	BOOL _appRefresh;
	NSObject*<OS_xpc_object> _additionalProperties;
	long long _qualityOfService;
	NSObject*<OS_xpc_object> _currentActivity;

}
-(id)init;
-(void)dealloc;
@end

