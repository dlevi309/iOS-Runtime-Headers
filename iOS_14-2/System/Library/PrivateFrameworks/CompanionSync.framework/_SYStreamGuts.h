/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)propertyForKey:(id)arg1 ;
-(void)storeProperty:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)setEventHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)createRunloopSourceForStream:(id)arg1 ;
-(void)postStreamEvent:(unsigned long long)arg1 forStream:(id)arg2 ;
@end

