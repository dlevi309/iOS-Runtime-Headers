/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCameraViewfinder.h>
#import <libobjc.A.dylib/FigCaptureSessionObserver.h>

@class NSDictionary, FigCameraViewfinderSessionLocal, NSString;

@interface FigCameraViewfinderLocal : FigCameraViewfinder <FigCaptureSessionObserver> {

	BOOL _observing;
	NSDictionary* _options;
	FigCameraViewfinderSessionLocal* _activeViewfinderSession;

}

@property (readonly) int photoThumbnailMaxDimension; 
@property (readonly) BOOL photoThumbnailQualitySpecified; 
@property (readonly) float photoThumbnailQuality; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)cameraViewfinder;
-(void)_updateActiveViewfinderSession:(id)arg1 ;
-(id)init;
-(float)photoThumbnailQuality;
-(void)startWithOptions:(id)arg1 ;
-(void)stop;
-(void)captureSessionDidStart:(id)arg1 ;
-(void)captureSession:(long long)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_BW8)arg4 ;
-(int)photoThumbnailMaxDimension;
-(void)captureSessionDidStop:(long long)arg1 ;
-(BOOL)photoThumbnailQualitySpecified;
-(void)dealloc;
@end

