/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
*/

#import <DigitalAccess/DASession.h>
#import <libobjc.A.dylib/KmlSessionCallbacks.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/DAKeyTrackingUpdate.h>
#import <libobjc.A.dylib/DAKeyBindingAttestationUpdate.h>

@class NSString;

@interface DAKeyManagementSession : DASession <KmlSessionCallbacks, NSSecureCoding, DAKeyTrackingUpdate, DAKeyBindingAttestationUpdate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)didEnd:(id)arg1 ;
-(id)setTrackingReceipt:(id)arg1 forKeyWithIdentifier:(id)arg2 ;
-(void)requestBindingAttestationDataForKeyWithIdentifier:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)setBindingAttestation:(id)arg1 forKeyWithIdentifier:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)listKeysWithHandler:(/*^block*/id)arg1 ;
-(void)listKeysWithSession:(id)arg1 seid:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)deleteKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)revokeKeysWithIdentifiers:(id)arg1 sharedByOwnerKeyWithIdentifier:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)cancelInvitationsWithIdentifiers:(id)arg1 sentByOwnerKeyWithIdentifier:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)endPointPrivacyDecryption:(id)arg1 encryptedData:(id)arg2 publicKey:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)signAppData:(id)arg1 appBundleIdentifier:(id)arg2 nonce:(id)arg3 auth:(id)arg4 keyIdentifier:(id)arg5 callback:(/*^block*/id)arg6 ;
-(void)didStart:(BOOL)arg1 ;
-(void)listSharingInvitationsForKeyIdentifier:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)listReceivedSharingInvitationsWithCallback:(/*^block*/id)arg1 ;
-(void)cancelAllFriendInvitationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeSharedKeysWithIdentifiers:(id)arg1 ownerKeyWithIdentifier:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)countImmobilizerTokensForKeyWithIdentifier:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)getManagementProxy:(/*^block*/id)arg1 ;
-(void)localDeleteKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)signData:(id)arg1 auth:(id)arg2 keyIdentifier:(id)arg3 callback:(/*^block*/id)arg4 ;
@end

