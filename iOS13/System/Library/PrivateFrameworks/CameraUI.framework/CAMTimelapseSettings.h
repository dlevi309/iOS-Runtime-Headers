/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMTimelapseSettings : NSObject {

	double _initialCaptureTimeInterval;
	double _maxOutputFPS;
	double _maxOutputLength;

}

@property (nonatomic,readonly) double initialCaptureTimeInterval;                 //@synthesize initialCaptureTimeInterval=_initialCaptureTimeInterval - In the implementation block
@property (nonatomic,readonly) double maxOutputFPS;                               //@synthesize maxOutputFPS=_maxOutputFPS - In the implementation block
@property (nonatomic,readonly) double maxOutputLength;                            //@synthesize maxOutputLength=_maxOutputLength - In the implementation block
@property (nonatomic,readonly) long long maxOutputFrames; 
@property (nonatomic,readonly) long long maxMovieWriteAttempts; 
@property (nonatomic,readonly) long long maxFailedStateReadAttempts; 
+(id)sharedInstance;
-(id)init;
-(double)initialCaptureTimeInterval;
-(long long)maxOutputFrames;
-(long long)minAvailableBytesNeededForCaptureForWidth:(long long)arg1 height:(long long)arg2 useHEVC:(BOOL)arg3 ;
-(double)maxOutputLength;
-(double)maxOutputFPS;
-(id)_outputSettingsPresetForWidth:(long long)arg1 height:(long long)arg2 ;
-(long long)_averageMovieBitrateForWidth:(long long)arg1 height:(long long)arg2 useHEVC:(BOOL)arg3 ;
-(long long)maxMovieFileLengthForWidth:(long long)arg1 height:(long long)arg2 useHEVC:(BOOL)arg3 ;
-(double)outputFPSForFrameCount:(long long)arg1 ;
-(id)outputSettingsForWidth:(long long)arg1 height:(long long)arg2 videoFormatDescription:(opaqueCMFormatDescriptionRef)arg3 framesPerSecond:(long long)arg4 frameCount:(long long)arg5 useHEVC:(BOOL)arg6 ;
-(long long)maxMovieWriteAttempts;
-(double)waitTimeBeforeNextWriteForNumberOfPreviousAttempts:(long long)arg1 ;
-(long long)maxFailedStateReadAttempts;
@end

