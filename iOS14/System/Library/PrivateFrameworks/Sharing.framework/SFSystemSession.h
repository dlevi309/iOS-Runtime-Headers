/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
@class SFSessionRequestInfo, NSMutableArray, SFSession, NSError, NSObject, SFDevice;

@interface SFSystemSession : NSObject {

	SFSessionRequestInfo* _currentRequest;
	BOOL _invalidateCalled;
	BOOL _pairVerifyDone;
	NSMutableArray* _requests;
	SFSession* _sfSession;
	int _state;
	BOOL _stateDone;
	NSError* _stateError;
	BOOL _allowUnencrypted;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SFDevice* _peerDevice;

}

@property (assign,nonatomic) BOOL allowUnencrypted;                                   //@synthesize allowUnencrypted=_allowUnencrypted - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
-(void)_run;
-(void)_cleanup;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_runSFSessionStart;
-(SFDevice *)peerDevice;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)_runPairVerifyStart;
-(void)_processRequestsWithError:(id)arg1 ;
-(void)getProfilesResponse:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)installProfileResponse:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)installProfileWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSystemInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)getProfilesWithCompletion:(/*^block*/id)arg1 ;
-(void)installProfileWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)rebootSystemWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)allowUnencrypted;
-(void)setAllowUnencrypted:(BOOL)arg1 ;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(void)invalidate;
-(void)_processRequests;
-(void)removeProfileWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

