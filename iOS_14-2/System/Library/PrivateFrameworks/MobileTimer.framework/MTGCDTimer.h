/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol OS_dispatch_source;
@class NSObject, MTPowerAssertion;

@interface MTGCDTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	MTPowerAssertion* _powerAssertion;

}
-(void)startTimer:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)cancelTimer;
-(void)dealloc;
@end

