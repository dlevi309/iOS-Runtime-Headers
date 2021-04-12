/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoLoadingStateObserving.h>

@protocol SVPlayerItemLoading;
@class NSError, NFStateMachine, SVKeyValueObserver, NSString;

@interface SVVideoLoadingStateObserver : NSObject <SVVideoLoadingStateObserving> {

	unsigned long long _state;
	/*^block*/id _finishedBlock;
	/*^block*/id _failedBlock;
	/*^block*/id _startBlock;
	NSError* _error;
	id<SVPlayerItemLoading> _playerItemLoader;
	NFStateMachine* _stateMachine;
	SVKeyValueObserver* _playerItemStatusObserver;

}

@property (assign,nonatomic) unsigned long long state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) id<SVPlayerItemLoading> playerItemLoader;                 //@synthesize playerItemLoader=_playerItemLoader - In the implementation block
@property (nonatomic,readonly) NFStateMachine * stateMachine;                            //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * playerItemStatusObserver;              //@synthesize playerItemStatusObserver=_playerItemStatusObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onStart:,nonatomic,copy) id startBlock;                                //@synthesize startBlock=_startBlock - In the implementation block
@property (setter=onFinished:,nonatomic,copy) id finishedBlock;                          //@synthesize finishedBlock=_finishedBlock - In the implementation block
@property (setter=onFailed:,nonatomic,copy) id failedBlock;                              //@synthesize failedBlock=_failedBlock - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NFStateMachine *)stateMachine;
-(id)finishedBlock;
-(id)failedBlock;
-(id<SVPlayerItemLoading>)playerItemLoader;
-(void)configureStateWithPlayerItem:(id)arg1 ;
-(void)setPlayerItemStatusObserver:(SVKeyValueObserver *)arg1 ;
-(id)startBlock;
-(void)onStart:(/*^block*/id)arg1 ;
-(void)onFinished:(/*^block*/id)arg1 ;
-(void)onFailed:(/*^block*/id)arg1 ;
-(id)initWithPlayerItemLoader:(id)arg1 ;
-(SVKeyValueObserver *)playerItemStatusObserver;
@end

