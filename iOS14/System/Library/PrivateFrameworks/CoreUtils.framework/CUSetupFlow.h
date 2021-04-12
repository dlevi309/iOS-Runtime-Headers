/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/CUActivatable.h>
#import <libobjc.A.dylib/CUEnvironmentable.h>

@protocol OS_dispatch_queue;
@class CUEnvironment, NSMutableArray, NSObject, CUEndpoint;

@interface CUSetupFlow : NSObject <CUActivatable, CUEnvironmentable> {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSMutableArray* _stepArray;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	CUEnvironment* _environment;
	/*^block*/id _errorHandler;
	CUEndpoint* _peerEndpoint;
	/*^block*/id _runHandler;
	unsigned long long _setupFlags;

}

@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,retain) CUEndpoint * peerEndpoint;                               //@synthesize peerEndpoint=_peerEndpoint - In the implementation block
@property (nonatomic,copy) id runHandler;                                             //@synthesize runHandler=_runHandler - In the implementation block
@property (assign,nonatomic) unsigned long long setupFlags;                           //@synthesize setupFlags=_setupFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,retain) CUEnvironment * environment;                             //@synthesize environment=_environment - In the implementation block
-(id)errorHandler;
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(BOOL)run;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)runHandler;
-(void)setRunHandler:(id)arg1 ;
-(unsigned long long)setupFlags;
-(void)setSetupFlags:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setPeerEndpoint:(CUEndpoint *)arg1 ;
-(CUEndpoint *)peerEndpoint;
-(void)addStep:(id)arg1 ;
-(void)setEnvironment:(CUEnvironment *)arg1 ;
-(void)reportError:(id)arg1 ;
-(void)_invalidated;
-(CUEnvironment *)environment;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
@end

