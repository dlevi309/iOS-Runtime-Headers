/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class AVConferenceXPCClient;

@interface AVCVirtualTTYDevice : NSObject {

	AVConferenceXPCClient* _connection;
	id _delegate;
	BOOL _isStarted;

}

@property (assign,nonatomic) id<AVCVirtualTTYDeviceDelegate> delegate; 
-(void)dealloc;
-(id<AVCVirtualTTYDeviceDelegate>)delegate;
-(void)setDelegate:(id<AVCVirtualTTYDeviceDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(id)initWithStreamToken:(long long)arg1 error:(id*)arg2 ;
-(id)initWithMode:(long long)arg1 error:(id*)arg2 ;
-(BOOL)sendText:(id)arg1 ;
-(id)sendCharacter:(unsigned short)arg1 ;
-(void)registerBlocksForDelegateNotifications;
-(void)deregisterBlocksForDelegateNotifications;
-(void)terminateSession;
-(id)initWithMode:(long long)arg1 error:(id*)arg2 streamToken:(long long)arg3 ;
@end

