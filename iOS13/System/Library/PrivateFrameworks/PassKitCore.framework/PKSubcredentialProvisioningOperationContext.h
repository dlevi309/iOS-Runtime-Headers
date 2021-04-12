/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSURL, PKAppletSubcredential, PKAppletSubcredentialEncryptedRequest, NSData;

@interface PKSubcredentialProvisioningOperationContext : NSObject {

	NSObject*<OS_dispatch_queue> _operationQueue;
	NSURL* _passURL;
	PKAppletSubcredential* _addedCredential;
	PKAppletSubcredentialEncryptedRequest* _registrationData;
	NSData* _trackingAttestation;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> operationQueue;                         //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,copy) NSURL * passURL;                                                         //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,retain) PKAppletSubcredential * addedCredential;                               //@synthesize addedCredential=_addedCredential - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialEncryptedRequest * registrationData;              //@synthesize registrationData=_registrationData - In the implementation block
@property (nonatomic,retain) NSData * trackingAttestation;                                          //@synthesize trackingAttestation=_trackingAttestation - In the implementation block
-(NSObject*<OS_dispatch_queue>)operationQueue;
-(id)initWithQueue:(id)arg1 ;
-(PKAppletSubcredentialEncryptedRequest *)registrationData;
-(void)setAddedCredential:(PKAppletSubcredential *)arg1 ;
-(void)setRegistrationData:(PKAppletSubcredentialEncryptedRequest *)arg1 ;
-(PKAppletSubcredential *)addedCredential;
-(NSData *)trackingAttestation;
-(NSURL *)passURL;
-(void)setPassURL:(NSURL *)arg1 ;
-(void)setTrackingAttestation:(NSData *)arg1 ;
@end

