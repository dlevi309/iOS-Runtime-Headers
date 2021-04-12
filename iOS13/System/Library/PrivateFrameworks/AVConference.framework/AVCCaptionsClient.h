/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
@class AVConferenceXPCClient, NSObject;

@interface AVCCaptionsClient : NSObject {

	long long _streamToken;
	id _delegate;
	AVConferenceXPCClient* _connection;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) id<AVCCaptionsClientDelegate> delegate; 
@property (readonly) BOOL captionsSupported; 
@property (readonly) BOOL captionsEnabled; 
@property (readonly) long long streamToken;                               //@synthesize streamToken=_streamToken - In the implementation block
-(void)dealloc;
-(id<AVCCaptionsClientDelegate>)delegate;
-(void)disconnect;
-(BOOL)connect;
-(long long)streamToken;
-(void)registerBlocksForNotifications;
-(void)deregisterBlocksForNotifications;
-(id)initWithDelegate:(id)arg1 streamToken:(long long)arg2 ;
-(BOOL)captionsEnabled;
-(BOOL)captionsSupported;
-(void)enableCaptions:(BOOL)arg1 ;
-(void)configureCaptions:(id)arg1 ;
@end

