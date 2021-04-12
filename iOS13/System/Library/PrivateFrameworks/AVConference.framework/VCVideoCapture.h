/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VideoCaptureServer;
@class NSObject;

@interface VCVideoCapture : NSObject {

	NSObject*<VideoCaptureServer> _captureServer;

}

@property (readonly) NSObject*<VideoCaptureServer> captureServer; 
-(void)dealloc;
-(NSObject*<VideoCaptureServer>)captureServer;
-(id)initWithCaptureServer:(id)arg1 ;
@end

