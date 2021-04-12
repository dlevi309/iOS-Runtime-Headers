/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
*/

#import <IMAVCore/IMAVCore-Structs.h>
#import <libobjc.A.dylib/AVConferencePreviewClientDelegate.h>
#import <IMAVCore/IMSystemMonitorListener.h>

@class AVConferencePreview;

@interface IMAVLocalPreviewClient : NSObject <AVConferencePreviewClientDelegate, IMSystemMonitorListener> {

	BOOL _shouldAlterPreviewState;
	BOOL _wantsPreview;
	BOOL _wantsPausedPreview;
	BOOL _wantsUnpausedPreview;
	AVConferencePreview* _conferencePreview;

}

@property (nonatomic,retain) AVConferencePreview * conferencePreview;              //@synthesize conferencePreview=_conferencePreview - In the implementation block
@property (nonatomic,readonly) BOOL isPreviewRunning; 
@property (assign,nonatomic) unsigned cameraType; 
@property (assign,nonatomic) unsigned cameraOrientation; 
@property (assign,nonatomic) void* localVideoLayer; 
@property (assign,nonatomic) void* localVideoBackLayer; 
+(id)sharedInstance;
+(CGSize)localPortraitAspectRatio;
-(id)init;
-(void)dealloc;
-(unsigned)cameraType;
-(void)startPreview;
-(void)stopPreview;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
-(void)systemScreenDidPowerUp;
-(void)systemScreenDidPowerDown;
-(BOOL)isPreviewRunning;
-(void)pausePreview;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(void)setLocalScreenAttributes:(id)arg1 ;
-(void)didStartPreview;
-(void)didPausePreview;
-(void)didStopPreview;
-(void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1 ;
-(void)didChangeLocalVideoAttributes:(id)arg1 ;
-(void)didChangeLocalScreenAttributes:(id)arg1 ;
-(void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2 ;
-(void)cameraDidBecomeAvailableForUniqueID:(id)arg1 ;
-(void)setCameraType:(unsigned)arg1 ;
-(void)setCameraOrientation:(unsigned)arg1 ;
-(unsigned)cameraOrientation;
-(void*)localVideoLayer;
-(void)setLocalVideoLayer:(void*)arg1 ;
-(void*)localVideoBackLayer;
-(void)setLocalVideoBackLayer:(void*)arg1 ;
-(void)avChat:(id)arg1 setLocalPortraitRatio:(CGSize)arg2 localLandscapeRatio:(CGSize)arg3 ;
-(void)_avDaemonConnected;
-(AVConferencePreview *)conferencePreview;
-(BOOL)_shouldPreviewBeRunning;
-(void)_updatePreviewState;
-(void)updateLocalScreenAtrributes;
-(void)unpausePreview;
-(void)beginAnimationToPIP;
-(void)endAnimationToPIP;
-(void)beginAnimationToPreview;
-(void)endAnimationToPreview;
-(void)setConferencePreview:(AVConferencePreview *)arg1 ;
@end

