/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
@class SFService, SFSession, TVLAudioLatencyEstimator, NSObject;

@interface SFDeviceSetupTVLatencyService : NSObject {

	BOOL _eventFinalDelivered;
	BOOL _finished;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	SFService* _sfService;
	SFSession* _sfSession;
	TVLAudioLatencyEstimator* _tvLatencyEstimator;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _progressHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
-(id)init;
-(void)invalidate;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(void)activate;
-(void)_sfServiceStart;
-(void)_handleSessionEnded:(id)arg1 ;
-(void)_handleSessionStarted:(id)arg1 ;
-(void)_handleFinishRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleTVLatencyProgressEvent:(unsigned long long)arg1 info:(id)arg2 ;
-(void)_handleTVLatencyRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_reportProgress:(unsigned)arg1 info:(id)arg2 ;
-(void)sendSetupAction:(unsigned)arg1 info:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
@end

