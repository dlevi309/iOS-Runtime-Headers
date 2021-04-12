/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientPNRDelegate.h>

@protocol IDSCTPNRDelegate;
@class NSString, CoreTelephonyClient, CTXPCServiceSubscriptionContext, IDSCTPNRInfo;

@interface IDSCTPNR : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDelegate, CoreTelephonyClientPNRDelegate> {

	id _coreTelephonyClient;
	NSString* _labelID;
	id _context;
	id<IDSCTPNRDelegate> _PNRDelegate;
	long long _carrierShortcodeSupported;
	os_unfair_lock_s _contextLock;

}

@property (nonatomic,retain) CoreTelephonyClient * coreTelephonyClient;              //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,retain) NSString * labelID;                                     //@synthesize labelID=_labelID - In the implementation block
@property (nonatomic,retain) CTXPCServiceSubscriptionContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s contextLock;                           //@synthesize contextLock=_contextLock - In the implementation block
@property (assign,nonatomic) long long carrierShortcodeSupported;                    //@synthesize carrierShortcodeSupported=_carrierShortcodeSupported - In the implementation block
@property (assign,nonatomic,__weak) id<IDSCTPNRDelegate> PNRDelegate;                //@synthesize PNRDelegate=_PNRDelegate - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) BOOL isPNRSupported; 
@property (nonatomic,readonly) BOOL isSIMReady; 
@property (nonatomic,readonly) BOOL userOptInRequired; 
@property (nonatomic,readonly) IDSCTPNRInfo * PNRInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)subscriptionInfoDidChange;
-(NSString *)labelID;
-(void)carrierBundleChange:(id)arg1 ;
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(void)setLabelID:(NSString *)arg1 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(id)_telephonyRequestForPushToken:(id)arg1 phoneNumberValidationMechanism:(id)arg2 attemptCount:(unsigned)arg3 ;
-(BOOL)isRelevantContext:(id)arg1 ;
-(void)pnrRequestSent:(id)arg1 pnrReqData:(id)arg2 ;
-(void)pnrResponseReceived:(id)arg1 pnrRspData:(id)arg2 ;
-(void)_resetCarrierShortcodeSupportedCachedValue;
-(BOOL)isPNRSupported;
-(id<IDSCTPNRDelegate>)PNRDelegate;
-(id)_initWithCoreTelephonyClient:(id)arg1 SIM:(id)arg2 ;
-(BOOL)userOptInRequired;
-(BOOL)issuePNRForMechanism:(id)arg1 pushToken:(id)arg2 attemptCount:(unsigned)arg3 completion:(/*^block*/id)arg4 ;
-(void)setPNRDelegate:(id<IDSCTPNRDelegate>)arg1 ;
-(long long)carrierShortcodeSupported;
-(void)setCarrierShortcodeSupported:(long long)arg1 ;
-(void)setContextLock:(os_unfair_lock_s)arg1 ;
-(os_unfair_lock_s)contextLock;
-(NSString *)uniqueIdentifier;
-(void)operatorBundleChange:(id)arg1 ;
-(CTXPCServiceSubscriptionContext *)context;
-(IDSCTPNRInfo *)PNRInfo;
-(NSString *)description;
-(void)pnrReadyStateNotification:(id)arg1 regState:(BOOL)arg2 ;
-(BOOL)isSIMReady;
-(void)setContext:(CTXPCServiceSubscriptionContext *)arg1 ;
@end

