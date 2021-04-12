/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@protocol PLDataArrayInputStreamProgressDelegate;
@class NSArray, NSMutableData;

@interface PLDataArrayInputStream : NSInputStream {

	NSArray* _dataArray;
	NSMutableData* _bodyData;
	unsigned long long _dataCount;
	unsigned long long _dataLength;
	unsigned long long _dataOffset;
	unsigned long long _currentIndex;
	unsigned long long _currentOffset;
	unsigned long long _currentLength;
	BOOL _openEventSent;
	unsigned long long _streamStatus;
	id _delegate;
	id<PLDataArrayInputStreamProgressDelegate> _progressDelegate;
	CFRunLoopSourceRef _rls;
	/*function pointer*/void* _clientCallback;
	SCD_Struct_PL8* _clientContext;

}

@property (assign,nonatomic) id<PLDataArrayInputStreamProgressDelegate> progressDelegate;              //@synthesize progressDelegate=_progressDelegate - In the implementation block
-(void)_updateProgress;
-(unsigned long long)streamStatus;
-(id)streamError;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(void)open;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(id)delegate;
-(unsigned long long)totalBytes;
-(void)close;
-(BOOL)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_PL8*)arg3 ;
-(BOOL)hasBytesAvailable;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(unsigned long long)bytesRead;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)dealloc;
-(id<PLDataArrayInputStreamProgressDelegate>)progressDelegate;
-(void)setProgressDelegate:(id<PLDataArrayInputStreamProgressDelegate>)arg1 ;
-(void)_scheduleCallback;
-(void)_streamEventTrigger;
-(id)initWithDataArray:(id)arg1 ;
-(void)_scheduleProgressUpdate;
@end

