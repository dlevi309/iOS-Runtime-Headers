/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol OS_dispatch_queue, MFSecureMIMECompositionManagerDelegate;
#import <Message/Message-Structs.h>
@class NSLock, NSObject, MailAccount, NSString, MFError, NSMutableSet, NSMutableDictionary, NSSet;

@interface MFSecureMIMECompositionManager : NSObject {

	NSLock* _lock;
	NSObject*<OS_dispatch_queue> _queue;
	MailAccount* _sendingAccount;
	NSString* _sendingAddress;
	SecIdentityRef _signingIdentity;
	MFError* _signingIdentityError;
	SecIdentityRef _encryptionIdentity;
	MFError* _encryptionIdentityError;
	NSMutableSet* _recipients;
	NSMutableDictionary* _errorsByRecipient;
	NSMutableDictionary* _certificatesByRecipient;
	int _signingPolicy;
	int _encryptionPolicy;
	int _signingStatus;
	int _encryptionStatus;
	unsigned long long _encryptionStatusSemaphore;
	unsigned long long _signingStatusSemaphore;
	BOOL _invalidated;
	id<MFSecureMIMECompositionManagerDelegate> _delegate;

}

@property (__weak) id<MFSecureMIMECompositionManagerDelegate> delegate; 
@property (copy) NSString * sendingAddress; 
@property (readonly) MailAccount * sendingAccount; 
@property (readonly) int signingPolicy; 
@property (readonly) int encryptionPolicy; 
@property (readonly) int signingStatus; 
@property (readonly) int encryptionStatus; 
@property (readonly) NSSet * recipients; 
+(SecIdentityRef)copySigningIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id*)arg3 ;
+(SecIdentityRef)copyEncryptionIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id*)arg3 ;
+(unsigned)evaluateTrustForSigningCertificate:(SecCertificateRef)arg1 sendingAddress:(id)arg2 ;
+(id)copyEncryptionCertificatesForAccount:(id)arg1 recipientAddresses:(id)arg2 errorsByAddress:(id*)arg3 ;
-(NSSet *)recipients;
-(id)init;
-(id<MFSecureMIMECompositionManagerDelegate>)delegate;
-(id)compositionSpecification;
-(BOOL)_updateSigningStatus_nts;
-(id)initWithSendingAccount:(id)arg1 signingPolicy:(int)arg2 encryptionPolicy:(int)arg3 ;
-(BOOL)_updateEncryptionStatus_nts;
-(void)_notifyDelegateEncryptionStatusDidChange:(int)arg1 certsByRecipient:(id)arg2 errorsByRecipient:(id)arg3 identity:(SecIdentityRef)arg4 error:(id)arg5 ;
-(void)_determineEncryptionStatusWithNewRecipients:(id)arg1 ;
-(void)_notifyDelegateSigningStatusDidChange:(int)arg1 identity:(SecIdentityRef)arg2 error:(id)arg3 ;
-(void)_determineIdentitiesWithSendingAddress:(id)arg1 forSigning:(BOOL)arg2 encryption:(BOOL)arg3 ;
-(void)_determineSigningStatusWithSendingAddress:(id)arg1 ;
-(void)_determineEncryptionStatusWithSendingAddress:(id)arg1 ;
-(BOOL)_shouldAllowSend_nts;
-(void)_nts_setSigningIdentity:(SecIdentityRef)arg1 error:(id)arg2 ;
-(void)_nts_setEncryptionIdentity:(SecIdentityRef)arg1 error:(id)arg2 ;
-(void)_nts_copySigningIdentity:(_SecIdentity*)arg1 error:(id*)arg2 ;
-(void)_determineTrustStatusForSigningIdentity:(SecIdentityRef)arg1 sendingAddress:(id)arg2 ;
-(void)_nts_copyEncryptionIdentity:(_SecIdentity*)arg1 error:(id*)arg2 certificatesByRecipient:(id*)arg3 errorsByRecipient:(id*)arg4 ;
-(BOOL)_shouldSign_nts;
-(BOOL)_shouldEncrypt_nts;
-(id)initWithSigningPolicy:(int)arg1 encryptionPolicy:(int)arg2 ;
-(void)setSendingAddress:(NSString *)arg1 ;
-(NSString *)sendingAddress;
-(MailAccount *)sendingAccount;
-(int)signingPolicy;
-(int)encryptionPolicy;
-(int)signingStatus;
-(int)encryptionStatus;
-(BOOL)shouldAllowSend;
-(void)setDelegate:(id<MFSecureMIMECompositionManagerDelegate>)arg1 ;
-(void)invalidate;
-(void)addRecipients:(id)arg1 ;
-(void)removeRecipients:(id)arg1 ;
-(void)dealloc;
@end

