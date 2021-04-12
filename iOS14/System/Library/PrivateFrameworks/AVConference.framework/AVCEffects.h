/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class AVConferenceXPCClient, NSObject;

@interface AVCEffects : NSObject {

	id _delegate;
	AVConferenceXPCClient* _connection;
	NSObject*<OS_dispatch_queue> _avConferenceEffectsQueue;
	int _mode;
	BOOL _isEffectsApplied;
	BOOL _isFaceMeshTrackingEnabled;
	int _effectType;
	opaqueVCRemoteImageQueueRef _receiverQueue;
	CVBufferRef _lastReceivedPixelBuffer;
	CVBufferRef _lastReceivedDepthBuffer;

}

@property (assign,nonatomic) id<AVCEffectsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int mode;                                     //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) int effectType;                               //@synthesize effectType=_effectType - In the implementation block
-(int)mode;
-(id<AVCEffectsDelegate>)delegate;
-(int)effectType;
-(void)setMode:(int)arg1 ;
-(void)setDelegate:(id<AVCEffectsDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)dealloc;
-(void)registerBlocksForNotifications;
-(BOOL)setupRemoteReceiverQueueWithSenderQueue:(id)arg1 ;
-(void)deregisterBlocksForNotifications;
-(void)remoteQueueOperationHandlerWithError:(int)arg1 operation:(FigRemoteOperation*)arg2 ;
-(void)avcVideoFrameDidRelease:(id)arg1 ;
-(void)setEffectType:(int)arg1 ;
-(void)encodeProcessedVideoFrame:(id)arg1 ;
@end

