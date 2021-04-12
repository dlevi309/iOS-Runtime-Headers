/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
*/


@class CUMessageSession, TVLTimeSync, TVLListenEngine;

@interface TVLAudioLatencyEstimator : NSObject {

	float _version;
	unsigned long long _role;
	/*^block*/id _progressEventHandler;
	/*^block*/id _completion;
	CUMessageSession* _session;
	TVLTimeSync* _timeSync;
	TVLListenEngine* _listenEngine;
	/*^block*/id _internalProgressEventHandler;

}

@property (assign,nonatomic) float version;                               //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) id completion;                                 //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) CUMessageSession * session;                  //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) TVLTimeSync * timeSync;                      //@synthesize timeSync=_timeSync - In the implementation block
@property (nonatomic,retain) TVLListenEngine * listenEngine;              //@synthesize listenEngine=_listenEngine - In the implementation block
@property (nonatomic,copy) id internalProgressEventHandler;               //@synthesize internalProgressEventHandler=_internalProgressEventHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long role;                   //@synthesize role=_role - In the implementation block
@property (nonatomic,copy) id progressEventHandler;                       //@synthesize progressEventHandler=_progressEventHandler - In the implementation block
-(void)invalidate;
-(unsigned long long)role;
-(float)version;
-(void)setVersion:(float)arg1 ;
-(CUMessageSession *)session;
-(void)setSession:(CUMessageSession *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)estimate;
-(void)_tearDown;
-(void)activate;
-(void)_invalidateWithError:(id)arg1 ;
-(id)initWithMessageSession:(id)arg1 ;
-(void)setProgressEventHandler:(id)arg1 ;
-(void)_initWithMessageSession:(id)arg1 ;
-(void)_synchronizeClocksWithOptions:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_estimateAudioLatencyWithOptions:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_respondAndInvalidateWithError:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)estimateAudioLatencyWithToneIdentifier:(id)arg1 ;
-(void)_postProgressEvent:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(void)_sendMessage:(id)arg1 withResponse:(/*^block*/id)arg2 ;
-(void)setTimeSync:(TVLTimeSync *)arg1 ;
-(void)setListenEngine:(TVLListenEngine *)arg1 ;
-(TVLTimeSync *)timeSync;
-(TVLListenEngine *)listenEngine;
-(void)_postInternalProgressEvent:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(id)progressEventHandler;
-(id)internalProgressEventHandler;
-(void)setAudioLatencyEstimationCompletionHandler:(/*^block*/id)arg1 ;
-(void)setInternalProgressEventHandler:(id)arg1 ;
@end

