/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
*/

#import <DigitalAccess/DASession.h>
#import <libobjc.A.dylib/KmlOwnerPairingCallbacks.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/DAKeyTrackingUpdate.h>
#import <libobjc.A.dylib/DAKeyImmobilizerTokenUpdate.h>

@class NSString;

@interface DAKeyPairingSession : DASession <KmlOwnerPairingCallbacks, NSSecureCoding, DAKeyTrackingUpdate, DAKeyImmobilizerTokenUpdate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)startProbing;
-(void)didEnd:(id)arg1 ;
-(id)preWarmForManufacturer:(id)arg1 ;
-(id)startKeyPairingWithPassword:(id)arg1 displayName:(id)arg2 ;
-(id)setTrackingReceipt:(id)arg1 forKeyWithIdentifier:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)startKeyPairingWithPassword:(id)arg1 displayName:(id)arg2 transport:(long long)arg3 uuid:(id)arg4 ;
-(void)requestImmobilizerTokenRefillForKeyWithIdentifier:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)setImmobilizerTokens:(id)arg1 publicKey:(id)arg2 forKeyWithIdentifier:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)didStart:(BOOL)arg1 ;
-(void)handleKeyPairingCompletionResult:(id)arg1 keyInformation:(id)arg2 trackingRequest:(id)arg3 ;
-(void)handleFirstTransactionCompletionResult:(id)arg1 ;
-(void)handlePreWarmCompletionResult:(id)arg1 ;
-(void)handleProbingCompletionResult:(BOOL)arg1 ;
-(void)handlePairingDidStart;
@end

