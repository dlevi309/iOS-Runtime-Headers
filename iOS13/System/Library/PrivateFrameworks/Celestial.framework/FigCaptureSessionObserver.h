/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol FigCaptureSessionObserver <NSObject>
@property (readonly) int photoThumbnailMaxDimension; 
@property (readonly) BOOL photoThumbnailQualitySpecified; 
@property (readonly) float photoThumbnailQuality; 
@required
-(void)captureSessionDidStart:(id)arg1;
-(void)captureSessionDidStop:(long long)arg1;
-(void)captureSession:(long long)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_BW2)arg4;
-(int)photoThumbnailMaxDimension;
-(BOOL)photoThumbnailQualitySpecified;
-(float)photoThumbnailQuality;

@end

