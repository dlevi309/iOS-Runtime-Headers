/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

@class BWFigVideoCaptureDevice, BWFigVideoCaptureStream, BWNodeOutput, NSDictionary;


@protocol BWFigCameraSourceNode <NSObject>
@property (readonly) BWFigVideoCaptureDevice * captureDevice; 
@property (readonly) BWFigVideoCaptureStream * captureStream; 
@property (readonly) BWNodeOutput * videoCaptureOutput; 
@property (readonly) BWNodeOutput * stillImageOutput; 
@property (readonly) BWNodeOutput * detectedObjectsOutput; 
@property (nonatomic,copy) NSDictionary * videoCaptureOutputColorInfoOverride; 
@property (assign,nonatomic) BOOL videoCaptureOutputPixelBufferAttachmentModificationAllowed; 
@required
-(BWFigVideoCaptureDevice *)captureDevice;
-(BWFigVideoCaptureStream *)captureStream;
-(BWNodeOutput *)stillImageOutput;
-(id)colorInfoForOutput:(id)arg1;
-(BWNodeOutput *)videoCaptureOutput;
-(void)setVideoCaptureOutputPixelBufferAttachmentModificationAllowed:(BOOL)arg1;
-(void)setVideoCaptureOutputColorInfoOverride:(id)arg1;
-(BWNodeOutput *)detectedObjectsOutput;
-(NSDictionary *)videoCaptureOutputColorInfoOverride;
-(BOOL)videoCaptureOutputPixelBufferAttachmentModificationAllowed;

@end

