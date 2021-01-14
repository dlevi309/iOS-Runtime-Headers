/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
*/

#import <ExternalAccessory/ExternalAccessory-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@class EAAccessory, EASession, NSRecursiveLock;

@interface EAOutputStream : NSOutputStream {

	id _delegate;
	int _sock;
	EAAccessory* _accessory;
	EASession* _session;
	NSRecursiveLock* _statusLock;
	NSRecursiveLock* _runloopLock;
	BOOL _useSocket;
	CFSocketRef _cfSocket;
	BOOL _isOpenCompletedEventSent;
	BOOL _hasSpaceAvailableEventSent;
	BOOL _hasSpaceAvailable;
	BOOL _isAtEndEventSent;
	unsigned long long _streamStatus;
	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _runLoopSource;
	CFRunLoopSourceRef _socketRunLoopSource;

}
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(unsigned long long)streamStatus;
-(id)streamError;
-(void)_accessoryDidDisconnect:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)open;
-(id)delegate;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)close;
-(id)propertyForKey:(id)arg1 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)hasSpaceAvailable;
-(void)dealloc;
-(void)_scheduleCallback;
-(void)_streamEventTrigger;
-(void)openCompleted;
-(void)_performAtEndOfStreamValidation;
-(id)initWithAccessory:(id)arg1 forSession:(id)arg2 socket:(int)arg3 ;
-(id)initWithAccessoryWithoutSocket:(id)arg1 forSession:(id)arg2 ;
-(void)endStream;
-(void)_streamWriteable;
@end

