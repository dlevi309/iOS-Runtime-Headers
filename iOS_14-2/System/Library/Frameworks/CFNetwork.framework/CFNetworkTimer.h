/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface CFNetworkTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	double _interval;
	double _lastResumeTime;
	double _lastPauseTime;
	double _runTime;
	int _state;

}
-(void)dealloc;
@end

