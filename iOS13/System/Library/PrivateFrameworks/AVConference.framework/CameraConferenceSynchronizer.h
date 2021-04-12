/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class VCVideoRule;

@interface CameraConferenceSynchronizer : NSObject {

	BOOL isConference720p;
	BOOL isConferenceOniPad;
	BOOL receivedRequestToChangeCamera;
	BOOL receivedFirstRemoteFrame;
	int cameraHasChangedToCapture;
	int didSendFirstRemoteFrameNotification;
	VCVideoRule* captureRule;
	CGSize localPortraitAspectRatio;
	/*^block*/id remoteFrameNotificationBlock;
	/*^block*/id didStopNotificationBlock;

}

@property (assign,setter=setLocalPortraitAspectRatio:,nonatomic) CGSize localPortraitAspectRatio; 
-(id)init;
-(void)dealloc;
-(void)reset;
-(CGSize)localPortraitAspectRatio;
-(void)setLocalPortraitAspectRatio:(CGSize)arg1 ;
-(void)scheduleFirstRemoteFrameNotification:(/*^block*/id)arg1 ;
-(void)scheduleCameraChangeToCaptureSettings:(id)arg1 ;
-(void)scheduleCameraChangeToPreviewSettings;
-(void)cameraSizeChangedTo:(CGSize)arg1 ;
-(BOOL)shouldConferenceSendFirstRemoteFrameNotification;
-(void)notifyClientOfRemoteFrame:(double)arg1 ;
-(BOOL)shouldConferenceChangeCameraToCaptureSettings;
-(void)changeCameraToCaptureSettings:(double)arg1 forced:(BOOL)arg2 ;
-(BOOL)shouldConferenceChangeCameraToPreviewSettings;
@end

