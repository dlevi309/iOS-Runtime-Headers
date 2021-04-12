/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProximityControl.framework/ProximityControl
*/

#import <libobjc.A.dylib/PCActivatable.h>
#import <libobjc.A.dylib/PCBannerServerXPCInterface.h>
#import <libobjc.A.dylib/PCDiagnosticServerXPCInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface PCCLIClient : NSObject <PCActivatable, PCBannerServerXPCInterface, PCDiagnosticServerXPCInterface> {

	NSXPCConnection* _xpcCnx;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	/*^block*/id _interruptionHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)_interrupted;
-(void)_invalidated;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(id)interruptionHandler;
-(void)_xpcEnsureStarted;
-(void)dismissBannerWithCompletion:(/*^block*/id)arg1 ;
-(void)presentBannerWithCompletion:(/*^block*/id)arg1 ;
-(void)setBannerScaleProgress:(float)arg1 completion:(/*^block*/id)arg2 ;
-(void)tapBannerWithCompletion:(/*^block*/id)arg1 ;
-(void)stateWithCompletion:(/*^block*/id)arg1 ;
@end

