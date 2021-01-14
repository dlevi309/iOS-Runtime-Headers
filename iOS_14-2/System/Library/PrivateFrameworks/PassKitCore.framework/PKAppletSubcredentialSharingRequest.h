/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PKAppletSubcredential *)credential;
-(PKAppletSubcredentialEntitlement *)entitlement;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(id)initWithPaymentPass:(id)arg1 ;
-(id)invitations;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRecipientIdentifier:(NSString *)arg1 ;
-(void)setCredential:(PKAppletSubcredential *)arg1 ;
-(NSString *)recipientName;
-(NSString *)passIdentifier;
-(BOOL)isForLocalDevice;
-(id)credentialForPass:(id)arg1 ;
-(void)setRecipientName:(NSString *)arg1 ;
-(id)credentialWithIdentifier:(id)arg1 ;
-(void)setForLocalDevice:(BOOL)arg1 ;
-(NSString *)credentialIdentifier;
-(PKPaymentPass *)pass;
-(NSString *)recipientIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)setEntitlement:(PKAppletSubcredentialEntitlement *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

