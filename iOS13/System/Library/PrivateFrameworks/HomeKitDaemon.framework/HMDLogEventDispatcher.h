/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable;

@interface HMDLogEventDispatcher : HMFObject {

	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMapTable* _logEventObserversByEventType;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;               //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSMapTable * logEventObserversByEventType;              //@synthesize logEventObserversByEventType=_logEventObserversByEventType - In the implementation block
+(void)initialize;
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)submitLogEvent:(id)arg1 ;
-(void)submitLogEvent:(id)arg1 error:(id)arg2 ;
-(NSMapTable *)logEventObserversByEventType;
-(void)addObserver:(id)arg1 forEventType:(id)arg2 ;
-(void)addObserver:(id)arg1 forEventTypes:(id)arg2 ;
-(void)removeObserver:(id)arg1 forEventType:(id)arg2 ;
@end

