/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
*/

#import <IOUSBHost/IOUSBHost-Structs.h>
#import <IOUSBHost/IOUSBHostIOSource.h>

@class NSData, NSMutableSet;

@interface IOUSBHostPipe : IOUSBHostIOSource {

	BOOL _streamsEnabled;
	NSData* _originalDescriptorsCache;
	NSData* _currentDescriptorsCache;
	NSMutableSet* _invalidDescriptorCache;

}

@property (retain) NSData * originalDescriptorsCache;                                      //@synthesize originalDescriptorsCache=_originalDescriptorsCache - In the implementation block
@property (retain) NSData * currentDescriptorsCache;                                       //@synthesize currentDescriptorsCache=_currentDescriptorsCache - In the implementation block
@property (retain) NSMutableSet * invalidDescriptorCache;                                  //@synthesize invalidDescriptorCache=_invalidDescriptorCache - In the implementation block
@property (assign) BOOL streamsEnabled;                                                    //@synthesize streamsEnabled=_streamsEnabled - In the implementation block
@property (readonly) const IOUSBHostIOSourceDescriptors* originalDescriptors; 
@property (readonly) const IOUSBHostIOSourceDescriptors* descriptors; 
@property (readonly) double idleTimeout; 
-(const IOUSBHostIOSourceDescriptors*)descriptors;
-(BOOL)abortWithError:(id*)arg1 ;
-(double)idleTimeout;
-(id)initWithHostInterface:(id)arg1 endpointAddress:(unsigned long long)arg2 ioConnection:(unsigned)arg3 ioNotificationPortRef:(IONotificationPortRef)arg4 deviceAddress:(unsigned long long)arg5 ;
-(BOOL)abortWithOption:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)setIdleTimeout:(double)arg1 error:(id*)arg2 ;
-(void)setStreamsEnabled:(BOOL)arg1 ;
-(void)setInvalidDescriptorCache:(NSMutableSet *)arg1 ;
-(NSMutableSet *)invalidDescriptorCache;
-(const IOUSBHostIOSourceDescriptors*)ioSourceDescriptorsWithOption:(unsigned long long)arg1 ;
-(NSData *)originalDescriptorsCache;
-(NSData *)currentDescriptorsCache;
-(void)setOriginalDescriptorsCache:(NSData *)arg1 ;
-(void)setCurrentDescriptorsCache:(NSData *)arg1 ;
-(BOOL)sendControlRequest:(IOUSBDeviceRequest)arg1 data:(id)arg2 bytesTransferred:(unsigned long long*)arg3 completionTimeout:(double)arg4 error:(id*)arg5 ;
-(BOOL)enqueueControlRequest:(IOUSBDeviceRequest)arg1 data:(id)arg2 completionTimeout:(double)arg3 error:(id*)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)streamsEnabled;
-(const IOUSBHostIOSourceDescriptors*)originalDescriptors;
-(BOOL)adjustPipeWithDescriptors:(const IOUSBHostIOSourceDescriptors*)arg1 error:(id*)arg2 ;
-(BOOL)clearStallWithError:(id*)arg1 ;
-(BOOL)sendControlRequest:(IOUSBDeviceRequest)arg1 error:(id*)arg2 ;
-(BOOL)sendControlRequest:(IOUSBDeviceRequest)arg1 data:(id)arg2 bytesTransferred:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)enqueueControlRequest:(IOUSBDeviceRequest)arg1 error:(id*)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)enqueueControlRequest:(IOUSBDeviceRequest)arg1 data:(id)arg2 error:(id*)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)sendIORequestWithData:(id)arg1 bytesTransferred:(unsigned long long*)arg2 completionTimeout:(double)arg3 error:(id*)arg4 ;
-(BOOL)enqueueIORequestWithData:(id)arg1 completionTimeout:(double)arg2 error:(id*)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)sendIORequestWithData:(id)arg1 frameList:(IOUSBHostIsochronousFrame*)arg2 frameListCount:(unsigned long long)arg3 firstFrameNumber:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)enqueueIORequestWithData:(id)arg1 frameList:(IOUSBHostIsochronousFrame*)arg2 frameListCount:(unsigned long long)arg3 firstFrameNumber:(unsigned long long)arg4 error:(id*)arg5 completionHandler:(/*^block*/id)arg6 ;
-(BOOL)enableStreamsWithError:(id*)arg1 ;
-(BOOL)disableStreamsWithError:(id*)arg1 ;
-(id)copyStreamWithStreamID:(unsigned long long)arg1 error:(id*)arg2 ;
@end

