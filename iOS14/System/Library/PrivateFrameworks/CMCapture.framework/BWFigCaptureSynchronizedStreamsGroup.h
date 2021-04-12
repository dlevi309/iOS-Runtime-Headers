/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSDictionary, BWFigCaptureStream, NSArray;

@interface BWFigCaptureSynchronizedStreamsGroup : NSObject {

	OpaqueFigCaptureSynchronizedStreamsGroupRef _syncGroup;
	NSDictionary* _supportedProperties;
	BWFigCaptureStream* _synchronizationMaster;
	BOOL _invalidated;
	NSArray* _streams;
	NSArray* _activeStreams;
	os_unfair_lock_s _lock;
	BOOL _stopSupported;
	unsigned _ktraceCodePrefix;

}

@property (readonly) NSDictionary * supportedProperties;                      //@synthesize supportedProperties=_supportedProperties - In the implementation block
@property (readonly) NSArray * streams;                                       //@synthesize streams=_streams - In the implementation block
@property (readonly) BWFigCaptureStream * synchronizationMaster;              //@synthesize synchronizationMaster=_synchronizationMaster - In the implementation block
@property (readonly) BOOL stopSupported;                                      //@synthesize stopSupported=_stopSupported - In the implementation block
+(void)initialize;
-(id)getProperty:(CFStringRef)arg1 error:(int*)arg2 ;
-(int)stop;
-(int)setProperty:(CFStringRef)arg1 value:(id)arg2 ;
-(id)copyProperty:(CFStringRef)arg1 error:(int*)arg2 ;
-(int)setActiveStreams:(id)arg1 ;
-(int)setMasterStream:(id)arg1 slaveConfigurationsByPortType:(id)arg2 ;
-(int)setCameraControlsMasterStream:(id)arg1 ;
-(NSArray *)streams;
-(NSDictionary *)supportedProperties;
-(id)initWithFigCaptureSynchronizedStreamsGroup:(OpaqueFigCaptureSynchronizedStreamsGroupRef)arg1 captureDevice:(id)arg2 ;
-(id)activeStreams;
-(OpaqueFigCaptureSynchronizedStreamsGroupRef)figCaptureSynchronizedStreamsGroup;
-(void)invalidate;
-(BWFigCaptureStream *)synchronizationMaster;
-(BOOL)stopSupported;
-(void)dealloc;
@end

