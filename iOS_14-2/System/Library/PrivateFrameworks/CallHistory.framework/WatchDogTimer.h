/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CHLogger.h>

@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface WatchDogTimer : CHLogger {

	NSString* _name;
	NSObject*<OS_dispatch_source> _timer;

}
-(void)cancel;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 withName:(id)arg2 withTimeout:(double)arg3 withCallback:(/*^block*/id)arg4 ;
@end

