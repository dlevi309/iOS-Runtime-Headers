/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FigCaptureSourceConfiguration, FigCaptureSinkConfiguration, FigCaptureIrisSinkConfiguration, FigCaptureStillImageSinkConfiguration, FigCaptureVideoDataSinkConfiguration, FigCaptureVideoPreviewSinkConfiguration, FigCaptureDepthDataSinkConfiguration, FigCaptureVideoThumbnailSinkConfiguration, FigCapturePointCloudDataSinkConfiguration, FigCaptureCameraCalibrationDataSinkConfiguration;

@interface FigCaptureConnectionConfiguration : NSObject <FigXPCCoding, NSCopying> {

	NSString* _connectionID;
	unsigned _mediaType;
	int _underlyingDeviceType;
	FigCaptureSourceConfiguration* _sourceConfiguration;
	FigCaptureSinkConfiguration* _sinkConfiguration;
	BOOL _enabled;

}

@property (nonatomic,copy) NSString * connectionID;                                                                          //@synthesize connectionID=_connectionID - In the implementation block
@property (assign,nonatomic) unsigned mediaType;                                                                             //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) int underlyingDeviceType;                                                                       //@synthesize underlyingDeviceType=_underlyingDeviceType - In the implementation block
@property (nonatomic,retain) FigCaptureSourceConfiguration * sourceConfiguration;                                            //@synthesize sourceConfiguration=_sourceConfiguration - In the implementation block
@property (nonatomic,retain) FigCaptureSinkConfiguration * sinkConfiguration;                                                //@synthesize sinkConfiguration=_sinkConfiguration - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                                                   //@synthesize enabled=_enabled - In the implementation block
@property (readonly) FigCaptureIrisSinkConfiguration * irisSinkConfiguration; 
@property (readonly) FigCaptureStillImageSinkConfiguration * stillImageSinkConfiguration; 
@property (readonly) FigCaptureVideoDataSinkConfiguration * videoDataSinkConfiguration; 
@property (readonly) FigCaptureVideoPreviewSinkConfiguration * videoPreviewSinkConfiguration; 
@property (readonly) FigCaptureDepthDataSinkConfiguration * depthDataSinkConfiguration; 
@property (readonly) FigCaptureVideoThumbnailSinkConfiguration * thumbnailSinkConfiguration; 
@property (readonly) FigCapturePointCloudDataSinkConfiguration * pointCloudDataSinkConfiguration; 
@property (readonly) FigCaptureCameraCalibrationDataSinkConfiguration * cameraCalibrationDataSinkConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(unsigned)mediaType;
-(FigCaptureSourceConfiguration *)sourceConfiguration;
-(void)setSourceConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(NSString *)connectionID;
-(void)setMediaType:(unsigned)arg1 ;
-(void)setConnectionID:(NSString *)arg1 ;
-(void)setUnderlyingDeviceType:(int)arg1 ;
-(void)setSinkConfiguration:(FigCaptureSinkConfiguration *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(FigCaptureSinkConfiguration *)sinkConfiguration;
-(FigCapturePointCloudDataSinkConfiguration *)pointCloudDataSinkConfiguration;
-(int)underlyingDeviceType;
-(FigCaptureVideoDataSinkConfiguration *)videoDataSinkConfiguration;
-(FigCaptureIrisSinkConfiguration *)irisSinkConfiguration;
-(FigCaptureVideoPreviewSinkConfiguration *)videoPreviewSinkConfiguration;
-(FigCaptureDepthDataSinkConfiguration *)depthDataSinkConfiguration;
-(FigCaptureStillImageSinkConfiguration *)stillImageSinkConfiguration;
-(FigCaptureVideoThumbnailSinkConfiguration *)thumbnailSinkConfiguration;
-(FigCaptureCameraCalibrationDataSinkConfiguration *)cameraCalibrationDataSinkConfiguration;
-(BOOL)sourcesFromUnderlyingStream;
@end

