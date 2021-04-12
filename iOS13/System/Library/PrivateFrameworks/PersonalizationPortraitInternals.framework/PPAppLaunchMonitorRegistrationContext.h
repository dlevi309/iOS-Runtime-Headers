/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_queue;
@class NSNumber, NSObject;

@interface PPAppLaunchMonitorRegistrationContext : NSObject {

	NSNumber* _token;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) NSNumber * token;                                //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id handler;                                      //@synthesize handler=_handler - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(id)handler;
-(NSNumber *)token;
-(id)initWithToken:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

