/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCKeyValueStoreSavePolicy.h>
#import <libobjc.A.dylib/FCAppActivityObserving.h>

@protocol FCBackgroundTaskable, OS_dispatch_queue;
@class NSObject, NSString;

@interface FCKeyValueStoreSavePolicyAppBackground : FCKeyValueStoreSavePolicy <FCAppActivityObserving> {

	id<FCBackgroundTaskable> _backgroundTaskable;
	BOOL _inBackground;
	NSObject*<OS_dispatch_queue> _pendingQueue;
	/*^block*/id _pendingHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)activityObservingApplicationDidEnterBackground;
-(void)activityObservingApplicationWillTerminate;
-(void)scheduleSaveOnQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithActivityMonitor:(id)arg1 backgroundTaskable:(id)arg2 ;
-(void)_saveIfNeeded;
-(void)activityObservingApplicationWillEnterForeground;
@end

