/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)disconnect;
-(id<AVCCaptionsClientDelegate>)delegate;
-(BOOL)connect;
-(long long)streamToken;
-(void)dealloc;
-(void)registerBlocksForNotifications;
-(void)deregisterBlocksForNotifications;
-(id)initWithDelegate:(id)arg1 streamToken:(long long)arg2 ;
-(BOOL)captionsEnabled;
-(BOOL)captionsSupported;
-(void)enableCaptions:(BOOL)arg1 ;
-(void)configureCaptions:(id)arg1 ;
@end

