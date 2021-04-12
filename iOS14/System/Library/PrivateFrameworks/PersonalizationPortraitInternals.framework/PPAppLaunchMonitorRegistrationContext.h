/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithToken:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(NSNumber *)token;
-(id)handler;
@end

