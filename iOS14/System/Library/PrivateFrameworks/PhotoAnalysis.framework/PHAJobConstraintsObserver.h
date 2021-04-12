/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)acceptConstraints:(id)arg1 mask:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setShutdownRequested:(BOOL)arg1 ;
-(BOOL)shutdownRequested;
-(id)init;
-(id<PHAJobConstraintsObserverDelegate>)delegate;
-(PHAJobConstraints *)currentConstraints;
-(id)initWithInitialConstraints:(id)arg1 delegate:(id)arg2 ;
-(void)setDelegate:(id<PHAJobConstraintsObserverDelegate>)arg1 ;
-(void)setCurrentConstraints:(PHAJobConstraints *)arg1 ;
-(void)setShutdownRequested;
-(void)dealloc;
@end

