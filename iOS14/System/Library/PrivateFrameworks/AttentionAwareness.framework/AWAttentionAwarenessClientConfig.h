/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/


@protocol OS_dispatch_queue;
#import <AttentionAwareness/AttentionAwareness-Structs.h>
@class NSObject, NSMutableDictionary;

@interface AWAttentionAwarenessClientConfig : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _notifyToken;
	NSMutableDictionary* _notifyQueues;
	NSMutableDictionary* _notifyBlocks;
	unsigned long long _supportedEvents;
	BOOL _supportedEventsValid;
	unsigned long long _nextTagIndex;
	NSMutableDictionary* _tagMap;
	NSMutableDictionary* _tagRefCount;

}
+(id)sharedClientConfig;
-(unsigned long long)addTag:(id)arg1 ;
-(void)incrementTagIndexRefCount:(unsigned long long)arg1 ;
-(void)updateState:(BOOL)arg1 ;
-(id)init;
-(AWNotification_sRef)notifySupportedEventsChangedWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)cancelNotification:(AWNotification_sRef)arg1 ;
-(void)decrementTagIndexRefCount:(unsigned long long)arg1 ;
-(id)tagForIndex:(unsigned long long)arg1 ;
-(unsigned long long)supportedEvents;
-(void)dealloc;
@end

