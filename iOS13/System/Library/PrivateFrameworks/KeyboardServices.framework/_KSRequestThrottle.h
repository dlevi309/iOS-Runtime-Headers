/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface _KSRequestThrottle : NSObject {

	/*^block*/id _curveFunction;
	double _maximum;
	/*^block*/id _request;
	int _retryCount;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _debugIdentifier;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * debugIdentifier;                        //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)debugIdentifier;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(void)_launch;
-(void)postRequest:(/*^block*/id)arg1 ;
-(id)initWithCurve:(/*^block*/id)arg1 maximumDelay:(double)arg2 ;
@end

