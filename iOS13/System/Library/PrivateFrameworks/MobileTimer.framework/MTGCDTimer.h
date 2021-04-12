/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol OS_dispatch_source;
@class NSObject, MTPowerAssertion;

@interface MTGCDTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	MTPowerAssertion* _powerAssertion;

}
-(void)dealloc;
-(void)cancelTimer;
-(void)startTimer:(double)arg1 block:(/*^block*/id)arg2 ;
@end

