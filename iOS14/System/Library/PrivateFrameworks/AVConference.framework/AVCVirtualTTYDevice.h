/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class AVConferenceXPCClient;

@interface AVCVirtualTTYDevice : NSObject {

	AVConferenceXPCClient* _connection;
	id _delegate;
	BOOL _isStarted;

}

@property (assign,nonatomic) id<AVCVirtualTTYDeviceDelegate> delegate; 
-(id<AVCVirtualTTYDeviceDelegate>)delegate;
-(void)start;
-(void)stop;
-(void)setDelegate:(id<AVCVirtualTTYDeviceDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithStreamToken:(long long)arg1 error:(id*)arg2 ;
-(id)initWithMode:(long long)arg1 error:(id*)arg2 ;
-(BOOL)sendText:(id)arg1 ;
-(id)sendCharacter:(unsigned short)arg1 ;
-(void)registerBlocksForDelegateNotifications;
-(void)deregisterBlocksForDelegateNotifications;
-(void)terminateSession;
-(id)initWithMode:(long long)arg1 error:(id*)arg2 streamToken:(long long)arg3 ;
@end

