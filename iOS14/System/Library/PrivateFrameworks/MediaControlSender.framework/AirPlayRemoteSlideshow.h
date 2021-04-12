/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHost:(id)arg1 ;
-(id)init;
-(id<AirPlayRemoteSlideshowDelegate>)delegate;
-(void)setDispatchQueue:(id)arg1 ;
-(void)setDelegate:(id<AirPlayRemoteSlideshowDelegate>)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)dealloc;
-(void)_configureEventHandler;
-(void)getFeaturesWithOptions:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)getFeaturesWithCompletion:(/*^block*/id)arg1 ;
-(void)startWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

