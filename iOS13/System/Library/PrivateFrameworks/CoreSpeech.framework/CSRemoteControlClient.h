/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_queue, CSRemoteControlClientDelegate;
@class NSObject;

@interface CSRemoteControlClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<CSRemoteControlClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSRemoteControlClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<CSRemoteControlClientDelegate>)delegate;
-(void)setDelegate:(id<CSRemoteControlClientDelegate>)arg1 ;
-(BOOL)isConnected;
-(BOOL)waitingForConnection:(double)arg1 error:(id*)arg2 ;
@end

