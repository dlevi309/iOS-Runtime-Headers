/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
*/

#import <VisionKit/VisionKit-Structs.h>
#import <libobjc.A.dylib/AVCapturePhotoCaptureDelegate.h>

@class AVCapturePhotoSettings, NSDictionary, NSString;

@interface ICDocCamPhotoCaptureDelegate : NSObject <AVCapturePhotoCaptureDelegate> {

	AVCapturePhotoSettings* _requestedPhotoSettings;
	NSDictionary* _metaData;
	CVBufferRef _pbRef;
	/*^block*/id _willCapturePhotoAnimation;
	/*^block*/id _completed;

}

@property (nonatomic,retain) AVCapturePhotoSettings * requestedPhotoSettings;              //@synthesize requestedPhotoSettings=_requestedPhotoSettings - In the implementation block
@property (nonatomic,retain) NSDictionary * metaData;                                      //@synthesize metaData=_metaData - In the implementation block
@property (assign,nonatomic) CVBufferRef pbRef;                                            //@synthesize pbRef=_pbRef - In the implementation block
@property (nonatomic,copy) id willCapturePhotoAnimation;                                   //@synthesize willCapturePhotoAnimation=_willCapturePhotoAnimation - In the implementation block
@property (nonatomic,copy) id completed;                                                   //@synthesize completed=_completed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)completed;
-(void)setCompleted:(id)arg1 ;
-(NSDictionary *)metaData;
-(void)setMetaData:(NSDictionary *)arg1 ;
-(void)didFinish;
-(void)captureOutput:(id)arg1 didFinishProcessingPhotoSampleBuffer:(opaqueCMSampleBufferRef)arg2 previewPhotoSampleBuffer:(opaqueCMSampleBufferRef)arg3 resolvedSettings:(id)arg4 bracketSettings:(id)arg5 error:(id)arg6 ;
-(void)captureOutput:(id)arg1 willBeginCaptureForResolvedSettings:(id)arg2 ;
-(void)captureOutput:(id)arg1 willCapturePhotoForResolvedSettings:(id)arg2 ;
-(void)captureOutput:(id)arg1 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(id)arg2 resolvedSettings:(id)arg3 ;
-(void)captureOutput:(id)arg1 didFinishProcessingLivePhotoToMovieFileAtURL:(id)arg2 duration:(SCD_Struct_IC7)arg3 photoDisplayTime:(SCD_Struct_IC7)arg4 resolvedSettings:(id)arg5 error:(id)arg6 ;
-(void)captureOutput:(id)arg1 didFinishCaptureForResolvedSettings:(id)arg2 error:(id)arg3 ;
-(void)setRequestedPhotoSettings:(AVCapturePhotoSettings *)arg1 ;
-(void)setWillCapturePhotoAnimation:(id)arg1 ;
-(CVBufferRef)pbRef;
-(void)setPbRef:(CVBufferRef)arg1 ;
-(id)willCapturePhotoAnimation;
-(id)initWithRequestedPhotoSettings:(id)arg1 willCapturePhotoAnimation:(/*^block*/id)arg2 completed:(/*^block*/id)arg3 ;
-(AVCapturePhotoSettings *)requestedPhotoSettings;
@end

