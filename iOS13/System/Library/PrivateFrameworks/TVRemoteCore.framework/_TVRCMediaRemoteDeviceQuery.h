/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol _TVRCMediaRemoteDeviceQueryDelegate;
@interface _TVRCMediaRemoteDeviceQuery : NSObject {

	void* _televisionController;
	id<_TVRCMediaRemoteDeviceQueryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_TVRCMediaRemoteDeviceQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_TVRCMediaRemoteDeviceQueryDelegate>)delegate;
-(void)setDelegate:(id<_TVRCMediaRemoteDeviceQueryDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(BOOL)_shouldUseMediaRemoteForConnection:(void*)arg1 ;
-(void)_discoveredTelevision:(void*)arg1 ;
-(void)_removedTelevision:(void*)arg1 ;
@end

