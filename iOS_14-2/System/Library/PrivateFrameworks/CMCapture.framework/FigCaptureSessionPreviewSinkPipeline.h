/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/FigCapturePreviewSinkPipeline.h>

@class NSString;

@interface FigCaptureSessionPreviewSinkPipeline : FigCapturePreviewSinkPipeline {

	BOOL _imageQueueUpdatedNotificationSent;
	BOOL _previewSinkEnabled;
	BOOL _previewRunning;
	NSString* _sourceID;

}

@property (assign,nonatomic) BOOL imageQueueUpdatedNotificationSent;              //@synthesize imageQueueUpdatedNotificationSent=_imageQueueUpdatedNotificationSent - In the implementation block
@property (assign,nonatomic) BOOL previewRunning;                                 //@synthesize previewRunning=_previewRunning - In the implementation block
@property (assign,nonatomic) BOOL previewSinkEnabled;                             //@synthesize previewSinkEnabled=_previewSinkEnabled - In the implementation block
@property (nonatomic,retain) NSString * sourceID;                                 //@synthesize sourceID=_sourceID - In the implementation block
-(void)setSourceID:(NSString *)arg1 ;
-(BOOL)previewRunning;
-(void)setImageQueueUpdatedNotificationSent:(BOOL)arg1 ;
-(BOOL)imageQueueUpdatedNotificationSent;
-(void)setPreviewRunning:(BOOL)arg1 ;
-(BOOL)previewSinkEnabled;
-(NSString *)sourceID;
-(void)setPreviewSinkEnabled:(BOOL)arg1 ;
-(void)dealloc;
@end

