/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/Social-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@protocol NSStreamDelegate;
@class NSArray, SLRequestMultiPartInputStream;

@interface SLRequestBodyInputStream : NSInputStream {

	NSArray* _inputStreams;
	SLRequestMultiPartInputStream* _currentStream;
	unsigned long long _dataLength;
	unsigned long long _dataOffset;
	unsigned long long _currentIndex;
	unsigned long long _currentOffset;
	unsigned long long _currentLength;
	BOOL _openEventSent;
	unsigned long long _streamStatus;
	CFRunLoopSourceRef _rls;
	/*function pointer*/void* _clientCallback;
	SCD_Struct_SL10* _clientContext;
	SLRequestBodyInputStream* _selfReferenceDuringStreamEventTrigger;
	id<NSStreamDelegate> _delegate;

}

@property (__weak) id<NSStreamDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long totalBytes; 
-(void)dealloc;
-(void)open;
-(void)close;
-(id<NSStreamDelegate>)delegate;
-(void)setDelegate:(id<NSStreamDelegate>)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned long long)streamStatus;
-(id)streamError;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(BOOL)hasBytesAvailable;
-(BOOL)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_SL10*)arg3 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(unsigned long long)totalBytes;
-(id)initWithMultiParts:(id)arg1 multiPartBoundary:(id)arg2 ;
-(void)_scheduleCallback;
-(id)nextStream;
-(void)_streamEventTrigger;
-(unsigned long long)bytesRead;
@end

