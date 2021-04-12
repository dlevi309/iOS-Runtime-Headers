/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLocalPortraitAspectRatio:(CGSize)arg1 ;
-(void)reset;
-(CGSize)localPortraitAspectRatio;
-(void)dealloc;
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

