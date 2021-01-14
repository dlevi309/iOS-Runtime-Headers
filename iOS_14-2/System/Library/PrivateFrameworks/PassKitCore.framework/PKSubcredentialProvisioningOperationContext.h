/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSURL, PKAppletSubcredential, PKAppletSubcredentialEncryptedRequest, NSData, PKAppletSubcredentialSharingInvitation;

@interface PKSubcredentialProvisioningOperationContext : NSObject {

	BOOL _hasAcceptedInvitation;
	NSObject*<OS_dispatch_queue> _operationQueue;
	NSURL* _passURL;
	PKAppletSubcredential* _addedCredential;
	PKAppletSubcredentialEncryptedRequest* _registrationData;
	NSData* _trackingAttestation;
	PKAppletSubcredentialSharingInvitation* _sentInvitation;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> operationQueue;                         //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,copy) NSURL * passURL;                                                         //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,retain) PKAppletSubcredential * addedCredential;                               //@synthesize addedCredential=_addedCredential - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialEncryptedRequest * registrationData;              //@synthesize registrationData=_registrationData - In the implementation block
@property (nonatomic,retain) NSData * trackingAttestation;                                          //@synthesize trackingAttestation=_trackingAttestation - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialSharingInvitation * sentInvitation;               //@synthesize sentInvitation=_sentInvitation - In the implementation block
@property (assign,nonatomic) BOOL hasAcceptedInvitation;                                            //@synthesize hasAcceptedInvitation=_hasAcceptedInvitation - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)operationQueue;
-(NSURL *)passURL;
-(BOOL)hasAcceptedInvitation;
-(void)setSentInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 ;
-(NSData *)trackingAttestation;
-(PKAppletSubcredential *)addedCredential;
-(void)setPassURL:(NSURL *)arg1 ;
-(void)setAddedCredential:(PKAppletSubcredential *)arg1 ;
-(void)setRegistrationData:(PKAppletSubcredentialEncryptedRequest *)arg1 ;
-(PKAppletSubcredentialSharingInvitation *)sentInvitation;
-(void)setHasAcceptedInvitation:(BOOL)arg1 ;
-(PKAppletSubcredentialEncryptedRequest *)registrationData;
-(void)setTrackingAttestation:(NSData *)arg1 ;
@end

