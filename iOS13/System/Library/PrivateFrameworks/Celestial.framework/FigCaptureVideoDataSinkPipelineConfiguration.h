/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class FigCaptureSourceConfiguration, FigVideoCaptureConnectionConfiguration, NSNumber, NSDictionary;

@interface FigCaptureVideoDataSinkPipelineConfiguration : NSObject {

	FigCaptureVideoTransform _sourceVideoTransform;
	unsigned _sourcePixelFormat;
	BOOL _sourceHasAppliedAllZoom;
	int _videoStabilizationType;
	int _motionAttachmentsSource;
	BOOL _faceTrackingEnabled;
	BOOL _offlineVISMotionDataEnabled;
	FigCaptureSourceConfiguration* _sourceConfiguration;
	int _sourceDeviceType;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;
	NSNumber* _clientPID;
	NSDictionary* _colorInfo;

}

@property (assign,nonatomic) FigCaptureVideoTransform sourceVideoTransform;                                          //@synthesize sourceVideoTransform=_sourceVideoTransform - In the implementation block
@property (assign,nonatomic) unsigned sourcePixelFormat;                                                             //@synthesize sourcePixelFormat=_sourcePixelFormat - In the implementation block
@property (assign,nonatomic) BOOL sourceHasAppliedAllZoom;                                                           //@synthesize sourceHasAppliedAllZoom=_sourceHasAppliedAllZoom - In the implementation block
@property (assign,nonatomic) int videoStabilizationType;                                                             //@synthesize videoStabilizationType=_videoStabilizationType - In the implementation block
@property (assign,nonatomic) int motionAttachmentsSource;                                                            //@synthesize motionAttachmentsSource=_motionAttachmentsSource - In the implementation block
@property (assign,nonatomic) BOOL faceTrackingEnabled;                                                               //@synthesize faceTrackingEnabled=_faceTrackingEnabled - In the implementation block
@property (assign,nonatomic) BOOL offlineVISMotionDataEnabled;                                                       //@synthesize offlineVISMotionDataEnabled=_offlineVISMotionDataEnabled - In the implementation block
@property (nonatomic,retain) FigCaptureSourceConfiguration * sourceConfiguration;                                    //@synthesize sourceConfiguration=_sourceConfiguration - In the implementation block
@property (assign,nonatomic) int sourceDeviceType;                                                                   //@synthesize sourceDeviceType=_sourceDeviceType - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;              //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
@property (nonatomic,retain) NSNumber * clientPID;                                                                   //@synthesize clientPID=_clientPID - In the implementation block
@property (nonatomic,retain) NSDictionary * colorInfo;                                                               //@synthesize colorInfo=_colorInfo - In the implementation block
-(void)dealloc;
-(FigCaptureSourceConfiguration *)sourceConfiguration;
-(void)setSourceConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(int)sourceDeviceType;
-(NSDictionary *)colorInfo;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(FigCaptureVideoTransform)sourceVideoTransform;
-(void)setSourceVideoTransform:(FigCaptureVideoTransform)arg1 ;
-(unsigned)sourcePixelFormat;
-(void)setSourcePixelFormat:(unsigned)arg1 ;
-(BOOL)sourceHasAppliedAllZoom;
-(void)setSourceHasAppliedAllZoom:(BOOL)arg1 ;
-(int)videoStabilizationType;
-(void)setVideoStabilizationType:(int)arg1 ;
-(int)motionAttachmentsSource;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(BOOL)faceTrackingEnabled;
-(void)setFaceTrackingEnabled:(BOOL)arg1 ;
-(BOOL)offlineVISMotionDataEnabled;
-(void)setOfflineVISMotionDataEnabled:(BOOL)arg1 ;
-(void)setSourceDeviceType:(int)arg1 ;
-(void)setVideoDataConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(NSNumber *)clientPID;
-(void)setClientPID:(NSNumber *)arg1 ;
-(void)setColorInfo:(NSDictionary *)arg1 ;
@end

