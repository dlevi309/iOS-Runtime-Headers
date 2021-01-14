/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKAppletSubcredentialEntitlement, PKAppletSubcredentialSharingConfirguration, NSSet, NSUUID, PKAppletSubcredentialEncryptedRequest;

@interface PKAppletSubcredential : NSObject <NSSecureCoding> {

	NSString* _identifier;
	long long _state;
	PKAppletSubcredentialEntitlement* _entitlement;
	PKAppletSubcredentialSharingConfirguration* _sharingConfiguration;
	NSString* _invitationIdentifier;
	NSString* _partnerIdentifier;
	NSString* _pairedReaderIdentifier;
	NSSet* _sharedCredentials;
	NSSet* _invitationReceipts;
	NSString* _endpointIdentifier;
	NSUUID* _sharingSessionIdentifier;
	NSString* _originatorIDSHandle;
	unsigned long long _credentialState;
	PKAppletSubcredentialEncryptedRequest* _trackingRequest;

}

@property (assign,nonatomic) unsigned long long credentialState;                                             //@synthesize credentialState=_credentialState - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialEncryptedRequest * trackingRequest;                        //@synthesize trackingRequest=_trackingRequest - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long state;                                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialEntitlement * entitlement;                                 //@synthesize entitlement=_entitlement - In the implementation block
@property (getter=isShareable,nonatomic,readonly) BOOL shareable; 
@property (nonatomic,readonly) BOOL canShare; 
@property (nonatomic,retain) PKAppletSubcredentialSharingConfirguration * sharingConfiguration;              //@synthesize sharingConfiguration=_sharingConfiguration - In the implementation block
@property (nonatomic,copy) NSString * invitationIdentifier;                                                  //@synthesize invitationIdentifier=_invitationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * partnerIdentifier;                                                     //@synthesize partnerIdentifier=_partnerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * pairedReaderIdentifier;                                                //@synthesize pairedReaderIdentifier=_pairedReaderIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * sharedCredentials;                                                        //@synthesize sharedCredentials=_sharedCredentials - In the implementation block
@property (nonatomic,copy) NSSet * invitationReceipts;                                                       //@synthesize invitationReceipts=_invitationReceipts - In the implementation block
@property (nonatomic,copy) NSString * endpointIdentifier;                                                    //@synthesize endpointIdentifier=_endpointIdentifier - In the implementation block
@property (getter=isSharedCredential,nonatomic,readonly) BOOL sharedCredential; 
@property (nonatomic,retain) NSUUID * sharingSessionIdentifier;                                              //@synthesize sharingSessionIdentifier=_sharingSessionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * originatorIDSHandle;                                                   //@synthesize originatorIDSHandle=_originatorIDSHandle - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(PKAppletSubcredentialEntitlement *)entitlement;
-(id)initWithKeyInformation:(id)arg1 ;
-(BOOL)isSharedCredential;
-(NSString *)invitationIdentifier;
-(BOOL)canShare;
-(PKAppletSubcredentialEncryptedRequest *)trackingRequest;
-(void)setSharingConfiguration:(PKAppletSubcredentialSharingConfirguration *)arg1 ;
-(void)setInvitationIdentifier:(NSString *)arg1 ;
-(void)setPairedReaderIdentifier:(NSString *)arg1 ;
-(void)setSharedCredentials:(NSSet *)arg1 ;
-(NSSet *)invitationReceipts;
-(void)setInvitationReceipts:(NSSet *)arg1 ;
-(NSString *)originatorIDSHandle;
-(void)setOriginatorIDSHandle:(NSString *)arg1 ;
-(unsigned long long)credentialState;
-(void)setCredentialState:(unsigned long long)arg1 ;
-(void)setTrackingRequest:(PKAppletSubcredentialEncryptedRequest *)arg1 ;
-(PKAppletSubcredentialSharingConfirguration *)sharingConfiguration;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isShareable;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)partnerIdentifier;
-(id)description;
-(NSString *)pairedReaderIdentifier;
-(NSUUID *)sharingSessionIdentifier;
-(void)setSharingSessionIdentifier:(NSUUID *)arg1 ;
-(void)setState:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setEntitlement:(PKAppletSubcredentialEntitlement *)arg1 ;
-(void)setEndpointIdentifier:(NSString *)arg1 ;
-(NSString *)endpointIdentifier;
-(NSSet *)sharedCredentials;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setPartnerIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

