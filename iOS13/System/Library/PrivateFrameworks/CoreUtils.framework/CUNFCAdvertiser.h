/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/NFNdefTagSessionDelegate.h>

@protocol NFSession, OS_dispatch_queue;
@class CURetrier, NFNdefTagSession, NSObject, NSURL, NSString;

@interface CUNFCAdvertiser : NSObject <NFNdefTagSessionDelegate> {

	BOOL _invalidateCalled;
	CURetrier* _nfcRetrier;
	NFNdefTagSession* _nfcSession;
	BOOL _nfcStarted;
	NSObject*<NFSession> _nfcTempSession;
	NSURL* _advertisementURI;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _tagStateChangedHandler;

}

@property (nonatomic,copy) NSURL * advertisementURI;                                  //@synthesize advertisementURI=_advertisementURI - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id tagStateChangedHandler;                                 //@synthesize tagStateChangedHandler=_tagStateChangedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activate;
-(void)ndefTagSession:(id)arg1 didTagStateChange:(unsigned)arg2 ;
-(void)ndefTagSessionDidEndUnexpectedly:(id)arg1 ;
-(void)_invalidateWithError:(id)arg1 ;
-(void)_ensureSessionStarted;
-(void)_ensureSessionStopped;
-(void)_handleSessionStarted:(id)arg1 error:(id)arg2 ;
-(NSURL *)advertisementURI;
-(void)setAdvertisementURI:(NSURL *)arg1 ;
-(id)tagStateChangedHandler;
-(void)setTagStateChangedHandler:(id)arg1 ;
@end

