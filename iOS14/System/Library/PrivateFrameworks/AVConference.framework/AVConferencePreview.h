/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol AVConferencePreviewClientDelegate, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class AVConferenceXPCClient, CALayer, VideoAttributes, NSObject, NSString;

@interface AVConferencePreview : NSObject {

	AVConferenceXPCClient* connection;
	BOOL clientWantsPreview;
	unsigned connectionAttempts;
	CALayer* caLayerFront;
	CALayer* caLayerBack;
	VideoAttributes* localVideoAttributes;
	CGSize localScreenPortraitAspectRatio;
	CGSize localScreenLandscapeAspectRatio;
	NSObject*<AVConferencePreviewClientDelegate> delegate;
	NSObject*<OS_dispatch_queue> avConferencePreviewQueue;
	NSObject*<OS_dispatch_queue> avConferencePreviewNotificationQueue;
	BOOL _isPreviewRunning;
	BOOL _zoomAvailable;
	double _currentZoomFactor;
	double _maxZoomFactor;
	NSString* _localCameraUID;

}

@property (nonatomic,retain) NSObject*<AVConferencePreviewClientDelegate> delegate; 
+(id)AVConferencePreviewSingleton;
-(void)endPreviewToPIPAnimation;
-(void)setAnimoji:(id)arg1 ;
-(void)setCameraZoomFactor:(double)arg1 ;
-(oneway void)release;
-(id)init;
-(NSObject*<AVConferencePreviewClientDelegate>)delegate;
-(double)maxZoomFactor;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(id)retain;
-(void)beginPIPToPreviewAnimation;
-(void)stopPreview;
-(id)autorelease;
-(void)pausePreview;
-(void)setDelegate:(NSObject*<AVConferencePreviewClientDelegate>)arg1 ;
-(id)allocWithZone:(NSZone*)arg1 ;
-(void)setLocalVideoAttributes:(id)arg1 ;
-(void)beginPreviewToPIPAnimation;
-(void)setLocalScreenAttributes:(id)arg1 ;
-(unsigned long long)retainCount;
-(id)localCameraUID;
-(void)startPreview;
-(void)setLocalCameraWithUID:(id)arg1 ;
-(BOOL)isPreviewRunning;
-(id)localVideoLayer:(BOOL)arg1 ;
-(void)setLocalVideoLayer:(id)arg1 front:(BOOL)arg2 ;
-(void)didStartPreview;
-(void)didPausePreview;
-(void)didStopPreview;
-(void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1 ;
-(void)didChangeLocalVideoAttributes:(id)arg1 ;
-(void)didChangeLocalScreenAttributes:(id)arg1 ;
-(void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2 ;
-(void)didReceiveCommError;
-(void)didGetSnapshot:(id)arg1 ;
-(void)cameraDidBecomeAvailableForUniqueID:(id)arg1 ;
-(void)cameraDidBecomeInterruptedForForUniqueID:(id)arg1 reason:(long long)arg2 ;
-(void)cameraZoomAvailabilityDidChange:(BOOL)arg1 currentZoomFactor:(double)arg2 maxZoomFactor:(double)arg3 ;
-(void)setCameraZoomFactor:(double)arg1 withRate:(double)arg2 ;
-(void)endPIPToPreviewAnimation;
-(id)localVideoAttributes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setMemoji:(id)arg1 ;
-(void)registerBlocksForDelegateNotifications;
-(void)resetLocalCameraAfterServerDisconnect;
-(void)connectLayer:(id)arg1 withSlot:(unsigned)arg2 ;
-(void)startPreviewUnpausing:(BOOL)arg1 ;
-(BOOL)isCameraZoomAvailable;
-(double)currentZoomFactor;
-(void)getSnapshot;
-(void)setLocalCamera:(unsigned)arg1 ;
-(unsigned)localCamera;
-(void)addStickerWithURL:(id)arg1 isFaceSticker:(BOOL)arg2 atPosition:(CGPoint)arg3 identifier:(id)arg4 ;
-(void)clearAllStickers:(BOOL)arg1 ;
@end

