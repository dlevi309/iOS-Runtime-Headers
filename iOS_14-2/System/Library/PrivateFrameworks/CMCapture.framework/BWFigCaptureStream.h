/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWFigCaptureStreamStartStopDelegate;
#import <CMCapture/CMCapture-Structs.h>
@class NSString, NSDictionary, NSMutableDictionary;

@interface BWFigCaptureStream : NSObject {

	OpaqueFigCaptureStreamRef _stream;
	NSString* _portType;
	NSString* _uniqueID;
	NSString* _portTypeShortString;
	NSDictionary* _supportedProperties;
	NSMutableDictionary* _cachedProperties;
	BOOL _invalidated;
	os_unfair_lock_s _lock;
	BOOL _streaming;
	unsigned _ktraceCodePrefix;
	id<BWFigCaptureStreamStartStopDelegate> _startStopDelegate;

}

@property (readonly) NSString * portType;                                                            //@synthesize portType=_portType - In the implementation block
@property (readonly) NSString * uniqueID;                                                            //@synthesize uniqueID=_uniqueID - In the implementation block
@property (readonly) NSDictionary * supportedProperties;                                             //@synthesize supportedProperties=_supportedProperties - In the implementation block
@property (assign,nonatomic) id<BWFigCaptureStreamStartStopDelegate> startStopDelegate;              //@synthesize startStopDelegate=_startStopDelegate - In the implementation block
@property (getter=isStreaming,readonly) BOOL streaming; 
+(void)initialize;
-(id)getProperty:(CFStringRef)arg1 error:(int*)arg2 ;
-(int)registerForNotification:(CFStringRef)arg1 listener:(const void*)arg2 callback:(/*function pointer*/void*)arg3 ;
-(BOOL)isStreaming;
-(NSString *)uniqueID;
-(NSString *)portType;
-(int)sendCommandProperty:(CFStringRef)arg1 ;
-(int)start;
-(id)initWithFigCaptureStream:(OpaqueFigCaptureStreamRef)arg1 ;
-(int)stop;
-(int)addAttachmentsToSampleBuffer:(opaqueCMSampleBufferRef)arg1 options:(id)arg2 ;
-(int)setProperty:(CFStringRef)arg1 value:(id)arg2 ;
-(OpaqueFigCaptureStreamRef)figCaptureStream;
-(id)getPropertyIfSupported:(CFStringRef)arg1 error:(int*)arg2 ;
-(int)setPropertyIfSupported:(CFStringRef)arg1 value:(id)arg2 ;
-(id)description;
-(void)synchronizedStreamsGroupWillStop;
-(id)copyProperty:(CFStringRef)arg1 error:(int*)arg2 ;
-(int)unregisterForNotification:(CFStringRef)arg1 listener:(const void*)arg2 ;
-(int)_setProperty:(CFStringRef)arg1 value:(id)arg2 requireSupportedProperty:(BOOL)arg3 ;
-(void)synchronizedStreamsGroupDidStop;
-(NSDictionary *)supportedProperties;
-(id)copyPropertyIfSupported:(CFStringRef)arg1 error:(int*)arg2 ;
-(void)invalidate;
-(id)_copyProperty:(CFStringRef)arg1 requireSupported:(BOOL)arg2 error:(int*)arg3 ;
-(void)flushPropertyCache;
-(id<BWFigCaptureStreamStartStopDelegate>)startStopDelegate;
-(void)dealloc;
-(void)setStartStopDelegate:(id<BWFigCaptureStreamStartStopDelegate>)arg1 ;
@end

