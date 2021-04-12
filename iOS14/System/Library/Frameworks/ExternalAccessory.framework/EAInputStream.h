/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
*/

#import <ExternalAccessory/ExternalAccessory-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class EAAccessory, EASession, NSMutableData, NSCondition, NSRecursiveLock, NSObject;

@interface EAInputStream : NSInputStream {

	id _delegate;
	EAAccessory* _accessory;
	EASession* _session;
	int _sock;
	BOOL _useSocket;
	NSMutableData* _inputFromAccData;
	NSCondition* _inputFromAccCondition;
	NSRecursiveLock* _statusLock;
	NSRecursiveLock* _runloopLock;
	NSObject*<OS_dispatch_queue> _inputFromAccQueue;
	NSObject*<OS_dispatch_source> _sockListenSource;
	char* _inputFromAccBuffer;
	BOOL _isOpenCompletedEventSent;
	BOOL _hasNewBytesAvailable;
	BOOL _isAtEndEventSent;
	unsigned long long _streamStatus;
	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _runLoopSource;

}
-(unsigned long long)streamStatus;
-(id)streamError;
-(void)_accessoryDidDisconnect:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(void)open;
-(id)delegate;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)close;
-(BOOL)hasBytesAvailable;
-(id)propertyForKey:(id)arg1 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)_scheduleCallback;
-(void)_streamEventTrigger;
-(void)openCompleted;
-(void)_performAtEndOfStreamValidation;
-(id)initWithAccessory:(id)arg1 forSession:(id)arg2 socket:(int)arg3 ;
-(id)initWithAccessoryWithoutSocket:(id)arg1 forSession:(id)arg2 ;
-(void)endStream;
-(void)processIncomingAccessoryData:(id)arg1 ;
@end

