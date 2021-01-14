/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSDictionary, NSArray, NSMutableArray;

@interface BWFigCaptureDevice : NSObject {

	OpaqueFigCaptureDeviceRef _device;
	NSDictionary* _supportedProperties;
	NSDictionary* _streamsByPortType;
	NSArray* _streams;
	NSArray* _synchronizedStreamsGroups;
	NSMutableArray* _activeProcessingSessions;
	BOOL _invalidated;
	os_unfair_lock_s _lock;
	unsigned _ktraceCodePrefix;

}

@property (readonly) NSDictionary * supportedProperties;               //@synthesize supportedProperties=_supportedProperties - In the implementation block
@property (readonly) NSArray * streams;                                //@synthesize streams=_streams - In the implementation block
@property (readonly) NSArray * synchronizedStreamsGroups;              //@synthesize synchronizedStreamsGroups=_synchronizedStreamsGroups - In the implementation block
@property (readonly) BOOL invalidated; 
+(void)initialize;
-(id)getProperty:(CFStringRef)arg1 error:(int*)arg2 ;
-(id)copyStreamWithPortType:(CFStringRef)arg1 error:(int*)arg2 ;
-(int)registerForNotification:(CFStringRef)arg1 listener:(const void*)arg2 callback:(/*function pointer*/void*)arg3 ;
-(int)relinquishControlOfStreams:(id)arg1 ;
-(int)setMultiCamConfigurationWithActiveUnsynchronizedStreams:(id)arg1 activeSynchronizedStreamsGroups:(id)arg2 cameraControlsPriority:(id)arg3 ;
-(BOOL)invalidated;
-(id)copySynchronizedStreamsGroupForStreams:(id)arg1 error:(int*)arg2 ;
-(void)processingSessionHasBeenInvalidated:(id)arg1 ;
-(OpaqueFigCaptureDeviceRef)figCaptureDevice;
-(int)setProperty:(CFStringRef)arg1 value:(id)arg2 ;
-(id)copyStreamsWithPortTypes:(id)arg1 error:(int*)arg2 ;
-(NSArray *)synchronizedStreamsGroups;
-(id)copyProperty:(CFStringRef)arg1 error:(int*)arg2 ;
-(int)unregisterForNotification:(CFStringRef)arg1 listener:(const void*)arg2 ;
-(NSArray *)streams;
-(NSDictionary *)supportedProperties;
-(id)initWithFigCaptureDevice:(OpaqueFigCaptureDeviceRef)arg1 ;
-(void)invalidate;
-(int)requestControlOfStreams:(id)arg1 ;
-(id)copyISPProcessingSessionWithType:(int)arg1 error:(int*)arg2 ;
-(void)resetSynchronizedStreamsGroups;
-(void)dealloc;
@end

