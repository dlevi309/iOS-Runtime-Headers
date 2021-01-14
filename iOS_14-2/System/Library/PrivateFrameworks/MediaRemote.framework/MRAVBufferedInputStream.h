/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)streamStatus;
-(id)streamError;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(void)open;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(id)initWithFileAtPath:(id)arg1 ;
-(id)delegate;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)close;
-(void)notifyDelegateOfStreamEvent:(unsigned long long)arg1 ;
-(void)handleStreamDisconnect;
-(BOOL)hasBytesAvailable;
-(id)propertyForKey:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)handleDataReceived:(id)arg1 ;
@end

