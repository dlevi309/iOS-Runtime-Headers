/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)updateState:(BOOL)arg1 ;
-(unsigned long long)supportedEvents;
-(unsigned long long)addTag:(id)arg1 ;
-(AWNotification_sRef)notifySupportedEventsChangedWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)cancelNotification:(AWNotification_sRef)arg1 ;
-(id)tagForIndex:(unsigned long long)arg1 ;
-(void)incrementTagIndexRefCount:(unsigned long long)arg1 ;
-(void)decrementTagIndexRefCount:(unsigned long long)arg1 ;
@end

