/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(AVCaptureSession *)session;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2 ;
-(void)takePhoto;
-(unsigned long long)remainingPhotos;
-(void)setRemainingPhotos:(unsigned long long)arg1 ;
@end

