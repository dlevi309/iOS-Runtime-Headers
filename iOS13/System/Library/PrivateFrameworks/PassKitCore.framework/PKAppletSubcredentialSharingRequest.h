/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKPaymentPass, PKAppletSubcredential, NSString, PKAppletSubcredentialEntitlement;

@interface PKAppletSubcredentialSharingRequest : NSObject <NSSecureCoding, NSCopying> {

	BOOL _forLocalDevice;
	PKPaymentPass* _pass;
	PKAppletSubcredential* _credential;
	NSString* _passIdentifier;
	NSString* _credentialIdentifier;
	PKAppletSubcredentialEntitlement* _entitlement;
	NSString* _recipientIdentifier;
	NSString* _recipientName;

}

@property (nonatomic,retain) PKPaymentPass * pass;                                        //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKAppletSubcredential * credential;                          //@synthesize credential=_credential - In the implementation block
@property (nonatomic,copy,readonly) NSString * passIdentifier;                            //@synthesize passIdentifier=_passIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * credentialIdentifier;                      //@synthesize credentialIdentifier=_credentialIdentifier - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialEntitlement * entitlement;              //@synthesize entitlement=_entitlement - In the implementation block
@property (nonatomic,copy) NSString * recipientIdentifier;                                //@synthesize recipientIdentifier=_recipientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * recipientName;                                      //@synthesize recipientName=_recipientName - In the implementation block
@property (assign,getter=isForLocalDevice,nonatomic) BOOL forLocalDevice;                 //@synthesize forLocalDevice=_forLocalDevice - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKAppletSubcredential *)credential;
-(void)setCredential:(PKAppletSubcredential *)arg1 ;
-(void)setRecipientIdentifier:(NSString *)arg1 ;
-(PKAppletSubcredentialEntitlement *)entitlement;
-(NSString *)recipientIdentifier;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(id)initWithPaymentPass:(id)arg1 ;
-(NSString *)credentialIdentifier;
-(void)setEntitlement:(PKAppletSubcredentialEntitlement *)arg1 ;
-(BOOL)isForLocalDevice;
-(NSString *)recipientName;
-(id)credentialWithIdentifier:(id)arg1 ;
-(id)credentialForPass:(id)arg1 ;
-(id)invitations;
-(NSString *)passIdentifier;
-(void)setRecipientName:(NSString *)arg1 ;
-(void)setForLocalDevice:(BOOL)arg1 ;
@end

