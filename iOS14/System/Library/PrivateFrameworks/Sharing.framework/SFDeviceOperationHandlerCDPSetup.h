/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/CDPStateUIProvider.h>

@protocol OS_dispatch_queue;
@class CDPContext, CDPStateController, NSObject, SFSession, NSString;

@interface SFDeviceOperationHandlerCDPSetup : NSObject <CDPStateUIProvider> {

	CDPContext* _cdpContext;
	CDPStateController* _cdpController;
	BOOL _invalidateCalled;
	/*^block*/id _responseHandler;
	BOOL _failIfCDPNotEnabled;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SFSession* _sfSession;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL failIfCDPNotEnabled;                                //@synthesize failIfCDPNotEnabled=_failIfCDPNotEnabled - In the implementation block
@property (nonatomic,retain) SFSession * sfSession;                                   //@synthesize sfSession=_sfSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)_activate;
-(void)setSfSession:(SFSession *)arg1 ;
-(void)_handleCDPSetupRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(BOOL)arg3 validator:(id)arg4 ;
-(void)cdpContext:(id)arg1 promptForLocalSecretWithCompletion:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(BOOL)arg2 numericLength:(id)arg3 isRandom:(BOOL)arg4 validator:(id)arg5 ;
-(void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(/*^block*/id)arg2 ;
-(BOOL)failIfCDPNotEnabled;
-(void)setFailIfCDPNotEnabled:(BOOL)arg1 ;
-(void)invalidate;
-(SFSession *)sfSession;
@end

