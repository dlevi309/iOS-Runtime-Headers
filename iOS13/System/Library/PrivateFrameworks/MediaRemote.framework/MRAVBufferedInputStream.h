/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <CoreFoundation/NSInputStream.h>

@protocol NSStreamDelegate, OS_dispatch_queue;
@class NSMutableDictionary, NSRunLoop, NSObject, NSMutableData;

@interface MRAVBufferedInputStream : NSInputStream {

	unsigned long long _status;
	id<NSStreamDelegate> _delegate;
	NSMutableDictionary* _properties;
	NSRunLoop* _scheduledRunLoop;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableData* _buffer;

}
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithFileAtPath:(id)arg1 ;
-(void)open;
-(void)close;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned long long)streamStatus;
-(id)streamError;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(BOOL)hasBytesAvailable;
-(void)_init;
-(void)notifyDelegateOfStreamEvent:(unsigned long long)arg1 ;
-(void)_onSerialQueue_handleDataReceived:(id)arg1 ;
-(void)handleDataReceived:(id)arg1 ;
-(void)handleStreamDisconnect;
@end

