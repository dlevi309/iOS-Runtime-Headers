/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@class NSOutputStream, NSError;

@interface SSGzipOutputStream : NSOutputStream {

	NSOutputStream* _backingStream;
	z_stream_s* _stream;
	unsigned long long _streamContentLength;
	NSError* _streamError;
	char* _streamOutBuffer;
	unsigned long long _streamOutBufferSize;

}
-(void)dealloc;
-(void)open;
-(void)close;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)streamStatus;
-(id)streamError;
-(id)initToMemory;
-(id)initToFileAtPath:(id)arg1 append:(BOOL)arg2 ;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)hasSpaceAvailable;
-(BOOL)_initializeOutputStream;
-(void)_setStreamError:(int)arg1 context:(id)arg2 ;
-(long long)_consumeStreamOutput:(BOOL)arg1 ;
-(unsigned long long)streamContentLength;
@end

