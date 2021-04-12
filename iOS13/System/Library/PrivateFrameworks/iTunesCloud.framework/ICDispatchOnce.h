/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSObject;

@interface ICDispatchOnce : NSObject {

	/*^block*/id _booleanHandler;
	atomic_flag _didFire;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _objectHandler;
	ICDispatchOnce* _strongSelf;
	double _timeout;
	NSObject*<OS_dispatch_source> _timeoutTimer;

}
-(void)_invalidate;
-(void)failWithError:(id)arg1 ;
-(void)startWithTimeout:(double)arg1 queue:(id)arg2 ;
-(id)initWithBooleanHandler:(/*^block*/id)arg1 ;
-(id)initWithObjectHandler:(/*^block*/id)arg1 ;
-(void)finishWithBooleanResult:(BOOL)arg1 error:(id)arg2 ;
-(void)finishWithObjectResult:(id)arg1 error:(id)arg2 ;
-(void)startWithTimeout:(double)arg1 ;
@end

