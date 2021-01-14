/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(unsigned long long)streamStatus;
-(id)streamError;
-(void)open;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)initToFileAtPath:(id)arg1 append:(BOOL)arg2 ;
-(void)close;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)_initializeOutputStream;
-(void)_setStreamError:(int)arg1 context:(id)arg2 ;
-(long long)_consumeStreamOutput:(BOOL)arg1 ;
-(unsigned long long)streamContentLength;
-(id)initToMemory;
-(BOOL)hasSpaceAvailable;
-(void)dealloc;
@end

