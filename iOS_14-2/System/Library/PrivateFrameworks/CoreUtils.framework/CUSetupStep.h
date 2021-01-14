/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)run;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)setupFlags;
-(void)setSetupFlags:(unsigned long long)arg1 ;
-(void)setSetupFlow:(CUSetupFlow *)arg1 ;
-(BOOL)runAndReturnError:(id*)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setEnvironment:(CUEnvironment *)arg1 ;
-(void)_invalidated;
-(CUEnvironment *)environment;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(CUSetupFlow *)setupFlow;
@end

