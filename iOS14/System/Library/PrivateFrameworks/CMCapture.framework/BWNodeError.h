/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class NSString, FigCaptureStillImageSettings, BWStillImageCaptureSettings, FigCaptureRecordingSettings;

@interface BWNodeError : NSObject {

	long long _uniqueID;
	int _errorCode;
	NSString* _sourceNodeDescription;
	FigCaptureStillImageSettings* _requestedStillImageCaptureSettings;
	BWStillImageCaptureSettings* _resolvedStillImageCaptureSettings;
	FigCaptureRecordingSettings* _recordingSettings;

}

@property (readonly) int errorCode; 
@property (readonly) NSString * sourceNodeDescription; 
@property (readonly) FigCaptureStillImageSettings * requestedStillImageCaptureSettings; 
@property (readonly) BWStillImageCaptureSettings * resolvedStillImageCaptureSettings; 
@property (readonly) FigCaptureRecordingSettings * recordingSettings;                                //@synthesize recordingSettings=_recordingSettings - In the implementation block
+(id)newError:(int)arg1 sourceNode:(id)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 ;
+(id)newError:(int)arg1 sourceNode:(id)arg2 recordingSettings:(id)arg3 ;
+(id)newError:(int)arg1 sourceNode:(id)arg2 ;
-(BWStillImageCaptureSettings *)resolvedStillImageCaptureSettings;
-(int)errorCode;
-(FigCaptureStillImageSettings *)requestedStillImageCaptureSettings;
-(id)_initWithError:(int)arg1 sourceNode:(id)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 recordingSettings:(id)arg5 ;
-(NSString *)sourceNodeDescription;
-(unsigned long long)hash;
-(FigCaptureRecordingSettings *)recordingSettings;
-(void)dealloc;
@end

