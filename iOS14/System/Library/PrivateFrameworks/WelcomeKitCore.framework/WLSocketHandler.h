/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;
#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
@class NSObject, NSMutableArray;

@interface WLSocketHandler : NSObject {

	NSObject*<OS_dispatch_queue> _readQueue;
	NSMutableArray* _dataCache;
	NSObject*<OS_dispatch_source> _dataCacheReadSource;
	NSObject*<OS_dispatch_semaphore> _dataCacheSema;

}
+(int)connectToHost:(id)arg1 address:(hostent*)arg2 port:(unsigned short)arg3 ;
+(void)performDNSLookupForHost:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)lookupAndConnectToHost:(id)arg1 port:(unsigned short)arg2 completion:(/*^block*/id)arg3 ;
+(id)_commandStringWithData:(id)arg1 ;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(void)endReadingIntoCache;
-(void)_readIntoCacheFromSocket:(int)arg1 ;
-(id)observeSocket:(int)arg1 forSourceEventType:(dispatch_source_type_sRef)arg2 handler:(/*^block*/id)arg3 ;
-(char*)readBytesFromSocket:(int)arg1 maximumSize:(unsigned long long)arg2 bytesRead:(long long*)arg3 ;
-(id)waitForDataFromReadCacheReturningError:(id*)arg1 ;
-(id)waitForMessageFromReadCacheReturningError:(id*)arg1 ;
-(void)_writeBytes:(const void*)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 toSocket:(int)arg4 completion:(/*^block*/id)arg5 ;
-(void)writeBytes:(const void*)arg1 length:(unsigned long long)arg2 toSocket:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)beginReadingIntoCacheFromSocket:(int)arg1 ;
-(id)waitForBlobDataFromReadCacheReturningError:(id*)arg1 ;
-(BOOL)waitForCommand:(id)arg1 fromReadCacheReturningError:(id*)arg2 ;
-(void)sendCommand:(id)arg1 toSocket:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendData:(id)arg1 toSocket:(int)arg2 completion:(/*^block*/id)arg3 ;
@end

