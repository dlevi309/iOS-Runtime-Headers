/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol _TVRCMediaRemoteDeviceQueryDelegate;
@interface _TVRCMediaRemoteDeviceQuery : NSObject {

	void* _televisionController;
	id<_TVRCMediaRemoteDeviceQueryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_TVRCMediaRemoteDeviceQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_TVRCMediaRemoteDeviceQueryDelegate>)delegate;
-(void)start;
-(void)stop;
-(void)setDelegate:(id<_TVRCMediaRemoteDeviceQueryDelegate>)arg1 ;
-(BOOL)_shouldUseMediaRemoteForConnection:(void*)arg1 ;
-(void)_discoveredTelevision:(void*)arg1 ;
-(void)_removedTelevision:(void*)arg1 ;
@end

