/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@protocol OS_dispatch_queue;
@class PETEventTracker2, NSObject;

@interface WFEventTracker : NSObject {

	PETEventTracker2* _proactiveTracker;
	NSObject*<OS_dispatch_queue> _loggingQueue;

}

@property (nonatomic,readonly) PETEventTracker2 * proactiveTracker;                    //@synthesize proactiveTracker=_proactiveTracker - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> loggingQueue;              //@synthesize loggingQueue=_loggingQueue - In the implementation block
+(id)sharedTracker;
-(id)init;
-(id)initWithTracker:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)loggingQueue;
-(void)trackEvent:(id)arg1 ;
-(void)trackEvent:(id)arg1 count:(int)arg2 ;
-(PETEventTracker2 *)proactiveTracker;
@end

