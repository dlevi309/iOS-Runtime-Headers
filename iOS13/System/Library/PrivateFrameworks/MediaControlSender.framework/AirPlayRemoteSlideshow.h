/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
*/


@protocol OS_dispatch_queue, AirPlayRemoteSlideshowDelegate;
@class NSObject, MediaControlClient;

@interface AirPlayRemoteSlideshow : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	MediaControlClient* _client;
	id<AirPlayRemoteSlideshowDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _userQueue;
	BOOL _started;
	double _startTime;

}

@property (assign,nonatomic) id<AirPlayRemoteSlideshowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<AirPlayRemoteSlideshowDelegate>)delegate;
-(void)setDelegate:(id<AirPlayRemoteSlideshowDelegate>)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)setHost:(id)arg1 ;
-(void)setDispatchQueue:(id)arg1 ;
-(void)_configureEventHandler;
-(void)getFeaturesWithOptions:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)getFeaturesWithCompletion:(/*^block*/id)arg1 ;
-(void)startWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

