/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFContactlessPaymentSessionCallbacks.h>

@protocol NFContactlessPaymentSessionDelegate;
@class NSDictionary, NFApplet, NSString;

@interface NFContactlessPaymentSession : NFSession <NFContactlessPaymentSessionCallbacks> {

	NSDictionary* _appletsById;
	id<NFContactlessPaymentSessionDelegate> _delegate;
	unsigned long long _numActiveSEs;
	BOOL _fieldNotificationSent;
	NFApplet* _activeApplet;
	NFApplet* _defaultApplet;

}

@property (assign) id<NFContactlessPaymentSessionDelegate> delegate; 
@property (retain,readonly) NFApplet * activeApplet;                               //@synthesize activeApplet=_activeApplet - In the implementation block
@property (retain,readonly) NFApplet * defaultApplet;                              //@synthesize defaultApplet=_defaultApplet - In the implementation block
@property (readonly) unsigned long long numberOfActiveSecureElements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NFContactlessPaymentSessionDelegate>)delegate;
-(id)appletWithIdentifier:(id)arg1 ;
-(id)felicaAppletState:(id)arg1 ;
-(id)felicaAppletState:(id)arg1 error:(id*)arg2 ;
-(void)didStartSession:(id)arg1 ;
-(void)setDelegate:(id<NFContactlessPaymentSessionDelegate>)arg1 ;
-(id)transitAppletState:(id)arg1 error:(id*)arg2 ;
-(id)allApplets;
-(BOOL)stopCardEmulation:(id*)arg1 ;
-(NFApplet *)activeApplet;
-(BOOL)stopCardEmulation;
-(void)endSession;
-(void)didEndUnexpectedly;
-(void)endSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)didDetectField:(BOOL)arg1 ;
-(void)didDetectFieldNotification:(id)arg1 ;
-(void)didSelectApplet:(id)arg1 ;
-(void)didFelicaStateChange:(id)arg1 ;
-(void)didExpireTransactionForApplet:(id)arg1 ;
-(void)didStartTransaction:(id)arg1 ;
-(void)didEndTransaction:(id)arg1 ;
-(void)didFailDeferredAuthorization;
-(void)didReceivePendingServerRequest;
-(void)didExpressModeStateChange:(unsigned)arg1 withObject:(id)arg2 ;
-(void)didReceiveActivityTimeout:(id)arg1 ;
-(BOOL)setActivePaymentApplet:(id)arg1 authorization:(id)arg2 ;
-(BOOL)setActivePaymentApplet:(id)arg1 authorization:(id)arg2 error:(id*)arg3 ;
-(BOOL)startCardEmulationWithAuthorization:(id)arg1 error:(id*)arg2 ;
-(BOOL)startDeferredCardEmulationWithAuthorization:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)numberOfActiveSecureElements;
-(BOOL)setActivePaymentApplet:(id)arg1 makeDefault:(BOOL)arg2 authorization:(id)arg3 ;
-(BOOL)startCardEmulationWithAuthorization:(id)arg1 ;
-(BOOL)startDeferredCardEmulationWithAuthorization:(id)arg1 ;
-(NFApplet *)defaultApplet;
@end

