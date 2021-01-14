/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/_HMCameraControl.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol _HMCameraStreamControlDelegate;
@class HMCameraStream, NSString;

@interface _HMCameraStreamControl : _HMCameraControl <HMFLogging> {

	BOOL _shouldResetStateOnHomedRestart;
	unsigned long long _streamState;
	HMCameraStream* _cameraStream;
	id<_HMCameraStreamControlDelegate> _delegate;
	NSString* _streamSessionID;

}

@property (assign,nonatomic) unsigned long long streamState;                                  //@synthesize streamState=_streamState - In the implementation block
@property (nonatomic,copy) NSString * streamSessionID;                                        //@synthesize streamSessionID=_streamSessionID - In the implementation block
@property (assign) BOOL shouldResetStateOnHomedRestart;                                       //@synthesize shouldResetStateOnHomedRestart=_shouldResetStateOnHomedRestart - In the implementation block
@property (assign,nonatomic,__weak) id<_HMCameraStreamControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HMCameraStream * cameraStream;                                 //@synthesize cameraStream=_cameraStream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<_HMCameraStreamControlDelegate>)delegate;
-(unsigned long long)streamState;
-(void)setStreamState:(unsigned long long)arg1 ;
-(id)logIdentifier;
-(void)setDelegate:(id<_HMCameraStreamControlDelegate>)arg1 ;
-(void)stopStream;
-(id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3 ;
-(HMCameraStream *)cameraStream;
-(void)startStreamWithPreferences:(id)arg1 ;
-(void)_stopStream;
-(void)homedRestarted:(id)arg1 ;
-(void)homedInterrupted:(id)arg1 ;
-(BOOL)shouldResetStateOnHomedRestart;
-(void)_resetState:(id)arg1 ;
-(NSString *)streamSessionID;
-(void)setShouldResetStateOnHomedRestart:(BOOL)arg1 ;
-(void)setCameraStream:(HMCameraStream *)arg1 ;
-(void)setStreamSessionID:(NSString *)arg1 ;
-(void)_callVideoStoppedDelegate:(id)arg1 ;
-(void)_handleVideoStreamStopped:(id)arg1 ;
-(void)_callVideoStartedDelegate;
-(void)_startStreamWithPreferences:(id)arg1 ;
-(void)_handleNegotiateStreamResponse:(id)arg1 streamPreferences:(id)arg2 sessionID:(id)arg3 error:(id)arg4 ;
-(void)_handleVideoStreamStartResponse:(id)arg1 streamPreferences:(id)arg2 error:(id)arg3 sessionID:(id)arg4 ;
-(void)_handleVideoStopResponse:(id)arg1 error:(id)arg2 sessionID:(id)arg3 ;
-(void)_registerNotificationHandlers;
-(void)dealloc;
@end

