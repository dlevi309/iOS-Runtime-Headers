/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/

#import <CoreFoundation/NSOutputStream.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableData, NSOutputStream, NSObject, NSString;

@interface OspreyBufferedOutputStream : NSOutputStream <NSStreamDelegate> {

	NSMutableData* _outputBuffer;
	NSOutputStream* _outputStream;
	BOOL _closed;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)streamError;
-(void)close;
-(BOOL)hasSpaceAvailable;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)initWithBufferSize:(unsigned long long)arg1 underlyingOutputStream:(id)arg2 queue:(id)arg3 ;
-(void)_closeUnderlying;
-(BOOL)_flushBuffer;
@end

