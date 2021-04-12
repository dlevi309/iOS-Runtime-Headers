/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@protocol PHAJobConstraintsObserverDelegate;
@class PHAJobConstraints;

@interface PHAJobConstraintsObserver : NSObject {

	BOOL _shutdownRequested;
	id<PHAJobConstraintsObserverDelegate> _delegate;
	PHAJobConstraints* _currentConstraints;

}

@property (nonatomic,retain) PHAJobConstraints * currentConstraints;                             //@synthesize currentConstraints=_currentConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<PHAJobConstraintsObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL shutdownRequested;                                                       //@synthesize shutdownRequested=_shutdownRequested - In the implementation block
-(id)init;
-(void)dealloc;
-(id<PHAJobConstraintsObserverDelegate>)delegate;
-(void)setDelegate:(id<PHAJobConstraintsObserverDelegate>)arg1 ;
-(PHAJobConstraints *)currentConstraints;
-(void)setCurrentConstraints:(PHAJobConstraints *)arg1 ;
-(void)setShutdownRequested;
-(id)initWithInitialConstraints:(id)arg1 delegate:(id)arg2 ;
-(id)acceptConstraints:(id)arg1 mask:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shutdownRequested;
-(void)setShutdownRequested:(BOOL)arg1 ;
@end

