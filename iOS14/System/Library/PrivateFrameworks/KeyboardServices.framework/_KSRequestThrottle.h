/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)debugIdentifier;
-(void)_launch;
-(id)initWithCurve:(/*^block*/id)arg1 maximumDelay:(double)arg2 ;
-(void)postRequest:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

