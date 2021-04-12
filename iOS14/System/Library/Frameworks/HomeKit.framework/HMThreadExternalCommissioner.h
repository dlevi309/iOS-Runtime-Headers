/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/BorderAgentListener.h>
#import <libobjc.A.dylib/HMFCancellable.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMThreadExternalCommissioner.h>

@protocol HMThreadExternalCommissioner <NSObject>
@required
-(id)commissionAccessoryWithEui64:(id)arg1 setupCode:(id)arg2 completion:(/*^block*/id)arg3;

@end


@protocol OS_dispatch_queue;
@class HMThreadNetworkCredentials, NSUUID, BorderAgentFinder, NSError, HMFTimer, BorderAgentConnector, NSObject, HMHome, NSString;

@interface HMThreadExternalCommissioner : NSObject <BorderAgentListener, HMFCancellable, HMFTimerDelegate, HMFLogging, HMThreadExternalCommissioner> {

	BOOL _active;
	BOOL _commissioning;
	HMThreadNetworkCredentials* _credentials;
	NSUUID* _credentialsUUID;
	BorderAgentFinder* _borderAgentFinder;
	/*^block*/id _finderCompletion;
	NSError* _cancelError;
	HMFTimer* _finderTimer;
	BorderAgentConnector* _borderAgentConnector;
	NSObject*<OS_dispatch_queue> _workQueue;
	double _finderTimeoutInterval;
	HMHome* _credentialsHome;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) double finderTimeoutInterval;                           //@synthesize finderTimeoutInterval=_finderTimeoutInterval - In the implementation block
@property (nonatomic,retain) HMThreadNetworkCredentials * credentials;                 //@synthesize credentials=_credentials - In the implementation block
@property (nonatomic,readonly) NSUUID * credentialsUUID;                               //@synthesize credentialsUUID=_credentialsUUID - In the implementation block
@property (nonatomic,readonly) HMHome * credentialsHome;                               //@synthesize credentialsHome=_credentialsHome - In the implementation block
@property (nonatomic,readonly) BorderAgentFinder * borderAgentFinder;                  //@synthesize borderAgentFinder=_borderAgentFinder - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                              //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) NSError * cancelError;                                    //@synthesize cancelError=_cancelError - In the implementation block
@property (nonatomic,copy) id finderCompletion;                                        //@synthesize finderCompletion=_finderCompletion - In the implementation block
@property (nonatomic,retain) HMFTimer * finderTimer;                                   //@synthesize finderTimer=_finderTimer - In the implementation block
@property (nonatomic,retain) BorderAgentConnector * borderAgentConnector;              //@synthesize borderAgentConnector=_borderAgentConnector - In the implementation block
@property (assign,getter=isCommissioning,nonatomic) BOOL commissioning;                //@synthesize commissioning=_commissioning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setActive:(BOOL)arg1 ;
-(void)setCancelError:(NSError *)arg1 ;
-(BOOL)isActive;
-(id)logIdentifier;
-(id)initCommon;
-(id)initWithHome:(id)arg1 ;
-(HMThreadNetworkCredentials *)credentials;
-(NSError *)cancelError;
-(id)initWithFinderTimeoutInterval:(double)arg1 borderAgentFinder:(id)arg2 ;
-(BorderAgentFinder *)borderAgentFinder;
-(id)_ensureSetupCodeFormat:(id)arg1 ;
-(double)finderTimeoutInterval;
-(id)_computeJoinerPassphraseFromSetupCode:(id)arg1 ;
-(id)finderCompletion;
-(void)_commissionAccessoryWithService:(id)arg1 eui64:(id)arg2 commissionerPassphrase:(id)arg3 PSKc:(id)arg4 joinerPassphrase:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_findBorderRouterForCredentials:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_resolveCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(void)setFinderCompletion:(id)arg1 ;
-(BorderAgentConnector *)borderAgentConnector;
-(HMFTimer *)finderTimer;
-(BOOL)isCommissioning;
-(HMHome *)credentialsHome;
-(void)setCredentials:(HMThreadNetworkCredentials *)arg1 ;
-(void)setFinderTimer:(HMFTimer *)arg1 ;
-(void)setBorderAgentConnector:(BorderAgentConnector *)arg1 ;
-(void)setCommissioning:(BOOL)arg1 ;
-(BOOL)_txtRecordDataMatches:(id)arg1 ;
-(NSUUID *)credentialsUUID;
-(void)agentChanged;
-(id)commissionAccessoryWithEui64:(id)arg1 setupCode:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithNetworkCredentials:(id)arg1 ;
-(void)cancel;
-(void)_cancelWithError:(id)arg1 ;
@end

