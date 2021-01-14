/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_queue, CSRemoteControlClientDelegate;
@class NSObject;

@interface CSRemoteControlClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<CSRemoteControlClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSRemoteControlClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)isConnected;
-(id)init;
-(id<CSRemoteControlClientDelegate>)delegate;
-(void)setDelegate:(id<CSRemoteControlClientDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)waitingForConnection:(double)arg1 error:(id*)arg2 ;
@end

