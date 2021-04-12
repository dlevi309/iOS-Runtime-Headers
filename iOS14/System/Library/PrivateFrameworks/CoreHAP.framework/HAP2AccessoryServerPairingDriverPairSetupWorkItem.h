/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2AccessoryServerPairingDriverWorkItem.h>
#import <libobjc.A.dylib/HAPPairSetupSessionClientDelegate.h>

@protocol HAP2AccessoryServerPairingDriverDelegate, HAP2AccessoryServerTransport;
@class HAPPairSetupSession, NSError, NSString;

@interface HAP2AccessoryServerPairingDriverPairSetupWorkItem : HAP2AccessoryServerPairingDriverWorkItem <HAPPairSetupSessionClientDelegate> {

	BOOL _invalidSetupCode;
	id<HAP2AccessoryServerPairingDriverDelegate> _delegate;
	id<HAP2AccessoryServerTransport> _transport;
	HAPPairSetupSession* _pairingSession;
	unsigned long long _pairSetupType;
	double _backoffInterval;
	NSError* _cancelError;

}

@property (nonatomic,__weak,readonly) id<HAP2AccessoryServerPairingDriverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<HAP2AccessoryServerTransport> transport;                                //@synthesize transport=_transport - In the implementation block
@property (nonatomic,retain) HAPPairSetupSession * pairingSession;                                        //@synthesize pairingSession=_pairingSession - In the implementation block
@property (nonatomic,readonly) unsigned long long pairSetupType;                                          //@synthesize pairSetupType=_pairSetupType - In the implementation block
@property (assign,getter=isInvalidSetupCode,nonatomic) BOOL invalidSetupCode;                             //@synthesize invalidSetupCode=_invalidSetupCode - In the implementation block
@property (assign,nonatomic) double backoffInterval;                                                      //@synthesize backoffInterval=_backoffInterval - In the implementation block
@property (nonatomic,retain) NSError * cancelError;                                                       //@synthesize cancelError=_cancelError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pairSetupWithType:(unsigned long long)arg1 ;
-(id<HAP2AccessoryServerTransport>)transport;
-(id<HAP2AccessoryServerPairingDriverDelegate>)delegate;
-(void)cancelWithError:(id)arg1 ;
-(void)setCancelError:(NSError *)arg1 ;
-(NSString *)description;
-(void)setPairingSession:(HAPPairSetupSession *)arg1 ;
-(NSError *)cancelError;
-(HAPPairSetupSession *)pairingSession;
-(double)backoffInterval;
-(unsigned long long)pairSetupType;
-(void)runForPairingDriver:(id)arg1 ;
-(id)pairSetupSession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id*)arg2 ;
-(BOOL)pairSetupSession:(id)arg1 didPairWithPeer:(id)arg2 error:(id*)arg3 ;
-(void)pairSetupSession:(id)arg1 didReceiveSetupExchangeData:(id)arg2 ;
-(void)pairSetupSessionDidStart:(id)arg1 ;
-(void)pairSetupSession:(id)arg1 didStopWithError:(id)arg2 ;
-(void)pairSetupSession:(id)arg1 didReceiveSetupCodeRequestWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)pairSetupSession:(id)arg1 didReceiveProductData:(id)arg2 ;
-(void)pairSetupSessionDidReceiveInvalidSetupCode:(id)arg1 ;
-(BOOL)pairSetupSession:(id)arg1 didReceiveBackoffRequestWithTimeInterval:(double)arg2 ;
-(void)_resetPairingState;
-(id)initWithPairSetupType:(unsigned long long)arg1 ;
-(void)setInvalidSetupCode:(BOOL)arg1 ;
-(void)setBackoffInterval:(double)arg1 ;
-(void)_pairingStoppedWithError:(id)arg1 ;
-(BOOL)isInvalidSetupCode;
@end

