/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable;

@interface CSOpportuneSpeakBehaviorMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                         //@synthesize observers=_observers - In the implementation block
+(id)sharedInstance;
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(id)init;
-(void)notifyWillStartStreamWithContext:(id)arg1 audioProviderUUID:(id)arg2 option:(id)arg3 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)notifyDidStartStreamWithContext:(id)arg1 audioProviderUUID:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 ;
-(void)notifyWillStopStream:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)notifyDidStopStream:(id)arg1 ;
@end

