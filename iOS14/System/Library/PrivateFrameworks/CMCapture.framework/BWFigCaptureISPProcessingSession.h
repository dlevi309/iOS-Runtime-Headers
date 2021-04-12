/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWFigCaptureISPProcessingSessionDelegate;
#import <CMCapture/CMCapture-Structs.h>
@class NSDictionary, NSMutableDictionary;

@interface BWFigCaptureISPProcessingSession : NSObject {

	OpaqueFigCaptureISPProcessingSessionRef _session;
	NSDictionary* _supportedProperties;
	NSMutableDictionary* _cachedProperties;
	id<BWFigCaptureISPProcessingSessionDelegate> _delegate;
	BOOL _invalidated;
	os_unfair_lock_s _lock;

}

@property (readonly) NSDictionary * supportedProperties; 
@property (readonly) OpaqueFigCaptureISPProcessingSessionRef figCaptureISPProcessingSession; 
+(void)initialize;
-(id)getProperty:(CFStringRef)arg1 error:(int*)arg2 ;
-(int)flush;
-(id)delegate;
-(int)processBuffer:(CVBufferRef)arg1 refCon:(void*)arg2 outputDescriptors:(SCD_Struct_BW128*)arg3 numOutputDescriptors:(int)arg4 parameters:(id)arg5 ;
-(id)initWithFigCaptureISPProcessingSession:(OpaqueFigCaptureISPProcessingSessionRef)arg1 ;
-(int)setProperty:(CFStringRef)arg1 value:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(id)copyProperty:(CFStringRef)arg1 error:(int*)arg2 ;
-(NSDictionary *)supportedProperties;
-(OpaqueFigCaptureISPProcessingSessionRef)figCaptureISPProcessingSession;
-(int)invalidate;
-(int)prepareWithHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

