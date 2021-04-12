/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
*/

#import <IOUSBHost/IOUSBHost-Structs.h>
#import <IOUSBHost/IOUSBHostIOSource.h>

@class IOUSBHostPipe;

@interface IOUSBHostStream : IOUSBHostIOSource {

	IOUSBHostPipe* _hostPipe;
	unsigned long long _streamID;

}

@property (retain) IOUSBHostPipe * hostPipe;                 //@synthesize hostPipe=_hostPipe - In the implementation block
@property (assign) unsigned long long streamID;              //@synthesize streamID=_streamID - In the implementation block
-(unsigned long long)streamID;
-(void)setStreamID:(unsigned long long)arg1 ;
-(BOOL)abortWithError:(id*)arg1 ;
-(void)setHostPipe:(IOUSBHostPipe *)arg1 ;
-(BOOL)abortWithOption:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)initWithHostPipe:(id)arg1 streamID:(unsigned long long)arg2 ioConnection:(unsigned)arg3 ioNotificationPortRef:(IONotificationPortRef)arg4 ;
-(BOOL)sendIORequestWithData:(id)arg1 bytesTransferred:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)enqueueIORequestWithData:(id)arg1 error:(id*)arg2 completionHandler:(/*^block*/id)arg3 ;
-(IOUSBHostPipe *)hostPipe;
@end

