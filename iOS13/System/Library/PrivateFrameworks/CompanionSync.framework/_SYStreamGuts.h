/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@protocol OS_dispatch_queue, NSStreamDelegate;
#import <CompanionSync/CompanionSync-Structs.h>
@class NSObject, NSError, NSMutableDictionary;

@interface _SYStreamGuts : NSObject {

	CFRunLoopSourceRef _runloopSource;
	unsigned _port;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _handler;
	id<NSStreamDelegate> _delegate;
	NSError* _error;
	unsigned long long _status;
	NSMutableDictionary* _propertyStore;

}
-(void)dealloc;
-(id)propertyForKey:(id)arg1 ;
-(void)storeProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setEventHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)createRunloopSourceForStream:(id)arg1 ;
-(void)postStreamEvent:(unsigned long long)arg1 forStream:(id)arg2 ;
@end

