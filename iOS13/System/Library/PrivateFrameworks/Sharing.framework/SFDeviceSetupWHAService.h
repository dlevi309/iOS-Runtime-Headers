/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
@class SFService, SFSession, SFDeviceOperationHandlerCDPSetup, NSObject;

@interface SFDeviceSetupWHAService : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _prefCDPEnabled;
	SFService* _sfService;
	SFSession* _sfSession;
	SFDeviceOperationHandlerCDPSetup* _cdpSetupHandler;
	BOOL _needsCDPRepair;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _progressHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL needsCDPRepair;                                     //@synthesize needsCDPRepair=_needsCDPRepair - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(void)_cleanup;
-(void)activate;
-(void)_sfServiceStart;
-(void)_handleSessionEnded:(id)arg1 ;
-(void)_handleSessionStarted:(id)arg1 ;
-(void)_handleRequest:(id)arg1 flags:(unsigned)arg2 session:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_handleInfoExchange:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(BOOL)needsCDPRepair;
-(void)setNeedsCDPRepair:(BOOL)arg1 ;
@end

