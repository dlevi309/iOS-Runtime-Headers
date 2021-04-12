/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
@class SFSession, NSDate, NSObject, NSString, SFDevice;

@interface SFPasswordSharingSession : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	int _pairState;
	int _passwordShareState;
	SFSession* _sfSession;
	int _sfSessionState;
	NSDate* _shareClock;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _deviceName;
	NSString* _hashedEmail;
	NSString* _hashedPhone;
	NSString* _hotspotPSK;
	SFDevice* _peerDevice;
	/*^block*/id _progressHandler;
	/*^block*/id _promptForPINHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                                   //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * hashedEmail;                                  //@synthesize hashedEmail=_hashedEmail - In the implementation block
@property (nonatomic,retain) NSString * hashedPhone;                                  //@synthesize hashedPhone=_hashedPhone - In the implementation block
@property (nonatomic,retain) NSString * hotspotPSK;                                   //@synthesize hotspotPSK=_hotspotPSK - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                    //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
-(void)_run;
-(NSString *)deviceName;
-(void)_cleanup;
-(void)_completedWithError:(id)arg1 ;
-(id)init;
-(NSString *)hotspotPSK;
-(NSString *)hashedEmail;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)hashedPhone;
-(int)_runSFSessionStart;
-(int)_runPasswordShare;
-(void)_receivedObject:(id)arg1 flags:(unsigned)arg2 ;
-(void)_runPasswordShareSendInfo;
-(void)_runPasswordShareReceiveResponse:(id)arg1 ;
-(void)setHashedEmail:(NSString *)arg1 ;
-(void)setHashedPhone:(NSString *)arg1 ;
-(void)setHotspotPSK:(NSString *)arg1 ;
-(SFDevice *)peerDevice;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)tryPIN:(id)arg1 ;
-(void)activate;
-(id)promptForPINHandler;
-(void)setPromptForPINHandler:(id)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(int)_runPair;
-(void)invalidate;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)progressHandler;
-(void)dealloc;
@end

