/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/CUActivatable.h>
#import <libobjc.A.dylib/CUEnvironmentable.h>

@protocol OS_dispatch_queue;
@class NSObject, CUEnvironment, CUSetupFlow;

@interface CUSetupStep : NSObject <CUActivatable, CUEnvironmentable> {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	int _runState;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	CUEnvironment* _environment;
	unsigned long long _setupFlags;
	CUSetupFlow* _setupFlow;

}

@property (nonatomic,retain) CUSetupFlow * setupFlow;                                 //@synthesize setupFlow=_setupFlow - In the implementation block
@property (assign,nonatomic) unsigned long long setupFlags;                           //@synthesize setupFlags=_setupFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,retain) CUEnvironment * environment;                             //@synthesize environment=_environment - In the implementation block
-(id)init;
-(BOOL)run;
-(void)invalidate;
-(void)_invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(CUEnvironment *)environment;
-(void)setEnvironment:(CUEnvironment *)arg1 ;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)setupFlags;
-(void)setSetupFlags:(unsigned long long)arg1 ;
-(void)setSetupFlow:(CUSetupFlow *)arg1 ;
-(BOOL)runAndReturnError:(id*)arg1 ;
-(CUSetupFlow *)setupFlow;
@end

