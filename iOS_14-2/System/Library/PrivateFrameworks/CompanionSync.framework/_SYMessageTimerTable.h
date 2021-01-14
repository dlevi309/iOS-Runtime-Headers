/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface _SYMessageTimerTable : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _rwlock;
	NSMutableDictionary* _bySeqno;
	NSMutableDictionary* _byIdent;

}

@property (nonatomic,readonly) unsigned long long timerCount; 
-(void)cancelAllTimers;
-(id)init;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 timerCallback:(/*^block*/id)arg2 ;
-(void)setIdentifier:(id)arg1 forSequenceNumber:(unsigned long long)arg2 ;
-(void)cancelTimerForSequenceNumber:(unsigned long long)arg1 ;
-(void)addTimerWithFireDate:(id)arg1 forSequenceNumber:(unsigned long long)arg2 ;
-(void)cancelTimerForIdentifier:(id)arg1 ;
-(unsigned long long)timerCount;
-(void)_fireCallbackForSeqno:(unsigned long long)arg1 ;
-(void)_cleanupTimerForSeqno:(unsigned long long)arg1 ;
@end

