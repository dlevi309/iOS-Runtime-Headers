/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFSession.h>

@protocol NFLoyaltyAndPaymentSessionDelegate;
@class NSDictionary, NFApplet, NSSet;

@interface NFLoyaltyAndPaymentSession : NFSession {

	BOOL _pendingServerRequest;
	BOOL _vasTransactionInProgress;
	id<NFLoyaltyAndPaymentSessionDelegate> _delegate;
	BOOL _emulationActive;
	NSDictionary* _appletsById;
	unsigned long long _numActiveSEs;
	BOOL _fieldNotificationSent;
	NFApplet* _activeApplet;
	NSSet* _activeKeys;
	NFApplet* _defaultApplet;

}

@property (assign) id<NFLoyaltyAndPaymentSessionDelegate> delegate; 
@property (retain,readonly) NFApplet * activeApplet;                               //@synthesize activeApplet=_activeApplet - In the implementation block
@property (retain,readonly) NSSet * activeKeys;                                    //@synthesize activeKeys=_activeKeys - In the implementation block
@property (retain,readonly) NFApplet * defaultApplet;                              //@synthesize defaultApplet=_defaultApplet - In the implementation block
@property (readonly) unsigned long long numberOfActiveSecureElements; 
-(NSSet *)activeKeys;
-(id<NFLoyaltyAndPaymentSessionDelegate>)delegate;
-(id)appletWithIdentifier:(id)arg1 ;
-(id)felicaAppletState:(id)arg1 ;
-(id)felicaAppletState:(id)arg1 error:(id*)arg2 ;
-(void)didStartSession:(id)arg1 ;
-(void)setDelegate:(id<NFLoyaltyAndPaymentSessionDelegate>)arg1 ;
-(id)transitAppletState:(id)arg1 error:(id*)arg2 ;
-(id)allApplets;
-(BOOL)setActivePaymentApplet:(id)arg1 keys:(id)arg2 error:(id*)arg3 ;
-(BOOL)setHostCards:(id)arg1 ;
-(BOOL)setActivePaymentApplet:(id)arg1 error:(id*)arg2 ;
-(BOOL)startDeferredCardEmulation:(unsigned char)arg1 authorization:(id)arg2 error:(id*)arg3 ;
-(BOOL)startCardEmulation:(unsigned char)arg1 authorization:(id)arg2 error:(id*)arg3 ;
-(BOOL)stopCardEmulation:(id*)arg1 ;
-(BOOL)enablePlasticCardMode:(BOOL)arg1 error:(id*)arg2 ;
-(NFApplet *)activeApplet;
-(BOOL)stopCardEmulation;
-(void)endSession;
-(void)didEndUnexpectedly;
-(void)endSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)didDetectField:(BOOL)arg1 ;
-(void)didDetectFieldNotification:(id)arg1 ;
-(void)didSelectApplet:(id)arg1 ;
-(void)didFelicaStateChange:(id)arg1 ;
-(BOOL)startExpressMode:(id*)arg1 ;
-(void)didExpireTransactionForApplet:(id)arg1 ;
-(void)didStartTransaction:(id)arg1 ;
-(void)didEndTransaction:(id)arg1 ;
-(void)didFailDeferredAuthorization;
-(void)didSelectValueAddedService:(BOOL)arg1 ;
-(void)didPerformValueAddedServiceTransactions:(id)arg1 ;
-(void)didReceivePendingServerRequest;
-(void)didExpressModeStateChange:(unsigned)arg1 withObject:(id)arg2 ;
-(void)didReceiveActivityTimeout:(id)arg1 ;
-(unsigned long long)numberOfActiveSecureElements;
-(NFApplet *)defaultApplet;
-(BOOL)setActivePaymentApplet:(id)arg1 ;
-(BOOL)_startHostCardEmulation:(id*)arg1 ;
-(BOOL)_startCardEmulationWithAuthorization:(id)arg1 error:(id*)arg2 ;
-(BOOL)_startDeferredCardEmulationWithAuthorization:(id)arg1 error:(id*)arg2 ;
-(BOOL)setActivePaymentApplet:(id)arg1 makeDefault:(BOOL)arg2 ;
-(BOOL)startCardEmulation:(unsigned char)arg1 authorization:(id)arg2 ;
-(BOOL)startDeferredCardEmulation:(unsigned char)arg1 authorization:(id)arg2 ;
-(BOOL)enablePlasticCardMode:(BOOL)arg1 ;
@end

