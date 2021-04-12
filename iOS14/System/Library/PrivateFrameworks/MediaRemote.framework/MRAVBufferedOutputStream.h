/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <CoreFoundation/NSOutputStream.h>

@protocol NSStreamDelegate, OS_dispatch_queue;
@class NSMutableDictionary, NSRunLoop, NSObject;

@interface MRAVBufferedOutputStream : NSOutputStream {

	unsigned long long _status;
	id<NSStreamDelegate> _delegate;
	NSMutableDictionary* _properties;
	NSRunLoop* _scheduledRunLoop;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(unsigned long long)streamStatus;
-(id)streamError;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)open;
-(id)init;
-(id)delegate;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)initToFileAtPath:(id)arg1 append:(BOOL)arg2 ;
-(void)close;
-(void)notifyDelegateOfStreamEvent:(unsigned long long)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(id)initWithURL:(id)arg1 append:(BOOL)arg2 ;
-(id)initToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
-(id)initToMemory;
@end

