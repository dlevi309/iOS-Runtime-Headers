/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@class NSURL, NSArray, NSDate, CAMCaptureCoordinationInfo, NSError;

@interface CAMVideoCaptureResult : NSObject {

	NSURL* _localDestinationURL;
	NSURL* _filteredLocalDestinationURL;
	SCD_Struct_CA15 _dimensions;
	NSArray* _metadata;
	double _videoZoomFactor;
	long long _reason;
	CVBufferRef _videoPreviewPixelBuffer;
	NSDate* _captureDate;
	CAMCaptureCoordinationInfo* _coordinationInfo;
	NSError* _error;
	SCD_Struct_CA7 _duration;
	SCD_Struct_CA7 _stillDisplayTime;

}

@property (nonatomic,readonly) NSURL * localDestinationURL;                                //@synthesize localDestinationURL=_localDestinationURL - In the implementation block
@property (nonatomic,readonly) NSURL * filteredLocalDestinationURL;                        //@synthesize filteredLocalDestinationURL=_filteredLocalDestinationURL - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA7 duration;                                    //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA7 stillDisplayTime;                            //@synthesize stillDisplayTime=_stillDisplayTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA15 dimensions;                                 //@synthesize dimensions=_dimensions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * metadata;                                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) double videoZoomFactor;                                     //@synthesize videoZoomFactor=_videoZoomFactor - In the implementation block
@property (nonatomic,readonly) long long reason;                                           //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) BOOL stoppedUnexpectedly; 
@property (nonatomic,readonly) CVBufferRef videoPreviewPixelBuffer;                        //@synthesize videoPreviewPixelBuffer=_videoPreviewPixelBuffer - In the implementation block
@property (nonatomic,readonly) NSDate * captureDate;                                       //@synthesize captureDate=_captureDate - In the implementation block
@property (nonatomic,readonly) CAMCaptureCoordinationInfo * coordinationInfo;              //@synthesize coordinationInfo=_coordinationInfo - In the implementation block
@property (nonatomic,readonly) NSError * error;                                            //@synthesize error=_error - In the implementation block
-(SCD_Struct_CA15)dimensions;
-(double)videoZoomFactor;
-(NSError *)error;
-(NSDate *)captureDate;
-(long long)reason;
-(NSURL *)localDestinationURL;
-(SCD_Struct_CA7)stillDisplayTime;
-(NSArray *)metadata;
-(SCD_Struct_CA7)duration;
-(void)dealloc;
-(CAMCaptureCoordinationInfo *)coordinationInfo;
-(BOOL)stoppedUnexpectedly;
-(NSURL *)filteredLocalDestinationURL;
-(CVBufferRef)videoPreviewPixelBuffer;
-(id)initWithURL:(id)arg1 filteredLocalDestinationURL:(id)arg2 duration:(SCD_Struct_CA7)arg3 stillDisplayTime:(SCD_Struct_CA7)arg4 dimensions:(SCD_Struct_CA15)arg5 metadata:(id)arg6 videoZoomFactor:(double)arg7 reason:(long long)arg8 videoPreviewPixelBuffer:(CVBufferRef)arg9 coordinationInfo:(id)arg10 error:(id)arg11 ;
@end

