/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/NFReaderSessionDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source, NFSession;
@class NSObject, NFTag, NSMutableArray, CURetrier, NFReaderSession, NSString;

@interface CUNFCScanner : NSObject <NFReaderSessionDelegate> {

	BOOL _invalidateCalled;
	NSObject*<OS_dispatch_queue> _nfcDispatchQueue;
	NFTag* _nfcConnectedTag;
	NSMutableArray* _nfcDevices;
	BOOL _nfcPollingHW;
	NSObject*<OS_dispatch_source> _nfcPollTimer;
	CURetrier* _nfcRetrier;
	NFReaderSession* _nfcSession;
	BOOL _nfcStarted;
	NSObject*<NFSession> _nfcTempSession;
	BOOL _pauseWhenFound;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _foundDeviceHandler;
	/*^block*/id _lostDeviceHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL pauseWhenFound;                                     //@synthesize pauseWhenFound=_pauseWhenFound - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id foundDeviceHandler;                                     //@synthesize foundDeviceHandler=_foundDeviceHandler - In the implementation block
@property (nonatomic,copy) id lostDeviceHandler;                                      //@synthesize lostDeviceHandler=_lostDeviceHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(void)pause;
-(void)resume;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activate;
-(void)_invalidateWithError:(id)arg1 ;
-(void)_ensureSessionStarted;
-(void)_ensureSessionStopped;
-(void)_handleSessionStarted:(id)arg1 error:(id)arg2 ;
-(void)readerSession:(id)arg1 didDetectTags:(id)arg2 ;
-(void)readerSessionDidEndUnexpectedly:(id)arg1 ;
-(void)_pause;
-(void)_handleTagFound:(id)arg1 ;
-(void)_updatePolling;
-(void)_pollTags;
-(BOOL)_pollTag:(id)arg1 ;
-(id)_readTag:(id)arg1 ;
-(id)_parseRecord:(id)arg1 ;
-(BOOL)pauseWhenFound;
-(void)setPauseWhenFound:(BOOL)arg1 ;
-(id)foundDeviceHandler;
-(void)setFoundDeviceHandler:(id)arg1 ;
-(id)lostDeviceHandler;
-(void)setLostDeviceHandler:(id)arg1 ;
@end

