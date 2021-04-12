/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/AVCapturePhotoCaptureDelegate.h>

@class AVCaptureSession, NSString;

@interface WFTakePhotoAction : WFAction <AVCapturePhotoCaptureDelegate> {

	unsigned long long _remainingPhotos;
	AVCaptureSession* _session;

}

@property (nonatomic,retain) AVCaptureSession * session;                      //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) unsigned long long remainingPhotos;              //@synthesize remainingPhotos=_remainingPhotos - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AVCaptureSession *)session;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3 ;
-(void)takePhoto;
-(unsigned long long)remainingPhotos;
-(void)setRemainingPhotos:(unsigned long long)arg1 ;
@end

