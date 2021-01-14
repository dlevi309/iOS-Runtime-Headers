/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class AVConferenceXPCClient, NSObject;

@interface AVCVideoDataOutput : NSObject {

	AVConferenceXPCClient* _connection;
	SCD_Struct_AV149 _videoAttributes;
	id _delegate;
	long long _streamToken;
	BOOL _isValid;
	BOOL _isVideoDegraded;
	BOOL _isVideoSuspended;
	BOOL _isMediaStalled;
	BOOL _isVideoPaused;
	opaqueVCRemoteImageQueueRef _receiverQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _internalReceiverQueue;

}

@property (assign,nonatomic) BOOL isVideoPaused;                                              //@synthesize isVideoPaused=_isVideoPaused - In the implementation block
@property (assign,nonatomic) BOOL isMediaStalled;                                             //@synthesize isMediaStalled=_isMediaStalled - In the implementation block
@property (assign,nonatomic) BOOL isVideoDegraded;                                            //@synthesize isVideoDegraded=_isVideoDegraded - In the implementation block
@property (assign,nonatomic) BOOL isVideoSuspended;                                           //@synthesize isVideoSuspended=_isVideoSuspended - In the implementation block
@property (assign,nonatomic) BOOL isValid;                                                    //@synthesize isValid=_isValid - In the implementation block
@property (assign,nonatomic) id<AVCVideoDataOutputDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV150 videoAttributes;                                //@synthesize videoAttributes=_videoAttributes - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                      //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalReceiverQueue;              //@synthesize internalReceiverQueue=_internalReceiverQueue - In the implementation block
@property (nonatomic,readonly) long long streamToken;                                         //@synthesize streamToken=_streamToken - In the implementation block
-(id<AVCVideoDataOutputDelegate>)delegate;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<AVCVideoDataOutputDelegate>)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(BOOL)isValid;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(long long)streamToken;
-(void)dealloc;
-(BOOL)isMediaStalled;
-(BOOL)isVideoDegraded;
-(BOOL)isVideoPaused;
-(void)setIsVideoPaused:(BOOL)arg1 ;
-(void)deregisterBlocksForNotifications;
-(void)remoteQueueOperationHandlerWithError:(int)arg1 operation:(FigRemoteOperation*)arg2 ;
-(BOOL)isVideoSuspended;
-(int)createReceiverQueue;
-(void)setupDelegateQueue:(id)arg1 ;
-(int)setupXPCConnection;
-(int)setupRemoteQueueWithSenderQueue:(id)arg1 ;
-(void)registerBlocksForNotification;
-(void)onReceiveFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)setIsMediaStalled:(BOOL)arg1 ;
-(void)setIsVideoDegraded:(BOOL)arg1 ;
-(void)setIsVideoSuspended:(BOOL)arg1 ;
-(void)terminateConnection;
-(id)initWithStreamToken:(long long)arg1 delegate:(id)arg2 queue:(id)arg3 error:(id*)arg4 ;
-(SCD_Struct_AV150)videoAttributes;
-(void)setVideoAttributes:(SCD_Struct_AV150)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalReceiverQueue;
-(void)setInternalReceiverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

