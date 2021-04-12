/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol AVConferencePreviewClientDelegate, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class AVConferenceXPCClient, CALayer, VideoAttributes, NSObject, NSString;

@interface AVConferencePreview : NSObject {

	BOOL clientWantsPreview;
	unsigned connectionAttempts;
	AVConferenceXPCClient* connection;
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
-(id)init;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<AVConferencePreviewClientDelegate>)delegate;
-(void)setDelegate:(NSObject*<AVConferencePreviewClientDelegate>)arg1 ;
-(void)startPreview;
-(void)stopPreview;
-(double)maxZoomFactor;
-(id)localCameraUID;
-(void)setLocalCameraWithUID:(id)arg1 ;
-(id)localVideoAttributes;
-(void)setLocalVideoAttributes:(id)arg1 ;
-(BOOL)isPreviewRunning;
-(id)localVideoLayer:(BOOL)arg1 ;
-(void)setLocalVideoLayer:(id)arg1 front:(BOOL)arg2 ;
-(void)pausePreview;
-(void)setCameraZoomFactor:(double)arg1 ;
-(void)beginPIPToPreviewAnimation;
-(void)endPIPToPreviewAnimation;
-(void)beginPreviewToPIPAnimation;
-(void)endPreviewToPIPAnimation;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(void)setLocalScreenAttributes:(id)arg1 ;
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
-(void)setAnimoji:(id)arg1 ;
-(void)setMemoji:(id)arg1 ;
-(void)registerBlocksForDelegateNotifications;
-(void)startPreviewUnpausing:(BOOL)arg1 ;
-(void)addStickerWithURL:(id)arg1 isFaceSticker:(BOOL)arg2 atPosition:(CGPoint)arg3 identifier:(id)arg4 ;
-(void)clearAllStickers:(BOOL)arg1 ;
-(void)resetLocalCameraAfterServerDisconnect;
-(void)connectLayer:(id)arg1 withSlot:(unsigned)arg2 ;
-(BOOL)isCameraZoomAvailable;
-(double)currentZoomFactor;
-(void)getSnapshot;
-(void)setLocalCamera:(unsigned)arg1 ;
-(unsigned)localCamera;
@end

