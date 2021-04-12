/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/_HMCameraControl.h>

@protocol _HMCameraStreamControlDelegate;
@class HMCameraStream, NSString;

@interface _HMCameraStreamControl : _HMCameraControl {

	unsigned long long _streamState;
	HMCameraStream* _cameraStream;
	id<_HMCameraStreamControlDelegate> _delegate;
	NSString* _streamSessionID;

}

@property (assign,nonatomic) unsigned long long streamState;                                  //@synthesize streamState=_streamState - In the implementation block
@property (nonatomic,retain) NSString * streamSessionID;                                      //@synthesize streamSessionID=_streamSessionID - In the implementation block
@property (assign,nonatomic,__weak) id<_HMCameraStreamControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HMCameraStream * cameraStream;                                 //@synthesize cameraStream=_cameraStream - In the implementation block
-(void)dealloc;
-(id<_HMCameraStreamControlDelegate>)delegate;
-(void)setDelegate:(id<_HMCameraStreamControlDelegate>)arg1 ;
-(id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3 ;
-(unsigned long long)streamState;
-(HMCameraStream *)cameraStream;
-(void)startStreamWithPreferences:(id)arg1 ;
-(void)stopStream;
-(void)_registerNotificationHandlers;
-(void)homedRestarted:(id)arg1 ;
-(void)_resetState:(id)arg1 ;
-(void)setCameraStream:(HMCameraStream *)arg1 ;
-(void)setStreamSessionID:(NSString *)arg1 ;
-(void)setStreamState:(unsigned long long)arg1 ;
-(void)_callVideoStoppedDelegate:(id)arg1 ;
-(void)_handleVideoStreamStopped:(id)arg1 ;
-(NSString *)streamSessionID;
-(void)_startStreamWithPreferences:(id)arg1 ;
-(void)_handleNegotiateStreamResponse:(id)arg1 streamPreferences:(id)arg2 error:(id)arg3 sessionID:(id)arg4 ;
-(void)_handleVideoStreamStartResponse:(id)arg1 streamPreferences:(id)arg2 error:(id)arg3 sessionID:(id)arg4 ;
-(void)_callVideoStartedDelegate;
-(void)_stopStream;
-(void)_handleVideoStopResponse:(id)arg1 error:(id)arg2 sessionID:(id)arg3 ;
@end

