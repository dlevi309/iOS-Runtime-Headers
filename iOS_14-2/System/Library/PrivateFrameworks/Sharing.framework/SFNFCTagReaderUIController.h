/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
@class NSObject, CUXPCAgent, NSXPCConnection, CUXPCAgentConnection, NSString;

@interface SFNFCTagReaderUIController : NSObject {

	BOOL _activateCalled;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	long long _nfcTagScanCount;
	BOOL _nfcTagScanPending;
	CUXPCAgent* _xpcAgent;
	NSXPCConnection* _xpcCnx;
	CUXPCAgentConnection* _xpcUICnx;
	/*^block*/id _invalidationHandler;
	long long _mode;
	NSString* _purpose;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) long long mode;                                          //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSString * purpose;                                        //@synthesize purpose=_purpose - In the implementation block
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(long long)mode;
-(NSString *)purpose;
-(void)setPurpose:(NSString *)arg1 ;
-(void)uiActivatedWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)uiInvalidatedWithCompletion:(/*^block*/id)arg1 ;
-(void)nfcTagScannedCount:(long long)arg1 ;
-(void)_nfcTagScannedCount;
-(void)nfcTagScanned;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setMode:(long long)arg1 ;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidated;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
@end

