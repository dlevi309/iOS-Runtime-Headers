/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
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
+(id)newError:(int)arg1 sourceNode:(id)arg2 ;
+(id)newError:(int)arg1 sourceNode:(id)arg2 recordingSettings:(id)arg3 ;
-(void)dealloc;
-(unsigned long long)hash;
-(int)errorCode;
-(FigCaptureStillImageSettings *)requestedStillImageCaptureSettings;
-(BWStillImageCaptureSettings *)resolvedStillImageCaptureSettings;
-(FigCaptureRecordingSettings *)recordingSettings;
-(id)_initWithError:(int)arg1 sourceNode:(id)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 recordingSettings:(id)arg5 ;
-(NSString *)sourceNodeDescription;
@end

