/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
*/

#import <DigitalAccess/DASession.h>
#import <libobjc.A.dylib/KmlOwnerPairingCallbacks.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/DAKeyTrackingUpdate.h>

@class NSString;

@interface DAKeyPairingSession : DASession <KmlOwnerPairingCallbacks, NSSecureCoding, DAKeyTrackingUpdate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)didEnd:(id)arg1 ;
-(id)preWarmForManufacturer:(id)arg1 ;
-(id)startProbing;
-(id)startKeyPairingWithPassword:(id)arg1 displayName:(id)arg2 ;
-(id)setTrackingReceipt:(id)arg1 forKeyWithIdentifier:(id)arg2 ;
-(id)getKeyPairingProxy:(/*^block*/id)arg1 ;
-(void)didStart:(BOOL)arg1 ;
-(void)handleKeyPairingCompletionResult:(id)arg1 keyInformation:(id)arg2 trackingRequest:(id)arg3 ;
-(void)handleFirstTransactionCompletionResult:(id)arg1 ;
-(void)handlePreWarmCompletionResult:(id)arg1 ;
-(void)handleProbingCompletionResult:(BOOL)arg1 ;
-(void)handlePairingDidStart;
@end

